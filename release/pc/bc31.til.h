#define GHIDRA
#ifndef INCLUDE_GUARD_bc31_til
#define INCLUDE_GUARD_bc31_til
#include "../../../../IDAPlugins/idatil2c/common.h"



struct _7B3C5D519F2E4A5BE311CA6A6DE1B2A0;
struct _979FA3DE6ECCF956231BFC297C4278E6;
struct _B8243ED19B76CA5D55F9F69ED1E7C09F;
struct _DD2596440A2D8284D7D9C623DB5462ED;
struct _F537039E3C3D15C2CDBD1FBA107663C2;
struct fillsettingstype;
struct linesettingstype;
struct textsettingstype;
struct arccoordstype;
struct viewporttype;
struct _exceptionl;
struct farheapinfo;
struct palettetype;
struct diskfree_t;
struct diskinfo_t;
struct __jmp_buf;
struct _complexl;
struct dosdate_t;
struct dostime_t;
struct exception;
struct pointtype;
struct text_info;
struct BYTEREGS;
struct DOSERROR;
struct WORDREGS;
struct COUNTRY;
struct REGPACK;
struct complex;
struct fatinfo;
struct utimbuf;
struct devhdr;
struct dirent;
struct find_t;
struct SREGS;
struct dfree;
struct ffblk;
struct ftime;
struct lconv;
struct timeb;
union REGS;
struct date;
struct stat;
struct time;
struct xfcb;
struct fcb;
struct tm;

struct _7B3C5D519F2E4A5BE311CA6A6DE1B2A0 {int level;unsigned int flags;char fd;unsigned __int8 hold;int bsize;unsigned __int8 *buffer;unsigned __int8 *curp;unsigned int istemp;int token;};
struct _979FA3DE6ECCF956231BFC297C4278E6 {int quot;int rem;};
struct _B8243ED19B76CA5D55F9F69ED1E7C09F {__int32 quot;__int32 rem;};
enum _C967B4BD5950CD7FE5A55F6326D513E0 {DOMAIN = 0x1,SING = 0x2,OVERFLOW = 0x3,UNDERFLOW = 0x4,TLOSS = 0x5,PLOSS = 0x6,STACKFAULT = 0x7,};
struct _DD2596440A2D8284D7D9C623DB5462ED {char ds_drive;char ds_pattern[13];char ds_reserved[7];char ds_attrib;int ds_time;int ds_date;__int32 ds_size;char ds_nameZ[13];};
enum MACRO_MULTIFILEOPENORD {MULTIFILEOPENORD = 1537,};
enum MACRO_FORMATDLGORD30 {FORMATDLGORD30 = 1544,};
enum MACRO_FORMATDLGORD31 {FORMATDLGORD31 = 1543,};
enum MACRO_PRNSETUPDLGORD {PRNSETUPDLGORD = 1539,};
enum MACRO_REPLACEDLGORD {REPLACEDLGORD = 1541,};
enum MACRO__HEAPCORRUPT {_HEAPCORRUPT = -1,};
enum MACRO_BITSPERBYTE {BITSPERBYTE = 8,};
enum MACRO_FILEOPENORD {FILEOPENORD = 1536,};
enum MACRO_PRINTDLGORD {PRINTDLGORD = 1538,};
enum MACRO_SHIFTSTATUS {_KEYBRD_SHIFTSTATUS = 2,_NKEYBRD_SHIFTSTATUS = 18,};
enum MACRO_DMAXPOWTWO {DMAXPOWTWO = 0x3FF,};
enum MACRO_FINDDLGORD {FINDDLGORD = 1540,};
enum MACRO_FMAXPOWTWO {FMAXPOWTWO = 0x7F,};
enum MACRO_FONTDLGORD {FONTDLGORD = 1542,};
enum MACRO__FREEENTRY {_FREEENTRY = 3,_USEDENTRY = 4,};
enum MACRO__HEAPEMPTY {_HEAPEMPTY = 1,_HEAPOK = 2,};
struct fillsettingstype {int pattern;int color;};
enum graphics_drivers {DETECT = 0x0,CGA = 0x1,MCGA = 0x2,EGA = 0x3,EGA64 = 0x4,EGAMONO = 0x5,IBM8514 = 0x6,HERCMONO = 0x7,ATT400 = 0x8,VGA = 0x9,PC3270 = 0xA,CURRENT_DRIVER = 0xFFFF,};
struct linesettingstype {int linestyle;unsigned int upattern;int thickness;};
struct textsettingstype {int font;int direction;int charsize;int horiz;int vert;};
enum MACRO_HIDDENBIT {HIDDENBIT = 1,};
enum MACRO_MAXCOLORS {MAXCOLORS = 15,};
enum MACRO_WILDCARDS {WILDCARDS = 0x1,EXTENSION = 0x2,FILENAME = 0x4,DIRECTORY = 0x8,DRIVE = 0x10,};
enum MACRO__BADVALUE {_BADVALUE = -3,};
enum MACRO__NOCURSOR {_NOCURSOR = 0,_SOLIDCURSOR = 1,_NORMALCURSOR = 2,BLINK = 128,};
enum graphics_errors {grOk = 0x0,grNoInitGraph = 0xFFFF,grNotDetected = 0xFFFE,grFileNotFound = 0xFFFD,grInvalidDriver = 0xFFFC,grNoLoadMem = 0xFFFB,grNoScanMem = 0xFFFA,grNoFloodMem = 0xFFF9,grFontNotFound = 0xFFF8,grNoFontMem = 0xFFF7,grInvalidMode = 0xFFF6,grError = 0xFFF5,grIOerror = 0xFFF4,grInvalidFont = 0xFFF3,grInvalidFontNum = 0xFFF2,grInvalidVersion = 0xFFEE,};
enum MACRO_FILENAME {FILENAME_MAX = 80,};
enum MACRO_MAXDRIVE {MAXDRIVE = 3,};
enum MACRO_MAXSHORT {MAXSHORT = 0x7FFF,};
enum MACRO_O_APPEND {O_APPEND = 0x800,O_CHANGED = 0x1000,O_DEVICE = 0x2000,O_TEXT = 0x4000,O_BINARY = 0x8000,O_NOINHERIT = 0x80,O_DENYALL = 0x10,O_DENYWRITE = 0x20,O_DENYREAD = 0x30,O_DENYNONE = 0x40,};
enum MACRO__BADNODE {_BADNODE = -2,};
enum MACRO__DEXPLEN {_DEXPLEN = 11,};
enum MACRO__EXPBASE {_EXPBASE = 2,};
enum MACRO__FEXPLEN {_FEXPLEN = 8,};
enum MACRO__HARDERR {_HARDERR_IGNORE = 0,_HARDERR_RETRY = 1,_HARDERR_ABORT = 2,_HARDERR_FAIL = 3,};
enum MACRO__HEAPEND {_HEAPEND = 5,};
enum MACRO__LENBASE {_LENBASE = 1,};
enum MACRO__PRINTER {_PRINTER_WRITE = 0,_PRINTER_INIT = 1,_PRINTER_STATUS = 2,};
enum MACRO_ctlFirst {ctlFirst = 0x400,};
enum graphics_modes {CGAC0 = 0x0,CGAC1 = 0x1,CGAC2 = 0x2,CGAC3 = 0x3,CGAHI = 0x4,MCGAC0 = 0x0,MCGAC1 = 0x1,MCGAC2 = 0x2,MCGAC3 = 0x3,MCGAMED = 0x4,MCGAHI = 0x5,EGALO = 0x0,EGAHI = 0x1,EGA64LO = 0x0,EGA64HI = 0x1,EGAMONOHI = 0x0,HERCMONOHI = 0x0,ATT400C0 = 0x0,ATT400C1 = 0x1,ATT400C2 = 0x2,ATT400C3 = 0x3,ATT400MED = 0x4,ATT400HI = 0x5,VGALO = 0x0,VGAMED = 0x1,VGAHI = 0x2,PC3270HI = 0x0,IBM8514LO = 0x0,IBM8514HI = 0x1,};
enum MACRO_DMAXEXP {DMAXEXP = 308,};
enum MACRO_DMINEXP {DMINEXP = -307,};
enum MACRO_DSIGNIF {DSIGNIF = 53,};
enum MACRO_FMAXEXP {FMAXEXP = 38,};
enum MACRO_FMINEXP {FMINEXP = -37,};
enum MACRO_FSIGNIF {FSIGNIF = 24,};
enum MACRO_MAXFILE {MAXFILE = 9,};
enum MACRO_MAXLONG {MAXLONG = 0xFFFF,};
enum MACRO_MAXPATH {MAXPATH = 80,};
enum MACRO_ctlLast {ctlLast = 0x4FF,};
enum MACRO_pshHelp {pshHelp = 1038,};
struct arccoordstype {int x;int y;int xstart;int ystart;int xend;int yend;};
typedef struct _DD2596440A2D8284D7D9C623DB5462ED dosSearchInfo;
enum fill_patterns {EMPTY_FILL = 0x0,SOLID_FILL = 0x1,LINE_FILL = 0x2,LTSLASH_FILL = 0x3,SLASH_FILL = 0x4,BKSLASH_FILL = 0x5,LTBKSLASH_FILL = 0x6,HATCH_FILL = 0x7,XHATCH_FILL = 0x8,INTERLEAVE_FILL = 0x9,WIDE_DOT_FILL = 0xA,CLOSE_DOT_FILL = 0xB,USER_FILL = 0xC,};
enum MACRO_BUFSIZ {BUFSIZ = 512,};
enum MACRO_HANDLE {HANDLE_MAX = 20,};
enum MACRO_HIBITI {HIBITI = 0x8000,HIBITL = 0x0,};
enum MACRO_HIBITS {HIBITS = 0x8000,};
enum MACRO_MAXDIR {MAXDIR = 66,};
enum MACRO_MAXEXT {MAXEXT = 5,};
enum MACRO_MAXINT {MAXINT = 0x7FFF,};
enum MACRO_MCW_IC {MCW_IC = 0x1000,};
enum MACRO_MCW_PC {MCW_PC = 0x300,};
enum MACRO_MCW_RC {MCW_RC = 0xC00,};
enum MACRO_SIGNAL {SIGABRT = 22,SIGFPE = 8,SIGILL = 4,SIGINT = 2,SIGSEGV = 11,SIGTERM = 15,};
enum MACRO__IOFBF {_IOFBF = 0,_IOLBF = 1,_IONBF = 2,};
enum MACRO__NFILE {_NFILE_ = 20,};
enum putimage_ops {COPY_PUT = 0x0,XOR_PUT = 0x1,OR_PUT = 0x2,AND_PUT = 0x3,NOT_PUT = 0x4,};
typedef int sig_atomic_t;
struct viewporttype {int left;int top;int right;int bottom;int clip;};
enum MACRO_CCERR {CCERR_CHOOSECOLORCODES = 0x5000,};
enum MACRO_CDERR {CDERR_DIALOGFAILURE = 0xFFFF,CDERR_GENERALCODES = 0x0,CDERR_STRUCTSIZE = 0x1,CDERR_INITIALIZATION = 0x2,CDERR_NOTEMPLATE = 0x3,CDERR_NOHINSTANCE = 0x4,CDERR_LOADSTRFAILURE = 0x5,CDERR_FINDRESFAILURE = 0x6,CDERR_LOADRESFAILURE = 0x7,CDERR_LOCKRESFAILURE = 0x8,CDERR_MEMALLOCFAILURE = 0x9,CDERR_MEMLOCKFAILURE = 0xA,CDERR_NOHOOK = 0xB,CDERR_REGISTERMSGFAIL = 0xC,};
enum MACRO_CFERR {CFERR_CHOOSEFONTCODES = 0x2000,CFERR_NOFONTS = 0x2001,CFERR_MAXLESSTHANMIN = 0x2002,};
enum MACRO_COLOR {COLOR_HUESCROLL = 700,COLOR_SATSCROLL = 701,COLOR_LUMSCROLL = 702,COLOR_HUE = 703,COLOR_SAT = 704,COLOR_LUM = 705,COLOR_RED = 706,COLOR_GREEN = 707,COLOR_BLUE = 708,COLOR_CURRENT = 709,COLOR_RAINBOW = 710,COLOR_SAVE = 711,COLOR_ADD = 712,COLOR_SOLID = 713,COLOR_TUNE = 714,COLOR_SCHEMES = 715,COLOR_ELEMENT = 716,COLOR_SAMPLES = 717,COLOR_PALETTE = 718,COLOR_MIX = 719,COLOR_BOX1 = 720,COLOR_CUSTOM1 = 721,COLOR_HUEACCEL = 723,COLOR_SATACCEL = 724,COLOR_LUMACCEL = 725,COLOR_REDACCEL = 726,COLOR_GREENACCEL = 727,COLOR_BLUEACCEL = 728,};
enum MACRO_ERRNO {EZERO = 0,EINVFNC = 1,ENOFILE = 2,ENOPATH = 3,ECONTR = 7,EINVMEM = 9,EINVENV = 10,EINVFMT = 11,EINVACC = 12,EINVDAT = 13,EINVDRV = 15,ECURDIR = 16,ENOTSAM = 17,ENMFILE = 18,ENOENT = 2,EMFILE = 4,EACCES = 5,EBADF = 6,ENOMEM = 8,EFAULT = 14,ENODEV = 15,EINVAL = 19,E2BIG = 20,ENOEXEC = 21,EXDEV = 22,ENFILE = 23,ECHILD = 24,ENOTTY = 25,ETXTBSY = 26,EFBIG = 27,ENOSPC = 28,ESPIPE = 29,EROFS = 30,EMLINK = 31,EPIPE = 32,EDOM = 33,ERANGE = 34,EEXIST = 35,EDEADLOCK = 36,EPERM = 37,ESRCH = 38,EINTR = 39,EIO = 40,ENXIO = 41,EAGAIN = 42,ENOTBLK = 43,EBUSY = 44,ENOTDIR = 45,EISDIR = 46,EUCLEAN = 47,};
enum MACRO_FNERR {FNERR_FILENAMECODES = 0x3000,FNERR_SUBCLASSFAILURE = 0x3001,FNERR_INVALIDFILENAME = 0x3002,FNERR_BUFFERTOOSMALL = 0x3003,};
enum MACRO_FOPEN {FOPEN_MAX = 20,};
enum MACRO_FRERR {FRERR_FINDREPLACECODES = 0x4000,FRERR_BUFFERLENGTHZERO = 0x4001,};
enum MACRO_PDERR {PDERR_PRINTERCODES = 0x1000,PDERR_SETUPFAILURE = 0x1001,PDERR_PARSEFAILURE = 0x1002,PDERR_RETDEFFAILURE = 0x1003,PDERR_LOADDRVFAILURE = 0x1004,PDERR_GETDEVMODEFAIL = 0x1005,PDERR_INITFAILURE = 0x1006,PDERR_NODEVICES = 0x1007,PDERR_NODEFAULTPRN = 0x1008,PDERR_DNDMMISMATCH = 0x1009,PDERR_CREATEICFAILURE = 0x100A,PDERR_PRINTERNOTFOUND = 0x100B,PDERR_DEFAULTDIFFERENT = 0x100C,};
enum MACRO_READY {_KEYBRD_READY = 1,_NKEYBRD_READY = 17,};
enum MACRO_SCHAR {SCHAR_MAX = 127,SCHAR_MIN = -128,};
enum MACRO_ULONG {ULONG_MAX = 0xFFFF,MB_LEN_MAX = 0x1,};
enum MACRO_USHRT {USHRT_MAX = 0xFFFF,INT_MAX = 0x7FFF,};
enum MACRO__DISK {_DISK_RESET = 0,_DISK_STATUS = 1,_DISK_READ = 2,_DISK_WRITE = 3,_DISK_VERIFY = 4,_DISK_FORMAT = 5,};
enum MACRO__IEEE {_IEEE = 1,};
enum MACRO__TIME {_TIME_GETCLOCK = 0,_TIME_SETCLOCK = 1,};
enum MACRO_chx10 {chx10 = 0x419,};
enum MACRO_chx11 {chx11 = 0x41A,};
enum MACRO_chx12 {chx12 = 0x41B,};
enum MACRO_chx13 {chx13 = 0x41C,};
enum MACRO_chx14 {chx14 = 0x41D,};
enum MACRO_chx15 {chx15 = 0x41E,};
enum MACRO_chx16 {chx16 = 0x41F,};
enum MACRO_cmb10 {cmb10 = 0x479,};
enum MACRO_cmb11 {cmb11 = 0x47A,};
enum MACRO_cmb12 {cmb12 = 0x47B,};
enum MACRO_cmb13 {cmb13 = 0x47C,};
enum MACRO_cmb14 {cmb14 = 0x47D,};
enum MACRO_cmb15 {cmb15 = 0x47E,};
enum MACRO_cmb16 {cmb16 = 0x47F,};
enum MACRO_edt10 {edt10 = 0x489,};
enum MACRO_edt11 {edt11 = 0x48A,};
enum MACRO_edt12 {edt12 = 0x48B,};
enum MACRO_edt13 {edt13 = 0x48C,};
enum MACRO_edt14 {edt14 = 0x48D,};
enum MACRO_edt15 {edt15 = 0x48E,};
enum MACRO_edt16 {edt16 = 0x48F,};
enum MACRO_lst10 {lst10 = 0x469,};
enum MACRO_lst11 {lst11 = 0x46A,};
enum MACRO_lst12 {lst12 = 0x46B,};
enum MACRO_lst13 {lst13 = 0x46C,};
enum MACRO_lst14 {lst14 = 0x46D,};
enum MACRO_lst15 {lst15 = 0x46E,};
enum MACRO_lst16 {lst16 = 0x46F,};
enum MACRO_psh10 {psh10 = 0x409,};
enum MACRO_psh11 {psh11 = 0x40A,};
enum MACRO_psh12 {psh12 = 0x40B,};
enum MACRO_psh13 {psh13 = 0x40C,};
enum MACRO_psh14 {psh14 = 0x40D,};
enum MACRO_psh15 {psh15 = 0x40E,};
enum MACRO_psh16 {psh16 = 0x40F,};
enum MACRO_rad10 {rad10 = 0x429,};
enum MACRO_rad11 {rad11 = 0x42A,};
enum MACRO_rad12 {rad12 = 0x42B,};
enum MACRO_rad13 {rad13 = 0x42C,};
enum MACRO_rad14 {rad14 = 0x42D,};
enum MACRO_rad15 {rad15 = 0x42E,};
enum MACRO_rad16 {rad16 = 0x42F,};
enum MACRO_stc10 {stc10 = 0x449,};
enum MACRO_stc11 {stc11 = 0x44A,};
enum MACRO_stc12 {stc12 = 0x44B,};
enum MACRO_stc13 {stc13 = 0x44C,};
enum MACRO_stc14 {stc14 = 0x44D,};
enum MACRO_stc15 {stc15 = 0x44E,};
enum MACRO_stc16 {stc16 = 0x44F,};
enum MACRO_stc17 {stc17 = 0x450,};
enum MACRO_stc18 {stc18 = 0x451,};
enum MACRO_stc19 {stc19 = 0x452,};
enum MACRO_stc20 {stc20 = 0x453,};
enum MACRO_stc21 {stc21 = 0x454,};
enum MACRO_stc22 {stc22 = 0x455,};
enum MACRO_stc23 {stc23 = 0x456,};
enum MACRO_stc24 {stc24 = 0x457,};
enum MACRO_stc25 {stc25 = 0x458,};
enum MACRO_stc26 {stc26 = 0x459,};
enum MACRO_stc27 {stc27 = 0x45A,};
enum MACRO_stc28 {stc28 = 0x45B,};
enum MACRO_stc29 {stc29 = 0x45C,};
enum MACRO_stc30 {stc30 = 0x45D,};
enum MACRO_stc31 {stc31 = 0x45E,};
enum MACRO_stc32 {stc32 = 0x45F,};
typedef void (*_CatcherPTR)();
struct _exceptionl {int type;char *name;long double arg1;long double arg2;long double retval;};
struct farheapinfo {void *ptr;unsigned __int32 size;int in_use;};
enum line_styles {SOLID_LINE = 0x0,DOTTED_LINE = 0x1,CENTER_LINE = 0x2,DASHED_LINE = 0x3,USERBIT_LINE = 0x4,};
enum line_widths {NORM_WIDTH = 0x1,THICK_WIDTH = 0x3,};
struct palettetype {unsigned __int8 size;signed __int8 colors[16];};
enum CGA_COLORS {CGA_LIGHTGREEN = 0x1,CGA_LIGHTRED = 0x2,CGA_YELLOW = 0x3,CGA_LIGHTCYAN = 0x1,CGA_LIGHTMAGENTA = 0x2,CGA_WHITE = 0x3,CGA_GREEN = 0x1,CGA_RED = 0x2,CGA_BROWN = 0x3,CGA_CYAN = 0x1,CGA_MAGENTA = 0x2,CGA_LIGHTGRAY = 0x3,};
enum EGA_COLORS {EGA_BLACK = 0x0,EGA_BLUE = 0x1,EGA_GREEN = 0x2,EGA_CYAN = 0x3,EGA_RED = 0x4,EGA_MAGENTA = 0x5,EGA_BROWN = 0x14,EGA_LIGHTGRAY = 0x7,EGA_DARKGRAY = 0x38,EGA_LIGHTBLUE = 0x39,EGA_LIGHTGREEN = 0x3A,EGA_LIGHTCYAN = 0x3B,EGA_LIGHTRED = 0x3C,EGA_LIGHTMAGENTA = 0x3D,EGA_YELLOW = 0x3E,EGA_WHITE = 0x3F,};
enum MACRO_CHAR {CHAR_BIT = 8,CHAR_MAX = 127,CHAR_MIN = -128,};
enum MACRO_EXIT {EXIT_SUCCESS = 0,EXIT_FAILURE = 1,};
enum MACRO_LONG {LONG_MIN = 0x0,};
enum MACRO_MODE {DOS_MODE = 0,OS2_MODE = 1,};
enum MACRO_NFDS {NFDS = 20,};
enum MACRO_NULL {NULL = 0,};
enum MACRO_READ {_KEYBRD_READ = 0,_NKEYBRD_READ = 16,};
enum MACRO_SEEK {SEEK_CUR = 1,SEEK_END = 2,SEEK_SET = 0,};
enum MACRO_SEGV {SEGV_BOUND = 10,SEGV_EXPLICITGEN = 11,};
enum MACRO_SHRT {SHRT_MIN = 0x8000,};
enum MACRO_UINT {UINT_MAX = 0xFFFF,LONG_MAX = 0xFFFF,};
enum MACRO_USER {USER_CHAR_SIZE = 0,};
enum MACRO_WAIT {WAIT_CHILD = 0,WAIT_GRANDCHILD = 1,};
enum MACRO__COM {_COM_INIT = 0,_COM_SEND = 1,_COM_RECEIVE = 2,_COM_STATUS = 3,_COM_CHR7 = 2,_COM_CHR8 = 3,_COM_STOP1 = 0,_COM_STOP2 = 4,_COM_NOPARITY = 0,_COM_EVENPARITY = 24,_COM_ODDPARITY = 8,_COM_110 = 0,_COM_150 = 32,_COM_300 = 64,_COM_600 = 96,_COM_1200 = 128,_COM_2400 = 160,_COM_4800 = 192,_COM_9600 = 224,};
enum MACRO__MAX {_MAX_PATH = 80,_MAX_DRIVE = 3,_MAX_DIR = 66,_MAX_FNAME = 9,_MAX_EXT = 5,};
enum MACRO_chx1 {chx1 = 0x410,};
enum MACRO_chx2 {chx2 = 0x411,};
enum MACRO_chx3 {chx3 = 0x412,};
enum MACRO_chx4 {chx4 = 0x413,};
enum MACRO_chx5 {chx5 = 0x414,};
enum MACRO_chx6 {chx6 = 0x415,};
enum MACRO_chx7 {chx7 = 0x416,};
enum MACRO_chx8 {chx8 = 0x417,};
enum MACRO_chx9 {chx9 = 0x418,};
enum MACRO_cmb1 {cmb1 = 0x470,};
enum MACRO_cmb2 {cmb2 = 0x471,};
enum MACRO_cmb3 {cmb3 = 0x472,};
enum MACRO_cmb4 {cmb4 = 0x473,};
enum MACRO_cmb5 {cmb5 = 0x474,};
enum MACRO_cmb6 {cmb6 = 0x475,};
enum MACRO_cmb7 {cmb7 = 0x476,};
enum MACRO_cmb8 {cmb8 = 0x477,};
enum MACRO_cmb9 {cmb9 = 0x478,};
enum MACRO_edt1 {edt1 = 0x480,};
enum MACRO_edt2 {edt2 = 0x481,};
enum MACRO_edt3 {edt3 = 0x482,};
enum MACRO_edt4 {edt4 = 0x483,};
enum MACRO_edt5 {edt5 = 0x484,};
enum MACRO_edt6 {edt6 = 0x485,};
enum MACRO_edt7 {edt7 = 0x486,};
enum MACRO_edt8 {edt8 = 0x487,};
enum MACRO_edt9 {edt9 = 0x488,};
enum MACRO_frm1 {frm1 = 0x434,};
enum MACRO_frm2 {frm2 = 0x435,};
enum MACRO_frm3 {frm3 = 0x436,};
enum MACRO_frm4 {frm4 = 0x437,};
enum MACRO_grp1 {grp1 = 0x430,};
enum MACRO_grp2 {grp2 = 0x431,};
enum MACRO_grp3 {grp3 = 0x432,};
enum MACRO_grp4 {grp4 = 0x433,};
enum MACRO_ico1 {ico1 = 0x43C,};
enum MACRO_ico2 {ico2 = 0x43D,};
enum MACRO_ico3 {ico3 = 0x43E,};
enum MACRO_ico4 {ico4 = 0x43F,};
enum MACRO_lst1 {lst1 = 0x460,};
enum MACRO_lst2 {lst2 = 0x461,};
enum MACRO_lst3 {lst3 = 0x462,};
enum MACRO_lst4 {lst4 = 0x463,};
enum MACRO_lst5 {lst5 = 0x464,};
enum MACRO_lst6 {lst6 = 0x465,};
enum MACRO_lst7 {lst7 = 0x466,};
enum MACRO_lst8 {lst8 = 0x467,};
enum MACRO_lst9 {lst9 = 0x468,};
enum MACRO_psh1 {psh1 = 0x400,};
enum MACRO_psh2 {psh2 = 0x401,};
enum MACRO_psh3 {psh3 = 0x402,};
enum MACRO_psh4 {psh4 = 0x403,};
enum MACRO_psh5 {psh5 = 0x404,};
enum MACRO_psh6 {psh6 = 0x405,};
enum MACRO_psh7 {psh7 = 0x406,};
enum MACRO_psh8 {psh8 = 0x407,};
enum MACRO_psh9 {psh9 = 0x408,};
enum MACRO_rad1 {rad1 = 0x420,};
enum MACRO_rad2 {rad2 = 0x421,};
enum MACRO_rad3 {rad3 = 0x422,};
enum MACRO_rad4 {rad4 = 0x423,};
enum MACRO_rad5 {rad5 = 0x424,};
enum MACRO_rad6 {rad6 = 0x425,};
enum MACRO_rad7 {rad7 = 0x426,};
enum MACRO_rad8 {rad8 = 0x427,};
enum MACRO_rad9 {rad9 = 0x428,};
enum MACRO_rct1 {rct1 = 0x438,};
enum MACRO_rct2 {rct2 = 0x439,};
enum MACRO_rct3 {rct3 = 0x43A,};
enum MACRO_rct4 {rct4 = 0x43B,};
enum MACRO_scr1 {scr1 = 0x490,};
enum MACRO_scr2 {scr2 = 0x491,};
enum MACRO_scr3 {scr3 = 0x492,};
enum MACRO_scr4 {scr4 = 0x493,};
enum MACRO_scr5 {scr5 = 0x494,};
enum MACRO_scr6 {scr6 = 0x495,};
enum MACRO_scr7 {scr7 = 0x496,};
enum MACRO_scr8 {scr8 = 0x497,};
enum MACRO_stc1 {stc1 = 0x440,};
enum MACRO_stc2 {stc2 = 0x441,};
enum MACRO_stc3 {stc3 = 0x442,};
enum MACRO_stc4 {stc4 = 0x443,};
enum MACRO_stc5 {stc5 = 0x444,};
enum MACRO_stc6 {stc6 = 0x445,};
enum MACRO_stc7 {stc7 = 0x446,};
enum MACRO_stc8 {stc8 = 0x447,};
enum MACRO_stc9 {stc9 = 0x448,};
struct diskfree_t {unsigned int total_clusters;unsigned int avail_clusters;unsigned int sectors_per_cluster;unsigned int bytes_per_sector;};
struct diskinfo_t {unsigned int drive;unsigned int head;unsigned int track;unsigned int sector;unsigned int nsectors;void *buffer;};
enum font_names {DEFAULT_FONT = 0x0,TRIPLEX_FONT = 0x1,SMALL_FONT = 0x2,SANS_SERIF_FONT = 0x3,GOTHIC_FONT = 0x4,SCRIPT_FONT = 0x5,SIMPLEX_FONT = 0x6,TRIPLEX_SCR_FONT = 0x7,COMPLEX_FONT = 0x8,EUROPEAN_FONT = 0x9,BOLD_FONT = 0xA,};
enum text_modes {LASTMODE = 0xFFFF,BW40 = 0x0,C40 = 0x1,BW80 = 0x2,C80 = 0x3,MONO = 0x7,C4350 = 0x40,};
enum MACRO_DIG {DBL_DIG = 15,FLT_DIG = 6,LDBL_DIG = 19,DBL_MANT_DIG = 53,FLT_MANT_DIG = 24,LDBL_MANT_DIG = 64,};
enum MACRO_DIR {HORIZ_DIR = 0,VERT_DIR = 1,};
enum MACRO_DLG {DLG_COLOR = 10,};
enum MACRO_EOF {EOF = -1,};
enum MACRO_EXP {DBL_MAX_EXP = 1024,FLT_MAX_EXP = 128,LDBL_MAX_EXP = 16384,DBL_MAX_10_EXP = 308,FLT_MAX_10_EXP = 38,LDBL_MAX_10_EXP = 4932,DBL_MIN_10_EXP = -307,FLT_MIN_10_EXP = -37,LDBL_MIN_10_EXP = -4931,DBL_MIN_EXP = -1021,FLT_MIN_EXP = -125,LDBL_MIN_EXP = -16381,};
enum MACRO_FLT {FLT_RADIX = 2,FLT_ROUNDS = 1,FLT_GUARD = 1,FLT_NORMALIZE = 1,};
enum MACRO_FPE {FPE_INTOVFLOW = 126,FPE_INTDIV0 = 127,FPE_INVALID = 129,FPE_ZERODIVIDE = 131,FPE_OVERFLOW = 132,FPE_UNDERFLOW = 133,FPE_INEXACT = 134,FPE_STACKFAULT = 135,FPE_EXPLICITGEN = 140,};
enum MACRO_ILL {ILL_EXECUTION = 20,ILL_EXPLICITGEN = 21,};
enum MACRO_INT {INT_MIN = 0x8000,};
enum MACRO_MAX {UCHAR_MAX = 255,SHRT_MAX = 32767,};
enum MACRO_MCW {MCW_EM = 0x3F,};
enum MACRO_NUM {NUM_BASIC_COLORS = 48,NUM_CUSTOM_COLORS = 16,};
enum MACRO_SIG {SIG_DFL = 0,SIG_IGN = 1,SIG_ERR = -1,};
enum MACRO_SYS {SYS_OPEN = 20,};
enum MACRO_TMP {TMP_MAX = 0xFFFF,RAND_MAX = 0x7FFF,};
enum MACRO__IS {_IS_SP = 1,_IS_DIG = 2,_IS_UPP = 4,_IS_LOW = 8,_IS_HEX = 16,_IS_CTL = 32,_IS_PUN = 64,};
struct __jmp_buf {unsigned int j_sp;unsigned int j_ss;unsigned int j_flag;unsigned int j_cs;unsigned int j_ip;unsigned int j_bp;unsigned int j_di;unsigned int j_es;unsigned int j_si;unsigned int j_ds;};
struct _complexl {long double x;long double y;};
struct dosdate_t {unsigned __int8 day;unsigned __int8 month;unsigned int year;unsigned __int8 dayofweek;};
struct dostime_t {unsigned __int8 hour;unsigned __int8 minute;unsigned __int8 second;unsigned __int8 hsecond;};
struct exception {int type;char *name;double arg1;double arg2;double retval;};
struct pointtype {int x;int y;};
typedef int ptrdiff_t;
struct text_info {unsigned __int8 winleft;unsigned __int8 wintop;unsigned __int8 winright;unsigned __int8 winbottom;unsigned __int8 attribute;unsigned __int8 normattr;unsigned __int8 currmode;unsigned __int8 screenheight;unsigned __int8 screenwidth;unsigned __int8 curx;unsigned __int8 cury;};
enum text_just {LEFT_TEXT = 0x0,CENTER_TEXT = 0x1,RIGHT_TEXT = 0x2,BOTTOM_TEXT = 0x0,TOP_TEXT = 0x2,};
struct BYTEREGS {unsigned __int8 al;unsigned __int8 ah;unsigned __int8 bl;unsigned __int8 bh;unsigned __int8 cl;unsigned __int8 ch;unsigned __int8 dl;unsigned __int8 dh;};
struct DOSERROR {int de_exterror;char de_class;char de_action;char de_locus;};
enum MACRO_EM {EM_INVALID = 0x1,EM_DENORMAL = 0x2,EM_ZERODIVIDE = 0x4,EM_OVERFLOW = 0x8,EM_UNDERFLOW = 0x10,EM_INEXACT = 0x20,};
enum MACRO_FA {FA_NORMAL = 0x0,FA_RDONLY = 0x1,FA_HIDDEN = 0x2,FA_SYSTEM = 0x4,FA_LABEL = 0x8,FA_DIREC = 0x10,FA_ARCH = 0x20,};
enum MACRO_IC {IC_AFFINE = 0x1000,IC_PROJECTIVE = 0x0,};
enum MACRO_LC {LC_ALL = 0,LC_COLLATE = 1,LC_CTYPE = 2,LC_MONETARY = 3,LC_NUMERIC = 4,LC_TIME = 5,};
enum MACRO_LK {LK_UNLCK = 0,LK_LOCK = 1,LK_NBLCK = 2,LK_RLCK = 3,LK_NBRLCK = 4,};
enum MACRO_MB {MB_CUR_MAX = 1,};
enum MACRO_PC {PC_24 = 0x0,PC_53 = 0x200,PC_64 = 0x300,};
enum MACRO_RC {RC_CHOP = 0xC00,RC_UP = 0x800,RC_DOWN = 0x400,RC_NEAR = 0x0,};
enum MACRO_SH {SH_COMPAT = 0x0,SH_DENYRW = 0x10,SH_DENYWR = 0x20,SH_DENYRD = 0x30,SH_DENYNONE = 0x40,SH_DENYNO = 0x40,};
enum MACRO_SW {SW_INVALID = 0x1,SW_DENORMAL = 0x2,SW_ZERODIVIDE = 0x4,SW_OVERFLOW = 0x8,SW_UNDERFLOW = 0x10,SW_INEXACT = 0x20,};
enum MACRO__A {_A_NORMAL = 0x0,_A_RDONLY = 0x1,_A_HIDDEN = 0x2,_A_SYSTEM = 0x4,_A_VOLID = 0x8,_A_SUBDIR = 0x10,_A_ARCH = 0x20,};
enum MACRO__F {_F_RDWR = 0x3,_F_READ = 0x1,_F_WRIT = 0x2,_F_BUF = 0x4,_F_LBUF = 0x8,_F_ERR = 0x10,_F_EOF = 0x20,_F_BIN = 0x40,_F_IN = 0x80,_F_OUT = 0x100,_F_TERM = 0x200,};
enum MACRO__O {_O_RUNFLAGS = 0x700,_O_WRITABLE = 0x100,_O_EOF = 0x200,};
struct WORDREGS {unsigned int ax;unsigned int bx;unsigned int cx;unsigned int dx;unsigned int si;unsigned int di;unsigned int cflag;unsigned int flags;};
typedef void (*atexit_t)();
struct COUNTRY {int co_date;char co_curr[5];char co_thsep[2];char co_desep[2];char co_dtsep[2];char co_tmsep[2];char co_currstyle;char co_digits;char co_time;__int32 co_case;char co_dasep[2];char co_fill[10];};
enum MACRO_L {L_ctermid = 5,L_tmpnam = 13,};
enum MACRO_O {O_RDONLY = 1,O_WRONLY = 2,O_RDWR = 4,O_CREAT = 256,O_TRUNC = 512,O_EXCL = 1024,};
enum MACRO_P {P_WAIT = 0,P_NOWAIT = 1,P_OVERLAY = 2,P_NOWAITO = 3,P_DETACH = 4,};
enum MACRO_S {S_IFMT = 0xF000,S_IFDIR = 0x4000,S_IFIFO = 0x1000,S_IFCHR = 0x2000,S_IFBLK = 0x3000,S_IFREG = 0x8000,S_IREAD = 0x100,S_IWRITE = 0x80,S_IEXEC = 0x40,};
struct REGPACK {unsigned int r_ax;unsigned int r_bx;unsigned int r_cx;unsigned int r_dx;unsigned int r_bp;unsigned int r_si;unsigned int r_di;unsigned int r_ds;unsigned int r_es;unsigned int r_flags;};
typedef __int32 clock_t;
struct complex {double x;double y;};
struct fatinfo {char fi_sclus;char fi_fatid;unsigned int fi_nclus;int fi_bysec;};
typedef struct __jmp_buf jmp_buf[1];
#define wchar_t char
enum COLORS {BLACK = 0x0,BLUE = 0x1,GREEN = 0x2,CYAN = 0x3,RED = 0x4,MAGENTA = 0x5,BROWN = 0x6,LIGHTGRAY = 0x7,DARKGRAY = 0x8,LIGHTBLUE = 0x9,LIGHTGREEN = 0xA,LIGHTCYAN = 0xB,LIGHTRED = 0xC,LIGHTMAGENTA = 0xD,YELLOW = 0xE,WHITE = 0xF,};
struct devhdr {__int32 dh_next;int dh_attr;unsigned int dh_strat;unsigned int dh_inter;char dh_name[8];};
struct dirent {char d_name[13];};
struct find_t {char reserved[21];char attrib;unsigned int wr_time;unsigned int wr_date;__int32 size;char name[13];};
typedef __int32 fpos_t;
typedef struct _B8243ED19B76CA5D55F9F69ED1E7C09F ldiv_t;
typedef unsigned int size_t;
typedef __int32 time_t;
struct SREGS {unsigned int es;unsigned int cs;unsigned int ss;unsigned int ds;};
struct dfree {unsigned int df_avail;unsigned int df_total;unsigned int df_bsec;unsigned int df_sclus;};
typedef struct _979FA3DE6ECCF956231BFC297C4278E6 div_t;
struct ffblk {char ff_reserved[21];char ff_attrib;unsigned int ff_ftime;unsigned int ff_fdate;__int32 ff_fsize;char ff_name[13];};
struct ftime {unsigned __int16 ft_tsec : 5;unsigned __int16 ft_min : 6;unsigned __int16 ft_hour : 5;unsigned __int16 ft_day : 5;unsigned __int16 ft_month : 4;unsigned __int16 ft_year : 7;};
struct lconv {char *decimal_point;char *thousands_sep;char *grouping;char *int_curr_symbol;char *currency_symbol;char *mon_decimal_point;char *mon_thousands_sep;char *mon_grouping;char *positive_sign;char *negative_sign;char int_frac_digits;char frac_digits;char p_cs_precedes;char p_sep_by_space;char n_cs_precedes;char n_sep_by_space;char p_sign_posn;char n_sign_posn;};
struct timeb {__int32 time;int millitm;int timezone;int dstflag;};
typedef struct _7B3C5D519F2E4A5BE311CA6A6DE1B2A0 FILE;
struct date {int da_year;char da_day;char da_mon;};
struct stat {int st_dev;int st_ino;int st_mode;int st_nlink;int st_uid;int st_gid;int st_rdev;__int32 st_size;__int32 st_atime;__int32 st_mtime;__int32 st_ctime;};
struct time {unsigned __int8 ti_min;unsigned __int8 ti_hour;unsigned __int8 ti_hund;unsigned __int8 ti_sec;};
typedef struct _F537039E3C3D15C2CDBD1FBA107663C2 DIR;
struct fcb {char fcb_drive;char fcb_name[8];char fcb_ext[3];int fcb_curblk;int fcb_recsize;__int32 fcb_filsize;int fcb_date;char fcb_resv[10];char fcb_currec;__int32 fcb_random;};
struct tm {int tm_sec;int tm_min;int tm_hour;int tm_mday;int tm_mon;int tm_year;int tm_wday;int tm_yday;int tm_isdst;};
struct _F537039E3C3D15C2CDBD1FBA107663C2 {char _d_reserved[30];struct dirent _d_dirent;char *_d_dirname;char _d_first;unsigned __int8 _d_magic;};
typedef enum _C967B4BD5950CD7FE5A55F6326D513E0 _mexcep;
struct utimbuf {time_t actime;time_t modtime;};
struct xfcb {char xfcb_flag;char xfcb_resv[5];char xfcb_attr;struct fcb xfcb_fcb;};
union REGS {struct WORDREGS x;struct BYTEREGS h;};



#endif
