import sys
import __main__ as ghidra_app

from java.io import *
from java.lang import *
from ghidra.program.model.data import FileDataTypeManager, BuiltInDataTypeManager
from ghidra.app.plugin.core.analysis import DefaultDataTypeManagerService
from ghidra.app.plugin.core.cparser import *
from ghidra.app.util.cparser.CPP import PreProcessor
from ghidra.app.util.cparser.C import CParser, CParserUtils
from generic.test import TestUtils
from ghidra.util.task import TaskMonitor, ConsoleTaskMonitor

PARSER_DEBUG_OUTFILE = "CParserPlugin.out"

def ttt():
    parserMessages = ""
    cppMessages = ""

    try:
        print("PreProcessing");
        cpp = PreProcessor();
        #TestUtils.setInstanceField("verboseLevel", cpp, 1)
        cpp.setArgs([]);
        os = System.out;
        homeDir = System.getProperty("user.home");
        fName = homeDir + File.separator + "CParserPlugin.out";
        os = PrintStream(FileOutputStream(fName));

        old = System.out;
        System.setOut(os);
        bos = ByteArrayOutputStream();
        cpp.setOutputStream(bos);
        
        cpp.parse(InputHdrFile);
        cppMessages += cpp.getParseMessages()
        
        # process all the defines and add any that are integer values into
        # the Equates table
        cpp.getDefinitions().populateDefineEquates(openDTmanagers, dtMgr);

        System.out.println(bos.toString());

        System.setOut(old);
        os.close();

        print("Parsing C");

        cParser = CParser(dtMgr, True, openDTmanagers);
        cParser.setParseFileName(PARSER_DEBUG_OUTFILE);
        bis = ByteArrayInputStream(bos.toByteArray());
        try:
            parserMessages = "";
            cParser.setParseFileName(fName);
            cParser.parse(bis);
        finally:
            parserMessages = cParser.getParseMessages();

        if not cParser.didParseSucceed():
            raise Exception("Failed to parse!")

    except Exception as e:
        print("Parse Error: ", e)
        print("cppMsg: %s" % cppMessages)
        print("parserMsg: %s" % parserMessages)
        raise
    else:
        print("Parsed successfully!")
        print("cppMsg: %s" % cppMessages)
        print("parserMsg: %s" % parserMessages)


def run(args):
    print(list(args))
    if len(args) < 2:
        print('''[!] Wrong parameters! Usage: ./analyzeHeadless <PATH_TO_GHIDRA_PROJECT> <PROJECT_NAME> -process|-import <TARGET_FILE> [-scriptPath <PATH_TO_SCRIPT_DIR>] -postScript|-preScript decompile.py <InputHdrFile> <OutputGDT> [<Dependencies>]''')
        return
    InputHdrFile = args[0]
    OutputGDT = args[1]
    #ParserOption = args[2]
    Depends = []
    if len(args) >= 3:
        Depends = [c for c in args[2].strip().split(';') if c]
    
    #tool = state.getTool(); print(tool) # will be None
    #plugin = [c for c in tool.getManagedPlugins() if 'CParserPlugin' in repr(c)][0]
    #plugin = CParserPlugin(tool)

    #dtmService = tool.getService(ghidra.app.services.DataTypeManagerService)
    #dtmService = DefaultDataTypeManagerService();

    builtinArchive = BuiltInDataTypeManager.getDataTypeManager()
    
    dependDtms = [builtinArchive]
    # open dependency dt
    if Depends:
        print("Opening Depend GDT: %s" % Depends)
        dependDtms += [FileDataTypeManager.openFileArchive(File(c), False) for c in Depends]
    
    # Do Parsing
    import os
    if os.path.exists(OutputGDT):
        print("Removing Existing GDT")
        os.unlink(OutputGDT)
    dtMgr = FileDataTypeManager.createFileArchive(File(OutputGDT))
    openDTmanagers = dependDtms
    
    try:
        message = CParserUtils.parseHeaderFiles(openDTmanagers, [InputHdrFile], [], dtMgr, None, ConsoleTaskMonitor())
        print("Parsing result: \n%s" % message)
    except:
        #print("parsing failed! %s" % e)
        print("Parsing Error: %s %s" % (sys.exc_info()[0], sys.exc_info()[1]))
        #import traceback; traceback.print_exc()
        System.exit(1)

    count = dtMgr.getDataTypeCount(True)
    if (count != 0):
        print("Parsing Succeeded! Got %d types" % count)
        #packedDB = TestUtils.getInstanceField("packedDB", dtMgr)
        #print(TestUtils.getInstanceField("dbDir", packedDB))

        # Must do this, or the gdt won't close properly
        dbHandle = TestUtils.getInstanceField("dbHandle", dtMgr)
        dbHandle.save(ConsoleTaskMonitor());
        dbHandle.close();
        #import time; time.sleep(5)
        dtMgr.close();
        System.exit(0) # must use System.exit here, sys.exit won't work
    else:
        print("Parsing No Error, but got ZERO types!")
        dtMgr.close();
        System.exit(1)

if __name__ == '__main__':
    # getScriptArgs gets argument for this python script using `analyzeHeadless`
    args = ghidra_app.getScriptArgs()
    run(args)