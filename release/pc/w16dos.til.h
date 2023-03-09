#define GHIDRA
#ifndef INCLUDE_GUARD_w16dos_til
#define INCLUDE_GUARD_w16dos_til
#include "../../../../IDAPlugins/idatil2c/common.h"



struct _1CFB5D895C6B2534CA582A7618E3281E;
struct _49112922E8D3FA36A9D9A6626290371D;
struct _5D287BBCEE976282B532DF578B48FE30;
struct _5E4AF5222BD6224857F90F4001142430;
struct _743CAB6F7D155AB299758056AE88817D;
struct _979FA3DE6ECCF956231BFC297C4278E6;
struct _AD9A92298C4A3046DC03D0819903D2FB;
struct _B8243ED19B76CA5D55F9F69ED1E7C09F;
struct textsettings;
struct _diskfree_t;
struct _diskinfo_t;
struct videoconfig;
struct _DOSERROR;
struct _fontinfo;
struct _heapinfo;
struct _wxycoord;
struct dosdate_t;
struct dostime_t;
struct exception;
struct BYTEREGS;
struct DOSERROR;
struct INTPACKB;
struct INTPACKW;
struct INTPACKX;
struct REGPACKB;
struct REGPACKW;
struct REGPACKX;
struct WORDREGS;
struct _complex;
union INTPACK;
union REGPACK;
struct __iobuf;
struct complex;
struct rccoord;
struct utimbuf;
struct xycoord;
struct dirent;
struct find_t;
struct SREGS;
struct _stat;
struct lconv;
struct timeb;
union REGS;
struct stat;
struct tm;

enum _285FE556F43A898D15AEDE2AD44E964B {_PG_LINEARAXIS = 0x1,_PG_LOGAXIS = 0x2,};
enum _2B22B6772705E6AEC2CAD82F2944FAB1 {_PG_DECFORMAT = 0x1,_PG_EXPFORMAT = 0x2,};
enum _3B9604985F7797BDFAC080FFD41D1C2D {_PG_LEFT = 0x1,_PG_CENTER = 0x2,_PG_RIGHT = 0x3,_PG_BOTTOM = 0x4,_PG_OVERLAY = 0x5,};
struct _49112922E8D3FA36A9D9A6626290371D {int x1;int y1;int x2;int y2;int border;int background;int borderstyle;int bordercolor;};
enum _5B647C1D3C6CCCC37E762A84E6256E6C {_PG_POINTANDLINE = 0x1,_PG_POINTONLY = 0x2,};
struct _5D287BBCEE976282B532DF578B48FE30 {char title[70];int titlecolor;int justify;};
enum _657FB054558D6B1658FCC1B2803345B2 {_PATH_RIGHT = 0x0,_PATH_LEFT = 0x1,_PATH_UP = 0x2,_PATH_DOWN = 0x3,};
enum _6F96E9681260FC748372DD4343C17B95 {_GWRAPOFF = 0x0,_GWRAPON = 0x1,};
enum _8B2899C6F90A30B1685F1D140540F33D {_TOP = 0x1,_CAP = 0x2,_HALF = 0x3,_BASE = 0x4,_BOTTOM = 0x5,};
struct _979FA3DE6ECCF956231BFC297C4278E6 {int quot;int rem;};
enum _A71B67504CA7F11F32ADA55062B203FF {_PG_PERCENT = 0x1,_PG_NOPERCENT = 0x2,};
struct _B8243ED19B76CA5D55F9F69ED1E7C09F {__int32 quot;__int32 rem;};
enum _C0DC64B9E5ECA4890A3EC660268C0D54 {_GCURSOROFF = 0x0,_GCURSORON = 0x1,};
enum _D229372A3490280A1D79088C14D8B580 {INTR_CF = 0x1,INTR_PF = 0x4,INTR_AF = 0x10,INTR_ZF = 0x40,INTR_SF = 0x80,INTR_TF = 0x100,INTR_IF = 0x200,INTR_DF = 0x400,INTR_OF = 0x800,};
enum _E5A8E9F86D2C3E1C078A8FD0090EC5C6 {_NORMAL = 0x0,_LEFT = 0x1,_CENTER = 0x2,_RIGHT = 0x3,};
enum _FB386DB2273F2B9DF0ED23A469EDEB29 {_PG_PLAINBARS = 0x1,_PG_STACKEDBARS = 0x2,};
enum _FCD69D9C70D38EBE1D2A73A05A192637 {_GOR = 0x0,_GAND = 0x1,_GPRESET = 0x2,_GPSET = 0x3,_GXOR = 0x4,};
enum _FEA1A8332DF572B4B82D4D6EC6C47001 {_PG_BARCHART = 0x1,_PG_COLUMNCHART = 0x2,_PG_LINECHART = 0x3,_PG_SCATTERCHART = 0x4,_PG_PIECHART = 0x5,};
enum MACRO__GRINSUFFICIENTMEMORY {_GRINSUFFICIENTMEMORY = -5,};
enum MACRO__GRFONTFILENOTFOUND {_GRFONTFILENOTFOUND = -6,};
enum MACRO__GRINVALIDPARAMETER {_GRINVALIDPARAMETER = -4,};
enum MACRO__GRMODENOTSUPPORTED {_GRMODENOTSUPPORTED = -2,};
enum MACRO__GRINVALIDFONTFILE {_GRINVALIDFONTFILE = -7,};
enum MACRO__GRNOTINPROPERMODE {_GRNOTINPROPERMODE = -3,};
enum MACRO__GFILLINTERIOR {_GFILLINTERIOR = 3,};
enum MACRO__SVRES256COLOR {_SVRES256COLOR = 0x103,};
enum MACRO__GCLEARSCREEN {_GCLEARSCREEN = 0,_GVIEWPORT = 1,_GWINDOW = 2,};
enum MACRO__LIGHTMAGENTA {_LIGHTMAGENTA = 0x153F,};
enum MACRO__MAXCOLORMODE {_MAXCOLORMODE = -2,};
enum MACRO__MRES256COLOR {_MRES256COLOR = 19,_URES256COLOR = 256,};
enum MACRO__SVRES16COLOR {_SVRES16COLOR = 0x102,};
enum MACRO__VRES256COLOR {_VRES256COLOR = 0x101,};
enum MACRO__XRES256COLOR {_XRES256COLOR = 0x105,};
enum MACRO__ANALOGCOLOR {_ANALOGCOLOR = 6,};
enum MACRO__BRIGHTWHITE {_BRIGHTWHITE = 0x3F3F,};
enum MACRO__DEFAULTMODE {_DEFAULTMODE = -1,};
enum MACRO__ERESNOCOLOR {_ERESNOCOLOR = 15,_ERESCOLOR = 16,};
enum MACRO__GSCROLLDOWN {_GSCROLLDOWN = -1,};
enum MACRO__HEAPBADNODE {_HEAPBADNODE = 3,_HEAPEND = 4,};
enum MACRO__HRES16COLOR {_HRES16COLOR = 14,};
enum MACRO__LIGHTYELLOW {_LIGHTYELLOW = 16191,};
enum MACRO__MAXTEXTROWS {_MAXTEXTROWS = -1,};
enum MACRO__MRES16COLOR {_MRES16COLOR = 13,};
enum MACRO__MRESNOCOLOR {_MRESNOCOLOR = 5,};
enum MACRO__VRES16COLOR {_VRES16COLOR = 18,};
enum MACRO__XRES16COLOR {_XRES16COLOR = 0x104,};
enum MACRO_O_NOINHERIT {O_NOINHERIT = 0x80,_O_NOINHERIT = 0x80,};
enum MACRO__ANALOGMONO {_ANALOGMONO = 5,};
enum MACRO__GRNOOUTPUT {_GRNOOUTPUT = 1,_GRCLIPPED = 2,};
enum MACRO__HEAPBADPTR {_HEAPBADPTR = 5,};
enum MACRO__LIGHTGREEN {_LIGHTGREEN = 0x3F15,};
enum MACRO__MAXRESMODE {_MAXRESMODE = -3,};
enum MACRO__VRES2COLOR {_VRES2COLOR = 17,};
enum MACRO__GSCROLLUP {_GSCROLLUP = 1,};
enum MACRO__LIGHTBLUE {_LIGHTBLUE = 0x1515,};
enum MACRO__LIGHTCYAN {_LIGHTCYAN = 0x3F15,};
enum MACRO__NODISPLAY {_NODISPLAY = -1,};
enum MACRO__USEDENTRY {_USEDENTRY = 0,_FREEENTRY = 1,};
enum MACRO__ENHANCED {_ENHANCED = 3,};
enum MACRO__HERCMONO {_HERCMONO = 11,};
enum MACRO__HERCULES {_HERCULES = 3,_MCGA = 4,};
enum MACRO__LIGHTRED {_LIGHTRED = 0x153F,};
enum MACRO__MAX_PATH {_MAX_PATH = 144,_MAX_DRIVE = 3,_MAX_DIR = 130,_MAX_FNAME = 9,_MAX_EXT = 5,_MAX_PATH2 = 147,};
enum MACRO__TEXTBW40 {_TEXTBW40 = 0,_TEXTC40 = 1,_TEXTBW80 = 2,};
enum MACRO__TEXTMONO {_TEXTMONO = 7,};
enum MACRO_FILENAME {FILENAME_MAX = 80,FOPEN_MAX = 20,OPEN_MAX = 20,PATH_MAX = 143,};
enum MACRO_OVERFLOW {OVERFLOW = 3,UNDERFLOW = 4,};
enum MACRO_O_APPEND {O_APPEND = 0x10,_O_APPEND = 0x10,};
enum MACRO_O_BINARY {O_BINARY = 0x200,_O_BINARY = 0x200,};
enum MACRO_O_RDONLY {O_RDONLY = 0x0,_O_RDONLY = 0x0,};
enum MACRO_O_WRONLY {O_WRONLY = 0x1,_O_WRONLY = 0x1,};
enum MACRO__GBORDER {_GBORDER = 2,};
enum MACRO__HARDERR {_HARDERR_IGNORE = 0,_HARDERR_RETRY = 1,_HARDERR_ABORT = 2,_HARDERR_FAIL = 3,};
enum MACRO__MAGENTA {_MAGENTA = 0x2A,};
enum MACRO__NKEYBRD {_NKEYBRD_READ = 0x10,_NKEYBRD_READY = 0x11,_NKEYBRD_SHIFTSTATUS = 0x12,};
enum MACRO__PRINTER {_PRINTER_WRITE = 0,_PRINTER_INIT = 1,_PRINTER_STATUS = 2,};
enum MACRO__TEXTC80 {_TEXTC80 = 3,_MRES4COLOR = 4,};
enum MACRO__UNKNOWN {_UNKNOWN = 0,_MDPA = 1,_CGA = 2,};
enum MACRO_O_CREAT {O_CREAT = 0x20,_O_CREAT = 0x20,};
enum MACRO_O_TRUNC {O_TRUNC = 0x40,_O_TRUNC = 0x40,};
enum MACRO__BINARY {_BINARY = 0x40,_IOFBF = 0x100,_IOLBF = 0x200,_IONBF = 0x400,_TMPFIL = 0x800,_DIRTY = 0x1000,_ISTTY = 0x2000,_DYNAMIC = 0x4000,};
enum MACRO__HEAPOK {_HEAPOK = 0,_HEAPEMPTY = 1,_HEAPBADBEGIN = 2,};
enum MACRO__HRESBW {_HRESBW = 6,};
enum MACRO__KEYBRD {_KEYBRD_READ = 0,_KEYBRD_READY = 1,_KEYBRD_SHIFTSTATUS = 2,};
enum MACRO__MCW_IC {_MCW_IC = 0x1000,};
enum MACRO__MCW_PC {_MCW_PC = 0x300,};
enum MACRO__MCW_RC {_MCW_RC = 0xC00,};
enum MACRO__NFILES {_NFILES = 20,};
enum MACRO__YELLOW {_YELLOW = 0x3F3F,};
enum MACRO_ACCESS {ACCESS_WR = 0x2,ACCESS_RD = 0x4,};
enum MACRO_BUFSIZ {BUFSIZ = 512,};
enum MACRO_CLOCKS {CLOCKS_PER_SEC = 100,};
enum MACRO_DOMAIN {DOMAIN = 1,SING = 2,};
enum MACRO_FILENO {STDIN_FILENO = 0,STDOUT_FILENO = 1,STDERR_FILENO = 2,STDAUX_FILENO = 3,STDPRN_FILENO = 4,};
enum MACRO_MB_CUR {MB_CUR_MAX = 2,};
enum MACRO_MCW_IC {MCW_IC = 4096,};
enum MACRO_MCW_PC {MCW_PC = 768,};
enum MACRO_MCW_RC {MCW_RC = 3072,};
enum MACRO_NBRLCK {_LK_NBRLCK = 4,LK_NBRLCK = 4,};
enum MACRO_O_EXCL {O_EXCL = 0x400,_O_EXCL = 0x400,};
enum MACRO_O_RDWR {O_RDWR = 0x2,_O_RDWR = 0x2,};
enum MACRO_O_TEXT {O_TEXT = 0x100,_O_TEXT = 0x100,};
enum MACRO_SIGNAL {SIGABRT = 1,SIGFPE = 2,SIGILL = 3,SIGINT = 4,SIGSEGV = 5,SIGTERM = 6,SIGBREAK = 7,SIGUSR1 = 8,SIGUSR2 = 9,SIGUSR3 = 10,SIGIDIVZ = 11,SIGIOVFL = 12,_SIGMAX = 12,_SIGMIN = 1,};
enum MACRO__BLACK {_BLACK = 0x0,_BLUE = 0x0,};
enum MACRO__BROWN {_BROWN = 0x152A,};
enum MACRO__CNTRL {_CNTRL = 0x1,};
enum MACRO__DIGIT {_DIGIT = 0x20,};
enum MACRO__GREEN {_GREEN = 0x2A00,};
enum MACRO__LOWER {_LOWER = 0x80,};
enum MACRO__PRINT {_PRINT = 0x8,};
enum MACRO__PUNCT {_PUNCT = 0x4,};
enum MACRO__SPACE {_SPACE = 0x2,};
enum MACRO__UPPER {_UPPER = 0x40,};
enum MACRO__WHITE {_WHITE = 0x2A2A,};
enum MACRO__XDIGT {_XDIGT = 0x10,};
typedef struct _5E4AF5222BD6224857F90F4001142430 paletteentry;
typedef int sig_atomic_t;
struct textsettings {int basevectorx;int basevectory;int txpath;int height;int width;int spacing;int horizalign;int vertalign;};
enum MACRO_ERRNO {EZERO = 0,ENOENT = 1,E2BIG = 2,ENOEXEC = 3,EBADF = 4,ENOMEM = 5,EACCES = 6,EEXIST = 7,EXDEV = 8,EINVAL = 9,ENFILE = 10,EMFILE = 11,ENOSPC = 12,EDOM = 13,ERANGE = 14,EDEADLK = 15,EDEADLOCK = 15,EINTR = 16,ECHILD = 17,EAGAIN = 18,EBUSY = 19,EFBIG = 20,EIO = 21,EISDIR = 22,ENOTDIR = 23,EMLINK = 24,ENOTBLK = 25,ENOTTY = 26,ENXIO = 27,EPERM = 28,EPIPE = 29,EROFS = 30,ESPIPE = 31,ESRCH = 32,ETXTBSY = 33,EFAULT = 34,ENAMETOOLONG = 35,ENODEV = 36,ENOLCK = 37,ENOSYS = 38,ENOTEMPTY = 39,};
enum MACRO_NBLCK {_LK_NBLCK = 2,LK_NBLCK = 2,};
enum MACRO_PLOSS {PLOSS = 6,};
enum MACRO_SCHAR {SCHAR_MIN = -128,SCHAR_MAX = 127,};
enum MACRO_TLOSS {TLOSS = 5,};
enum MACRO_UCHAR {UCHAR_MAX = 255,};
enum MACRO_ULONG {ULONG_MAX = -1,};
enum MACRO_UNLCK {_LK_UNLCK = 0,LK_UNLCK = 0,};
enum MACRO__CYAN {_CYAN = 0x2A00,};
enum MACRO__DISK {_DISK_RESET = 0,_DISK_STATUS = 1,_DISK_READ = 2,_DISK_WRITE = 3,_DISK_VERIFY = 4,_DISK_FORMAT = 5,};
enum MACRO__GRAY {_GRAY = 0x1515,};
enum MACRO__GROK {_GROK = 0,_GRERROR = -1,};
enum MACRO__M1ST {_M1ST = 1,_M2ND = 2,_MSYMB = 4,_MPUNCT = 8,};
enum MACRO__MONO {_MONO = 1,_COLOR = 2,};
enum MACRO__READ {_READ = 0x1,_WRITE = 0x2,_UNGET = 0x4,_BIGBUF = 0x8,_EOF = 0x10,_SFERR = 0x20,_APPEND = 0x80,};
enum MACRO__SVGA {_SVGA = 7,};
enum MACRO__TEOF {_TEOF = -1,};
enum MACRO__TIME {_TIME_GETCLOCK = 0,_TIME_SETCLOCK = 1,};
struct _diskfree_t {unsigned int total_clusters;unsigned int avail_clusters;unsigned int sectors_per_cluster;unsigned int bytes_per_sector;};
struct _diskinfo_t {unsigned int drive;unsigned int head;unsigned int track;unsigned int sector;unsigned int nsectors;void *buffer;};
struct videoconfig {int numxpixels;int numypixels;int numtextcols;int numtextrows;int numcolors;int bitsperpixel;int numvideopages;int mode;int adapter;int monitor;int memory;};
enum MACRO_CHAR {CHAR_BIT = 8,CHAR_MIN = 0,CHAR_MAX = 255,};
enum MACRO_EXIT {EXIT_SUCCESS = 0,EXIT_FAILURE = 255,};
enum MACRO_LOCK {_LK_LOCK = 1,LK_LOCK = 1,};
enum MACRO_LONG {LONG_MIN = 0,};
enum MACRO_MODE {DOS_MODE = 0,OS2_MODE = 1,};
enum MACRO_NAME {NAME_MAX = 12,};
enum MACRO_NULL {NULL = 0,};
enum MACRO_RLCK {_LK_RLCK = 3,LK_RLCK = 3,};
enum MACRO_SEEK {SEEK_SET = 0,SEEK_CUR = 1,SEEK_END = 2,};
enum MACRO_SHRT {SHRT_MIN = -32768,SHRT_MAX = 32767,};
enum MACRO_UINT {UINT_MAX = -1,TZNAME_MAX = 30,};
enum MACRO__COM {_COM_INIT = 0,_COM_SEND = 1,_COM_RECEIVE = 2,_COM_STATUS = 3,_COM_CHR7 = 2,_COM_CHR8 = 3,_COM_STOP1 = 0,_COM_STOP2 = 4,_COM_NOPARITY = 0,_COM_ODDPARITY = 8,_COM_SPACEPARITY = 16,_COM_EVENPARITY = 24,_COM_110 = 0,_COM_150 = 32,_COM_300 = 64,_COM_600 = 96,_COM_1200 = 128,_COM_2400 = 160,_COM_4800 = 192,_COM_9600 = 224,};
enum MACRO__EGA {_EGA = 5,};
enum MACRO__FPE {_FPE_INVALID = 0x81,_FPE_DENORMAL = 0x82,_FPE_ZERODIVIDE = 0x83,_FPE_OVERFLOW = 0x84,_FPE_UNDERFLOW = 0x85,_FPE_INEXACT = 0x86,_FPE_UNEMULATED = 0x87,_FPE_SQRTNEG = 0x88,_FPE_STACKOVERFLOW = 0x8A,_FPE_STACKUNDERFLOW = 0x8B,_FPE_EXPLICITGEN = 0x8C,_FPE_IOVERFLOW = 0x8D,_FPE_LOGERR = 0x8E,_FPE_MODERR = 0x8F,};
enum MACRO__HGC {_HGC = 3,};
enum MACRO__MAX {_MAX_NAME = 13,};
enum MACRO__MBC {_MBC_SINGLE = 0,_MBC_LEAD = 1,_MBC_TRAIL = 2,_MBC_ILLEGAL = -1,};
enum MACRO__MCW {_MCW_EM = 0x3F,};
enum MACRO__RED {_RED = 0x2A,};
enum MACRO__VGA {_VGA = 6,};
typedef void (*__sig_func)(int);
typedef struct _AD9A92298C4A3046DC03D0819903D2FB legendtype;
typedef struct _49112922E8D3FA36A9D9A6626290371D windowtype;
enum MACRO_CLK {CLK_TCK = 100,};
enum MACRO_DIG {DBL_MANT_DIG = 53,LDBL_MANT_DIG = 53,FLT_DIG = 6,DBL_DIG = 15,LDBL_DIG = 15,};
enum MACRO_DOS {DOS_GET_CHAR_NO_ECHO = 0x7,DOS_CUR_DISK = 0x19,DOS_SET_DTA = 0x1A,DOS_SET_INT = 0x25,DOS_GET_DATE = 0x2A,DOS_GET_TIME = 0x2C,DOS_GET_VERSION = 0x30,DOS_CTRL_BREAK = 0x33,DOS_GET_INT = 0x35,DOS_SWITCH_CHAR = 0x37,DOS_MKDIR = 0x39,DOS_RMDIR = 0x3A,DOS_CHDIR = 0x3B,DOS_CREAT = 0x3C,DOS_OPEN = 0x3D,DOS_CLOSE = 0x3E,DOS_READ = 0x3F,DOS_WRITE = 0x40,DOS_UNLINK = 0x41,DOS_LSEEK = 0x42,DOS_CHMOD = 0x43,DOS_IOCTL = 0x44,DOS_DUP = 0x45,DOS_DUP2 = 0x46,DOS_GETCWD = 0x47,DOS_ALLOC_SEG = 0x48,DOS_FREE_SEG = 0x49,DOS_MODIFY_SEG = 0x4A,DOS_EXIT = 0x4C,DOS_FIND_FIRST = 0x4E,DOS_FIND_NEXT = 0x4F,DOS_RENAME = 0x56,DOS_FILE_DATE = 0x57,DOS_COMMIT_FILE = 0x68,};
enum MACRO_EOF {EOF = -1,};
enum MACRO_EXP {FLT_MIN_EXP = -127,DBL_MIN_EXP = -1023,LDBL_MIN_EXP = -1023,FLT_MIN_10_EXP = -38,DBL_MIN_10_EXP = -307,LDBL_MIN_10_EXP = -307,FLT_MAX_EXP = 127,DBL_MAX_EXP = 1023,LDBL_MAX_EXP = 1023,FLT_MAX_10_EXP = 38,DBL_MAX_10_EXP = 308,LDBL_MAX_10_EXP = 308,};
enum MACRO_FLT {FLT_RADIX = 2,FLT_ROUNDS = 1,FLT_MANT_DIG = 24,};
enum MACRO_FPE {FPE_INVALID = 129,FPE_DENORMAL = 130,FPE_ZERODIVIDE = 131,FPE_OVERFLOW = 132,FPE_UNDERFLOW = 133,FPE_INEXACT = 134,FPE_UNEMULATED = 135,FPE_SQRTNEG = 136,FPE_STACKOVERFLOW = 138,FPE_STACKUNDERFLOW = 139,FPE_EXPLICITGEN = 140,FPE_IOVERFLOW = 141,FPE_LOGERR = 142,FPE_MODERR = 143,};
enum MACRO_INT {INT_MIN = -32768,INT_MAX = 32767,};
enum MACRO_MAX {USHRT_MAX = -1,LONG_MAX = -1,};
enum MACRO_MCW {MCW_EM = 63,};
enum MACRO_SIG {SIG_IGN = 1,SIG_DFL = 2,SIG_ERR = 3,};
enum MACRO_TMP {TMP_MAX = 17576,RAND_MAX = 32767,};
enum MACRO__CW {_CW_DEFAULT = 4671,};
enum MACRO__EM {_EM_INVALID = 0x1,_EM_DENORMAL = 0x2,_EM_ZERODIVIDE = 0x4,_EM_OVERFLOW = 0x8,_EM_UNDERFLOW = 0x10,_EM_INEXACT = 0x20,};
enum MACRO__IC {_IC_AFFINE = 0x1000,_IC_PROJECTIVE = 0x0,};
enum MACRO__MB {_MB_LEAD = 0x1,_MB_CP_SBCS = 0x0,_MB_CP_OEM = 0xFFFE,_MB_CP_ANSI = 0xFFFD,};
enum MACRO__PC {_PC_24 = 0x0,_PC_53 = 0x200,_PC_64 = 0x300,};
enum MACRO__PG {_PG_MAXCHARTTYPE = 5,_PG_MAXCHARTSTYLE = 2,_PG_NOTINITIALIZED = 101,_PG_BADSCREENMODE = 102,_PG_BADCHARTTYPE = 103,_PG_BADLEGENDWINDOW = 104,_PG_BADDATAWINDOW = 105,_PG_TOOSMALLN = 106,_PG_TOOFEWSERIES = 107,_PG_BADCHARTSTYLE = 1,_PG_BADLOGBASE = 2,_PG_BADSCALEFACTOR = 3,_PG_BADCHARTWINDOW = 4,_PG_TITLELEN = 70,_PG_PALETTELEN = 16,};
enum MACRO__RC {_RC_NEAR = 0x0,_RC_DOWN = 0x400,_RC_UP = 0x800,_RC_CHOP = 0xC00,};
enum MACRO__SW {_SW_INVALID = 0x1,_SW_DENORMAL = 0x2,_SW_ZERODIVIDE = 0x4,_SW_OVERFLOW = 0x8,_SW_UNDERFLOW = 0x10,_SW_INEXACT = 0x20,_SW_UNEMULATED = 0x40,_SW_SQRTNEG = 0x80,_SW_STACKOVERFLOW = 0x200,_SW_STACKUNDERFLOW = 0x400,};
struct _DOSERROR {int exterror;char errclass;char action;char locus;};
typedef struct _heapinfo _HEAPINFO;
typedef char *__va_list[1];
struct _fontinfo {int type;int ascent;int pixwidth;int pixheight;int avgwidth;char filename[81];char facename[32];};
struct _wxycoord {double wx;double wy;};
struct dosdate_t {unsigned __int8 day;unsigned __int8 month;unsigned int year;unsigned __int8 dayofweek;};
struct dostime_t {unsigned __int8 hour;unsigned __int8 minute;unsigned __int8 second;unsigned __int8 hsecond;};
struct exception {int type;char *name;double arg1;double arg2;double retval;};
typedef int ptrdiff_t;
typedef struct _5D287BBCEE976282B532DF578B48FE30 titletype;
struct BYTEREGS {unsigned __int8 al;unsigned __int8 ah;unsigned __int8 bl;unsigned __int8 bh;unsigned __int8 cl;unsigned __int8 ch;unsigned __int8 dl;unsigned __int8 dh;};
struct DOSERROR {int exterror;char c_class;char action;char locus;};
struct INTPACKB {unsigned __int16 : 16;unsigned __int16 : 16;unsigned __int16 : 16;unsigned __int16 : 16;unsigned __int16 : 16;unsigned __int16 : 16;unsigned __int16 : 16;unsigned __int16 : 16;unsigned __int8 bl;unsigned __int8 bh;unsigned __int8 dl;unsigned __int8 dh;unsigned __int8 cl;unsigned __int8 ch;unsigned __int8 al;unsigned __int8 ah;};
struct INTPACKW {unsigned int gs;unsigned int fs;unsigned int es;unsigned int ds;unsigned int di;unsigned int si;unsigned int bp;unsigned int sp;unsigned int bx;unsigned int dx;unsigned int cx;unsigned int ax;unsigned int ip;unsigned int cs;unsigned int flags;};
struct INTPACKX {unsigned int gs;unsigned int fs;unsigned int es;unsigned int ds;unsigned int edi;unsigned int esi;unsigned int ebp;unsigned int esp;unsigned int ebx;unsigned int edx;unsigned int ecx;unsigned int eax;unsigned int eip;unsigned int cs;unsigned int flags;};
enum MACRO_CT {CT_ANK = 0,CT_KJ1 = 1,CT_KJ2 = 2,CT_ILGL = -1,};
enum MACRO_EM {EM_INVALID = 1,EM_DENORMAL = 2,EM_ZERODIVIDE = 4,EM_OVERFLOW = 8,EM_UNDERFLOW = 16,EM_INEXACT = 32,EM_PRECISION = 32,};
enum MACRO_IC {IC_AFFINE = 4096,IC_PROJECTIVE = 0,};
enum MACRO_LC {LC_CTYPE = 0,LC_NUMERIC = 1,LC_TIME = 2,LC_COLLATE = 3,LC_MONETARY = 4,LC_MESSAGES = 5,LC_ALL = 6,};
enum MACRO_MB {MB_LEN_MAX = 2,};
enum MACRO_OK {R_OK = 4,W_OK = 2,X_OK = 1,F_OK = 0,};
enum MACRO_PC {PC_24 = 0,PC_53 = 512,PC_64 = 768,};
enum MACRO_RC {RC_NEAR = 0,RC_DOWN = 1024,RC_UP = 2048,RC_CHOP = 3072,};
enum MACRO_SH {SH_COMPAT = 0x0,SH_DENYRW = 0x10,SH_DENYWR = 0x20,SH_DENYRD = 0x30,SH_DENYNO = 0x40,};
enum MACRO_SW {SW_INVALID = 1,SW_DENORMAL = 2,SW_ZERODIVIDE = 4,SW_OVERFLOW = 8,SW_UNDERFLOW = 16,SW_INEXACT = 32,SW_UNEMULATED = 64,SW_SQRTNEG = 128,SW_STACKOVERFLOW = 512,SW_STACKUNDERFLOW = 1024,};
enum MACRO__A {_A_NORMAL = 0x0,_A_RDONLY = 0x1,_A_HIDDEN = 0x2,_A_SYSTEM = 0x4,_A_VOLID = 0x8,_A_SUBDIR = 0x10,_A_ARCH = 0x20,};
enum MACRO__K {_K = 0x1,_KP = 0x2,_J1 = 0x4,_J2 = 0x8,};
struct REGPACKB {unsigned __int8 al;unsigned __int8 ah;unsigned __int8 bl;unsigned __int8 bh;unsigned __int8 cl;unsigned __int8 ch;unsigned __int8 dl;unsigned __int8 dh;};
struct REGPACKW {unsigned int ax;unsigned int bx;unsigned int cx;unsigned int dx;unsigned int bp;unsigned int si;unsigned int di;unsigned int ds;unsigned int es;unsigned int flags;};
struct REGPACKX {unsigned int eax;unsigned int ebx;unsigned int ecx;unsigned int edx;unsigned int ebp;unsigned int esi;unsigned int edi;unsigned int ds;unsigned int es;unsigned int fs;unsigned int gs;unsigned int flags;};
struct WORDREGS {unsigned int ax;unsigned int bx;unsigned int cx;unsigned int dx;unsigned int si;unsigned int di;unsigned int cflag;};
struct _complex {double x;double y;};
typedef struct _743CAB6F7D155AB299758056AE88817D axistype;
typedef struct _1CFB5D895C6B2534CA582A7618E3281E chartenv;
typedef void (*onexit_t)();
typedef unsigned int styleset[16];
enum MACRO_L {L_tmpnam = 13,};
enum MACRO_P {P_WAIT = 0,P_NOWAIT = 1,P_NOWAITO = 3,};
enum MACRO_S {S_IFMT = 0xF000,S_IFDIR = 0x4000,S_IFCHR = 0x2000,S_IFREG = 0x8000,S_IRWXU = 0x1C0,S_IRUSR = 0x100,S_IWUSR = 0x80,S_IXUSR = 0x40,S_IREAD = 0x100,S_IWRITE = 0x80,S_IEXEC = 0x40,S_IRWXG = 0x38,S_IRGRP = 0x20,S_IWGRP = 0x10,S_IXGRP = 0x8,S_IRWXO = 0x7,S_IROTH = 0x4,S_IWOTH = 0x2,S_IXOTH = 0x1,S_ISUID = 0x800,S_ISGID = 0x400,S_ISVTX = 0x200,};
typedef signed __int8 _TSCHAR;
typedef unsigned __int8 _TUCHAR;
typedef char _TXCHAR;
struct __iobuf {unsigned __int8 *_ptr;int _cnt;unsigned __int8 *_base;unsigned int _flag;int _handle;unsigned int _bufsize;unsigned __int8 _ungotten;unsigned __int8 _tmpfchar;};
typedef unsigned __int8 charmap[8];
typedef unsigned __int32 clock_t;
struct complex {double x;double y;};
typedef unsigned __int8 fillmap[8];
typedef unsigned int jmp_buf[13];
struct rccoord {int row;int col;};
#define wchar_t unsigned int
struct xycoord {int xcoord;int ycoord;};
typedef unsigned int DBCODE;
typedef char _TCHAR;
typedef unsigned __int8 _UCHAR;
struct dirent {char d_dta[21];char d_attr;unsigned int d_time;unsigned int d_date;__int32 d_size;char d_name[13];unsigned int d_ino;char d_first;};
struct find_t {char reserved[21];char attrib;unsigned int wr_time;unsigned int wr_date;unsigned __int32 size;char name[13];};
typedef __int32 fpos_t;
typedef struct _B8243ED19B76CA5D55F9F69ED1E7C09F ldiv_t;
typedef unsigned int size_t;
typedef unsigned __int32 time_t;
typedef unsigned __int8 JCHAR;
typedef unsigned int JMOJI;
struct SREGS {unsigned int es;unsigned int cs;unsigned int ss;unsigned int ds;};
typedef char TCHAR;
typedef int _TINT;
typedef int dev_t;
typedef struct _979FA3DE6ECCF956231BFC297C4278E6 div_t;
typedef unsigned int ino_t;
struct lconv {char *decimal_point;char *thousands_sep;char *int_curr_symbol;char *currency_symbol;char *mon_decimal_point;char *mon_thousands_sep;char *mon_grouping;char *grouping;char *positive_sign;char *negative_sign;char int_frac_digits;char frac_digits;char p_cs_precedes;char p_sep_by_space;char n_cs_precedes;char n_sep_by_space;char p_sign_posn;char n_sign_posn;};
typedef __int32 off_t;
typedef struct __iobuf FILE;
typedef struct dirent DIR;
struct tm {int tm_sec;int tm_min;int tm_hour;int tm_mday;int tm_mon;int tm_year;int tm_wday;int tm_yday;int tm_isdst;};
struct _5E4AF5222BD6224857F90F4001142430 {unsigned int color;unsigned int style;fillmap fill;char plotchar;};
struct _743CAB6F7D155AB299758056AE88817D {int grid;int gridstyle;titletype axistitle;int axiscolor;int labeled;int rangetype;float logbase;int autoscale;float scalemin;float scalemax;float scalefactor;titletype scaletitle;float ticinterval;int ticformat;int ticdecimals;};
struct _AD9A92298C4A3046DC03D0819903D2FB {int legend;int place;int textcolor;int autosize;windowtype legendwindow;};
typedef paletteentry palettetype[16];
typedef _UCHAR *_FUSTRING;
struct _heapinfo {void *_pentry;size_t _size;int _useflag;};
typedef JCHAR *FJSTRING;
typedef _UCHAR *_USTRING;
typedef JCHAR *JSTRING;
struct utimbuf {time_t actime;time_t modtime;};
struct timeb {time_t time;unsigned int millitm;int timezone;int dstflag;};
union INTPACK {struct INTPACKB h;struct INTPACKW w;struct INTPACKW x;};
union REGPACK {struct REGPACKB h;struct REGPACKW w;struct REGPACKW x;};
union REGS {struct WORDREGS x;struct WORDREGS w;struct BYTEREGS h;};
struct _1CFB5D895C6B2534CA582A7618E3281E {int charttype;int chartstyle;windowtype chartwindow;windowtype datawindow;titletype maintitle;titletype subtitle;axistype xaxis;axistype yaxis;legendtype legend;};
struct _stat {dev_t st_dev;ino_t st_ino;unsigned int st_mode;int st_nlink;unsigned __int32 st_uid;int st_gid;dev_t st_rdev;off_t st_size;time_t st_atime;time_t st_mtime;time_t st_ctime;time_t st_btime;unsigned __int32 st_attr;unsigned __int32 st_archivedID;unsigned __int32 st_updatedID;unsigned int st_inheritedRightsMask;unsigned __int8 st_originatingNameSpace;unsigned __int8 st_name[13];};
struct stat {dev_t st_dev;ino_t st_ino;unsigned int st_mode;int st_nlink;unsigned __int32 st_uid;int st_gid;dev_t st_rdev;off_t st_size;time_t st_atime;time_t st_mtime;time_t st_ctime;time_t st_btime;unsigned __int32 st_attr;unsigned __int32 st_archivedID;unsigned __int32 st_updatedID;unsigned int st_inheritedRightsMask;unsigned __int8 st_originatingNameSpace;unsigned __int8 st_name[13];};



#endif
