#define GHIDRA
#ifndef INCLUDE_GUARD_vc10_til
#define INCLUDE_GUARD_vc10_til
#include "../../../../IDAPlugins/idatil2c/common.h"



union _798F2A0931AE69495F6CF5BE64E576B5___C07814F2AB249BB45CDFEF44975072DA;
struct threadlocaleinfostruct___F0551D0CB09E7A078CAEF7CAC43D74C7;
struct _0B8D1429C3827E0DB460E98487EB6908;
struct _0D8B1FE4A186593EFC62C1490ACF7897;
struct _1CF8D236196540158D67A26DAC991F28;
struct _271E49C86C8EFA0B647D87A58CF03284;
struct _2AE221845231FFCECC219BE7F7049133;
struct _6D7329FAD13C403F17A910B84CCFB7BF;
struct _7007A5D07675D2D320A62125AF136FB2;
struct _72295A7541EC936D47FC3642EE72298B;
struct _798F2A0931AE69495F6CF5BE64E576B5;
struct _8E0937B200DCBA03D39E01164C2A4D0D;
struct _AD8E08CFADC045292413D8E747DD5ED4;
struct _BA519187DB4FB038EDB1959BB4D2DF27;
union _D91DE99308EDB4B15B954CC4B13FA8FA;
struct _E6A349E6C594207448DC3F8A57F3A91C;
struct threadlocaleinfostruct;
struct _EXCEPTION_POINTERS;
struct threadmbcinfostruct;
struct _CrtMemBlockHeader;
struct _EXCEPTION_RECORD;
struct _wfinddata32i64_t;
struct _wfinddata64i32_t;
struct localeinfo_struct;
struct _RTC_ALLOCA_NODE;
struct _finddata32i64_t;
struct _finddata64i32_t;
struct _RTC_framedesc;
struct __finddata64_t;
struct __lc_time_data;
struct _wfinddata32_t;
struct _wfinddata64_t;
struct __JUMP_BUFFER;
struct _finddata32_t;
struct _CrtMemState;
struct _RTC_vardesc;
struct _diskfree_t;
struct _exception;
struct _stat32i64;
struct _stat64i32;
struct _Ctypevec;
struct _heapinfo;
struct _CONTEXT;
struct _Collvec;
struct _complex;
struct _lldiv_t;
struct tagLC_ID;
struct _Cvtvec;
struct __m128d;
union __m128i;
union __m256i;
struct _ldiv_t;
struct _stat32;
struct _stat64;
union __m128;
union __m256;
struct _div_t;
struct _iobuf;
union __m64;
struct lconv;
struct stat;
struct tm;

struct _0B8D1429C3827E0DB460E98487EB6908 {unsigned __int32 Inexact : 1;unsigned __int32 Underflow : 1;unsigned __int32 Overflow : 1;unsigned __int32 ZeroDivide : 1;unsigned __int32 InvalidOperation : 1;};
enum _0C0D8E877CDAA32B9F529E7264818D98 {_FpCompareEqual = 0x0,_FpCompareGreater = 0x1,_FpCompareLess = 0x2,_FpCompareUnordered = 0x3,};
enum _0CDD13AED9949118DD70163834A3A235 {_FpRoundNearest = 0x0,_FpRoundMinusInfinity = 0x1,_FpRoundPlusInfinity = 0x2,_FpRoundChopped = 0x3,};
struct _0D8B1FE4A186593EFC62C1490ACF7897 {double m256d_f64[4];};
struct _1CF8D236196540158D67A26DAC991F28 {unsigned int W[2];};
enum _239F13ABFE0DEB25C9BEF2C1826A55A5 {_FpFormatFp32 = 0x0,_FpFormatFp64 = 0x1,_FpFormatFp80 = 0x2,_FpFormatFp128 = 0x3,_FpFormatI16 = 0x4,_FpFormatI32 = 0x5,_FpFormatI64 = 0x6,_FpFormatU16 = 0x7,_FpFormatU32 = 0x8,_FpFormatU64 = 0x9,_FpFormatBcd80 = 0xA,_FpFormatCompare = 0xB,_FpFormatString = 0xC,};
struct _2AE221845231FFCECC219BE7F7049133 {long double x;};
struct _6D7329FAD13C403F17A910B84CCFB7BF {unsigned __int8 ld12[12];};
struct _72295A7541EC936D47FC3642EE72298B {unsigned __int16 W[5];};
struct _8E0937B200DCBA03D39E01164C2A4D0D {unsigned int W[4];};
struct _AD8E08CFADC045292413D8E747DD5ED4 {unsigned __int8 ld[10];};
struct _BA519187DB4FB038EDB1959BB4D2DF27 {double x;};
enum _D7F48ACA8F7E5F151D30CF090E11B572 {_FpCodeUnspecified = 0x0,_FpCodeAdd = 0x1,_FpCodeSubtract = 0x2,_FpCodeMultiply = 0x3,_FpCodeDivide = 0x4,_FpCodeSquareRoot = 0x5,_FpCodeRemainder = 0x6,_FpCodeCompare = 0x7,_FpCodeConvert = 0x8,_FpCodeRound = 0x9,_FpCodeTruncate = 0xA,_FpCodeFloor = 0xB,_FpCodeCeil = 0xC,_FpCodeAcos = 0xD,_FpCodeAsin = 0xE,_FpCodeAtan = 0xF,_FpCodeAtan2 = 0x10,_FpCodeCabs = 0x11,_FpCodeCos = 0x12,_FpCodeCosh = 0x13,_FpCodeExp = 0x14,_FpCodeFabs = 0x15,_FpCodeFmod = 0x16,_FpCodeFrexp = 0x17,_FpCodeHypot = 0x18,_FpCodeLdexp = 0x19,_FpCodeLog = 0x1A,_FpCodeLog10 = 0x1B,_FpCodeModf = 0x1C,_FpCodePow = 0x1D,_FpCodeSin = 0x1E,_FpCodeSinh = 0x1F,_FpCodeTan = 0x20,_FpCodeTanh = 0x21,_FpCodeY0 = 0x22,_FpCodeY1 = 0x23,_FpCodeYn = 0x24,_FpCodeLogb = 0x25,_FpCodeNextafter = 0x26,_FpCodeNegate = 0x27,_FpCodeFmin = 0x28,_FpCodeFmax = 0x29,_FpCodeConvertTrunc = 0x2A,_XMMIAddps = 0x2B,_XMMIAddss = 0x2C,_XMMISubps = 0x2D,_XMMISubss = 0x2E,_XMMIMulps = 0x2F,_XMMIMulss = 0x30,_XMMIDivps = 0x31,_XMMIDivss = 0x32,_XMMISqrtps = 0x33,_XMMISqrtss = 0x34,_XMMIMaxps = 0x35,_XMMIMaxss = 0x36,_XMMIMinps = 0x37,_XMMIMinss = 0x38,_XMMICmpps = 0x39,_XMMICmpss = 0x3A,_XMMIComiss = 0x3B,_XMMIUComiss = 0x3C,_XMMICvtpi2ps = 0x3D,_XMMICvtsi2ss = 0x3E,_XMMICvtps2pi = 0x3F,_XMMICvtss2si = 0x40,_XMMICvttps2pi = 0x41,_XMMICvttss2si = 0x42,_XMMIAddsubps = 0x43,_XMMIHaddps = 0x44,_XMMIHsubps = 0x45,_XMMIRoundps = 0x46,_XMMIRoundss = 0x47,_XMMIDpps = 0x48,_XMMI2Addpd = 0x49,_XMMI2Addsd = 0x4A,_XMMI2Subpd = 0x4B,_XMMI2Subsd = 0x4C,_XMMI2Mulpd = 0x4D,_XMMI2Mulsd = 0x4E,_XMMI2Divpd = 0x4F,_XMMI2Divsd = 0x50,_XMMI2Sqrtpd = 0x51,_XMMI2Sqrtsd = 0x52,_XMMI2Maxpd = 0x53,_XMMI2Maxsd = 0x54,_XMMI2Minpd = 0x55,_XMMI2Minsd = 0x56,_XMMI2Cmppd = 0x57,_XMMI2Cmpsd = 0x58,_XMMI2Comisd = 0x59,_XMMI2UComisd = 0x5A,_XMMI2Cvtpd2pi = 0x5B,_XMMI2Cvtsd2si = 0x5C,_XMMI2Cvttpd2pi = 0x5D,_XMMI2Cvttsd2si = 0x5E,_XMMI2Cvtps2pd = 0x5F,_XMMI2Cvtss2sd = 0x60,_XMMI2Cvtpd2ps = 0x61,_XMMI2Cvtsd2ss = 0x62,_XMMI2Cvtdq2ps = 0x63,_XMMI2Cvttps2dq = 0x64,_XMMI2Cvtps2dq = 0x65,_XMMI2Cvttpd2dq = 0x66,_XMMI2Cvtpd2dq = 0x67,_XMMI2Addsubpd = 0x68,_XMMI2Haddpd = 0x69,_XMMI2Hsubpd = 0x6A,_XMMI2Roundpd = 0x6B,_XMMI2Roundsd = 0x6C,_XMMI2Dppd = 0x6D,};
union _D91DE99308EDB4B15B954CC4B13FA8FA {unsigned __int16 _Word[8];float _Float;double _Double;long double _Long_double;};
struct _E6A349E6C594207448DC3F8A57F3A91C {float f;};
enum _EBF8251B43E7412EBBCF0A9FFEA6D7A7 {_FpPrecisionFull = 0x0,_FpPrecision53 = 0x1,_FpPrecision24 = 0x2,};
enum MACRO_PER_THREAD_LOCALE_GLOBAL {_ENABLE_PER_THREAD_LOCALE_GLOBAL = 0x10,_DISABLE_PER_THREAD_LOCALE_GLOBAL = 0x20,};
enum MACRO_PER_THREAD_LOCALE_NEW {_ENABLE_PER_THREAD_LOCALE_NEW = 0x100,_DISABLE_PER_THREAD_LOCALE_NEW = 0x200,};
enum MACRO_PER_THREAD_LOCALE {_ENABLE_PER_THREAD_LOCALE = 0x1,_DISABLE_PER_THREAD_LOCALE = 0x2,};
typedef struct _0B8D1429C3827E0DB460E98487EB6908 _FPIEEE_EXCEPTION_FLAGS;
enum _EXCEPTION_DISPOSITION {ExceptionContinueExecution = 0x0,ExceptionContinueSearch = 0x1,ExceptionNestedException = 0x2,ExceptionCollidedUnwind = 0x3,};
enum MACRO__HAS_EXCEPTIONS {_HAS_EXCEPTIONS = 1,_HAS_STRICT_CONFORMANCE = 0,_HAS_TR1_IMPORTS = 1,};
enum MACRO__SW_UNEMULATED {_SW_UNEMULATED = 0x40,_SW_SQRTNEG = 0x80,_SW_STACKOVERFLOW = 0x200,_SW_STACKUNDERFLOW = 0x400,};
enum MACRO__CRTDBG_ALLOC {_CRTDBG_ALLOC_MEM_DF = 0x1,_CRTDBG_DELAY_FREE_MEM_DF = 0x2,_CRTDBG_CHECK_ALWAYS_DF = 0x4,_CRTDBG_RESERVED_DF = 0x8,_CRTDBG_CHECK_CRT_DF = 0x10,_CRTDBG_LEAK_CHECK_DF = 0x20,_CRTDBG_CHECK_EVERY_16_DF = 0x100000,_CRTDBG_CHECK_EVERY_128_DF = 0x800000,_CRTDBG_CHECK_EVERY_1024_DF = 0x4000000,_CRTDBG_CHECK_DEFAULT_DF = 0x0,_CRTDBG_REPORT_FLAG = 0xFFFFFFFF,};
enum MACRO__GLOBAL_USING {_GLOBAL_USING = 1,};
enum MACRO__HAS_ITERATOR {_HAS_ITERATOR_DEBUGGING = 0,};
enum MACRO__HEAPBADBEGIN {_HEAPBADBEGIN = -3,};
enum MACRO__MM_DENORMALS {_MM_DENORMALS_ZERO_MASK = 0x40,_MM_DENORMALS_ZERO_ON = 0x40,_MM_DENORMALS_ZERO_OFF = 0x0,_MM_FROUND_TO_NEAREST_INT = 0x0,_MM_FROUND_TO_NEG_INF = 0x1,_MM_FROUND_TO_POS_INF = 0x2,_MM_FROUND_TO_ZERO = 0x3,_MM_FROUND_CUR_DIRECTION = 0x4,_MM_FROUND_RAISE_EXC = 0x0,_MM_FROUND_NO_EXC = 0x8,_MM_FROUND_NINT = 0x0,_MM_FROUND_FLOOR = 0x1,_MM_FROUND_CEIL = 0x2,_MM_FROUND_TRUNC = 0x3,_MM_FROUND_RINT = 0x4,_MM_FROUND_NEARBYINT = 0xC,};
struct _EXCEPTION_POINTERS;
struct threadmbcinfostruct;
enum MACRO_UINT_LEAST64 {UINT_LEAST64_MAX = 0xFFFFFFFF,};
enum MACRO__CRT_RPTHOOK {_CRT_RPTHOOK_INSTALL = 0,_CRT_RPTHOOK_REMOVE = 1,};
enum MACRO__HEAPBADNODE {_HEAPBADNODE = -4,};
enum MACRO__MM_PCOMCTRL {_MM_PCOMCTRL_LT = 0,_MM_PCOMCTRL_LE = 1,_MM_PCOMCTRL_GT = 2,_MM_PCOMCTRL_GE = 3,_MM_PCOMCTRL_EQ = 4,_MM_PCOMCTRL_NEQ = 5,_MM_PCOMCTRL_FALSE = 6,_MM_PCOMCTRL_TRUE = 7,_MM_PERMUTE2_COPY = 0,_MM_PERMUTE2_ZEROIF1 = 2,_MM_PERMUTE2_ZEROIF0 = 3,};
enum MACRO__NLSCMPERROR {_NLSCMPERROR = 2147483647,};
typedef void (*POGOAUTOSWEEPPROCA)(const char *);
struct _CrtMemBlockHeader;
enum MACRO_INT_LEAST64 {INT_LEAST64_MIN = 0x8000000000000000,INT_LEAST64_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_UINT_FAST64 {UINT_FAST64_MAX = 0xFFFFFFFF,};
enum MACRO_UINT_LEAST8 {UINT_LEAST8_MAX = 0xFF,UINT_LEAST16_MAX = 0xFFFF,UINT_LEAST32_MAX = 0xFFFFFFFF,};
enum MACRO__CRT_SECURE {_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES = 0,_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT = 0,_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES = 1,_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY = 0,_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY = 0,};
enum MACRO__CVTBUFSIZE {_CVTBUFSIZE = 349,};
enum MACRO__EM_INEXACT {_EM_INEXACT = 0x1,_EM_UNDERFLOW = 0x2,_EM_OVERFLOW = 0x4,_EM_ZERODIVIDE = 0x8,_EM_INVALID = 0x10,_EM_DENORMAL = 0x80000,};
enum MACRO__HAS_CHAR16 {_HAS_CHAR16_T_LANGUAGE_SUPPORT = 0,};
enum MACRO__HEAPBADPTR {_HEAPBADPTR = -6,};
enum MACRO__SECURE_SCL {_SECURE_SCL_DEPRECATE = 1,_SECURE_SCL_THROWS = 0,};
enum MACRO___STDC_WANT {__STDC_WANT_SECURE_LIB__ = 1,};
struct _EXCEPTION_RECORD;
typedef char __static_assert_t[1];
typedef void (*_purecall_handler)();
enum MACRO_EM_INVALID {EM_INVALID = 16,EM_DENORMAL = 524288,EM_ZERODIVIDE = 8,EM_OVERFLOW = 4,EM_UNDERFLOW = 2,EM_INEXACT = 1,};
enum MACRO_INT_FAST64 {INT_FAST64_MIN = 0x8000000000000000,INT_FAST64_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_INT_LEAST8 {INT_LEAST8_MIN = 0xFFFFFF80,INT_LEAST16_MIN = 0xFFFF8000,INT_LEAST32_MIN = 0x80000000,INT_LEAST8_MAX = 0x7F,INT_LEAST16_MAX = 0x7FFF,INT_LEAST32_MAX = 0x7FFFFFFF,};
enum MACRO_LDBL_RADIX {LDBL_RADIX = 2,LDBL_ROUNDS = 1,};
enum MACRO_UINT_FAST8 {UINT_FAST8_MAX = 0xFF,UINT_FAST16_MAX = 0xFFFF,UINT_FAST32_MAX = 0xFFFFFFFF,};
enum MACRO__FREEENTRY {_FREEENTRY = 0,_USEDENTRY = 1,};
enum MACRO__HEAPEMPTY {_HEAPEMPTY = -1,};
enum MACRO__P_NOWAITO {_P_NOWAITO = 3,_P_DETACH = 4,_P_OVERLAY = 2,};
enum MACRO__SECURECRT {_SECURECRT_FILL_BUFFER_PATTERN = 0xFE,};
typedef int (*_CRT_REPORT_HOOK)(int, char *, int *);
enum _RTC_ErrorNumber {_RTC_CHKSTK = 0x0,_RTC_CVRT_LOSS_INFO = 0x1,_RTC_CORRUPT_STACK = 0x2,_RTC_UNINIT_LOCAL_USE = 0x3,_RTC_CORRUPTED_ALLOCA = 0x4,_RTC_ILLEGAL = 0x5,};
enum MACRO_DBL_RADIX {DBL_RADIX = 2,DBL_ROUNDS = 1,};
enum MACRO_EXCEPTION {EXCEPTION_EXECUTE_HANDLER = 1,EXCEPTION_CONTINUE_SEARCH = 0,EXCEPTION_CONTINUE_EXECUTION = -1,};
enum MACRO_INT_FAST8 {INT_FAST8_MIN = 0xFFFFFF80,INT_FAST16_MIN = 0xFFFF8000,INT_FAST32_MIN = 0x80000000,INT_FAST8_MAX = 0x7F,INT_FAST16_MAX = 0x7FFF,INT_FAST32_MAX = 0x7FFFFFFF,};
enum MACRO_P_NOWAITO {P_NOWAITO = 3,P_DETACH = 4,};
enum MACRO__COMPILER {_COMPILER_TLS = 1,};
enum MACRO__CRT_WARN {_CRT_WARN = 0,_CRT_ERROR = 1,_CRT_ASSERT = 2,_CRT_ERRCNT = 3,};
enum MACRO__IOSTREAM {_IOSTREAM_OP_LOCKS = 1,};
enum MACRO__ITERATOR {_ITERATOR_DEBUG_LEVEL = 0,};
enum MACRO__MAX_LOCK {_MAX_LOCK = 4,};
enum MACRO__MAX_PATH {_MAX_PATH = 260,_MAX_DRIVE = 3,_MAX_DIR = 256,_MAX_FNAME = 256,_MAX_EXT = 256,};
enum MACRO__MAX_WAIT {_MAX_WAIT_MALLOC_CRT = 60000,};
enum MACRO__OVERFLOW {_OVERFLOW = 3,_UNDERFLOW = 4,};
enum MACRO__TRUNCATE {_TRUNCATE = 4294967295,};
typedef struct _271E49C86C8EFA0B647D87A58CF03284 *_PFPIEEE_RECORD;
typedef struct localeinfo_struct _locale_tstruct;
typedef void *omp_nest_lock_t;
enum MACRO_CHAR_MIN {CHAR_MIN = -128,CHAR_MAX = 127,};
enum MACRO_FILENAME {FILENAME_MAX = 260,FOPEN_MAX = 20,};
enum MACRO_OVERFLOW {OVERFLOW = 3,UNDERFLOW = 4,};
enum MACRO__FPCLASS {_FPCLASS_SNAN = 0x1,_FPCLASS_QNAN = 0x2,_FPCLASS_NINF = 0x4,_FPCLASS_NN = 0x8,_FPCLASS_ND = 0x10,_FPCLASS_NZ = 0x20,_FPCLASS_PZ = 0x40,_FPCLASS_PD = 0x80,_FPCLASS_PN = 0x100,_FPCLASS_PINF = 0x200,};
enum MACRO__HEAPEND {_HEAPEND = -5,};
enum MACRO__INFCODE {_INFCODE = 1,_NANCODE = 2,};
enum MACRO__MAX_ENV {_MAX_ENV = 32767,};
enum MACRO__MAX_EXP {_MAX_EXP_DIG = 8,_MAX_INT_DIG = 32,_MAX_SIG_DIG = 36,};
enum MACRO__NSTREAM {_NSTREAM_ = 512,};
typedef struct _271E49C86C8EFA0B647D87A58CF03284 _FPIEEE_RECORD;
struct _RTC_framedesc {int varCount;_RTC_vardesc *variables;};
struct __lc_time_data;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
typedef unsigned __int16 uint_least16_t;
typedef unsigned int uint_least32_t;
enum MACRO_PTRDIFF {PTRDIFF_MIN = -2147483648,PTRDIFF_MAX = 2147483647,};
enum MACRO_UINTMAX {UINTMAX_MAX = 0xFFFFFFFF,};
enum MACRO_UINTPTR {UINTPTR_MAX = 0xFFFFFFFF,};
enum MACRO__ALLOCA {_ALLOCA_S_THRESHOLD = 1024,_ALLOCA_S_STACK_MARKER = 52428,_ALLOCA_S_HEAP_MARKER = 56797,_ALLOCA_S_MARKER_SIZE = 8,};
enum MACRO__ARGMAX {_ARGMAX = 100,};
enum MACRO__CPPLIB {_CPPLIB_VER = 520,};
enum MACRO__CRTDBG {_CRTDBG_MODE_FILE = 0x1,_CRTDBG_MODE_DEBUG = 0x2,_CRTDBG_MODE_WNDW = 0x4,_CRTDBG_REPORT_MODE = 0xFFFFFFFF,_CRTDBG_INVALID_HFILE = 0xFFFFFFFF,_CRTDBG_HFILE_ERROR = 0xFFFFFFFE,_CRTDBG_FILE_STDOUT = 0xFFFFFFFC,_CRTDBG_FILE_STDERR = 0xFFFFFFFB,_CRTDBG_REPORT_FILE = 0xFFFFFFFA,};
enum MACRO__CRTWRN {_CRTWRN_WNUMBER__VCCLRIT_DEPRECATED = 1001,_CRTWRN_WNUMBER__NO_SPECIAL_TRANSFER = 1004,_CRTWRN_WNUMBER__CLR_AND_STATIC_CPPLIB = 1006,_CRTWRN_WNUMBER__DEPRECATE_STATIC_CPPLIB = 1007,_CRTWRN_WNUMBER__DEPRECATE_SECURE_SCL_THROWS = 1008,};
enum MACRO__DENORM {_DENORM = -2,};
enum MACRO__DOMAIN {_DOMAIN = 1,_SING = 2,};
enum MACRO__FINITE {_FINITE = -1,};
enum MACRO__GLOBAL {_GLOBAL_LOCALE = 0,};
enum MACRO__HEAPOK {_HEAPOK = -2,};
enum MACRO__IOREAD {_IOREAD = 0x1,_IOWRT = 0x2,};
enum MACRO__MCW_DN {_MCW_DN = 0x3000000,};
enum MACRO__MCW_IC {_MCW_IC = 0x40000,};
enum MACRO__MCW_PC {_MCW_PC = 0x30000,};
enum MACRO__MCW_RC {_MCW_RC = 0x300,};
enum MACRO__REPORT {_REPORT_ERRMODE = 3,};
enum MACRO__SECURE {_SECURE_SCL = 0,};
typedef struct _798F2A0931AE69495F6CF5BE64E576B5 _FPIEEE_VALUE;
typedef int (*_RTC_error_fn)(int, const char *, int, const char *, const char *, ...);
struct __JUMP_BUFFER {unsigned int Ebp;unsigned int Ebx;unsigned int Edi;unsigned int Esi;unsigned int Esp;unsigned int Eip;unsigned int Registration;unsigned int TryLevel;unsigned int Cookie;unsigned int UnwindFunc;unsigned int UnwindData[6];};
typedef __int16 int_least16_t;
typedef int int_least32_t;
typedef struct threadlocaleinfostruct threadlocinfo;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned __int8 uint_least8_t;
enum MACRO_BUFSIZ {BUFSIZ = 512,};
enum MACRO_CLOCKS {CLOCKS_PER_SEC = 1000,};
enum MACRO_DOMAIN {DOMAIN = 1,SING = 2,};
enum MACRO_INTMAX {INTMAX_MIN = 0x8000000000000000,INTMAX_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_INTPTR {INTPTR_MAX = 0x7FFFFFFF,INTPTR_MIN = 0x80000000,};
enum MACRO_MCW_IC {MCW_IC = 262144,};
enum MACRO_MCW_PC {MCW_PC = 196608,};
enum MACRO_MCW_RC {MCW_RC = 768,};
enum MACRO_SIGNAL {SIGINT = 2,SIGILL = 4,SIGFPE = 8,SIGSEGV = 11,SIGTERM = 15,SIGBREAK = 21,SIGABRT = 22,SIGABRT_COMPAT = 6,};
enum MACRO_UINT64 {UINT64_MAX = 0xFFFFFFFF,};
enum MACRO_ULLONG {ULLONG_MAX = 0xFFFFFFFF,};
enum MACRO__ALPHA {_ALPHA = 0x103,};
enum MACRO__IOFBF {_IOFBF = 0x0,_IOLBF = 0x40,};
enum MACRO__IONBF {_IONBF = 0x4,_IOMYBUF = 0x8,_IOEOF = 0x10,_IOERR = 0x20,_IOSTRG = 0x40,_IORW = 0x80,};
enum MACRO__JBLEN {_JBLEN = 16,};
enum MACRO__KANJI {_KANJI_CP = 932,};
enum MACRO__LLONG {_LLONG_MAX = 0x7FFFFFFFFFFFFFFF,_ULLONG_MAX = 0xFFFFFFFFFFFFFFFF,};
enum MACRO__MULTI {_MULTI_THREAD = 1,};
enum MACRO__PLOSS {_PLOSS = 6,};
enum MACRO__TLOSS {_TLOSS = 5,};
enum MACRO__UPPER {_UPPER = 0x1,_LOWER = 0x2,_DIGIT = 0x4,_SPACE = 0x8,_PUNCT = 0x10,_CONTROL = 0x20,_BLANK = 0x40,_HEX = 0x80,_LEADBYTE = 0x8000,};
enum MACRO__WIN32 {_WIN32_C_LIB = 1,};
enum MACRO__WRITE {_WRITE_ABORT_MSG = 0x1,};
enum MACRO___STDC {__STDC_SECURE_LIB__ = 200411,};
typedef struct __JUMP_BUFFER _JUMP_BUFFER;
struct _RTC_vardesc {int addr;int size;char *name;};
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef signed __int8 int_least8_t;
typedef int sig_atomic_t;
typedef unsigned __int8 uint_fast8_t;
enum MACRO_BLOCK {_FREE_BLOCK = 0,_NORMAL_BLOCK = 1,_CRT_BLOCK = 2,_IGNORE_BLOCK = 3,_CLIENT_BLOCK = 4,};
enum MACRO_ERRNO {EPERM = 1,ENOENT = 2,ESRCH = 3,EINTR = 4,EIO = 5,ENXIO = 6,E2BIG = 7,ENOEXEC = 8,EBADF = 9,ECHILD = 10,EAGAIN = 11,ENOMEM = 12,EACCES = 13,EFAULT = 14,EBUSY = 16,EEXIST = 17,EXDEV = 18,ENODEV = 19,ENOTDIR = 20,EISDIR = 21,ENFILE = 23,EMFILE = 24,ENOTTY = 25,EFBIG = 27,ENOSPC = 28,ESPIPE = 29,EROFS = 30,EMLINK = 31,EPIPE = 32,EDOM = 33,EDEADLK = 36,ENAMETOOLONG = 38,ENOLCK = 39,ENOSYS = 40,ENOTEMPTY = 41,EINVAL = 22,ERANGE = 34,EILSEQ = 42,STRUNCATE = 80,EDEADLOCK = 36,EADDRINUSE = 100,EADDRNOTAVAIL = 101,EAFNOSUPPORT = 102,EALREADY = 103,EBADMSG = 104,ECANCELED = 105,ECONNABORTED = 106,ECONNREFUSED = 107,ECONNRESET = 108,EDESTADDRREQ = 109,EHOSTUNREACH = 110,EIDRM = 111,EINPROGRESS = 112,EISCONN = 113,ELOOP = 114,EMSGSIZE = 115,ENETDOWN = 116,ENETRESET = 117,ENETUNREACH = 118,ENOBUFS = 119,ENODATA = 120,ENOLINK = 121,ENOMSG = 122,ENOPROTOOPT = 123,ENOSR = 124,ENOSTR = 125,ENOTCONN = 126,ENOTRECOVERABLE = 127,ENOTSOCK = 128,ENOTSUP = 129,EOPNOTSUPP = 130,EOTHER = 131,EOVERFLOW = 132,EOWNERDEAD = 133,EPROTO = 134,EPROTONOSUPPORT = 135,EPROTOTYPE = 136,ETIME = 137,ETIMEDOUT = 138,ETXTBSY = 139,EWOULDBLOCK = 140,};
enum MACRO_INT64 {INT64_MIN = 0x8000000000000000,INT64_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_LLONG {LLONG_MIN = -9223372036854775808,};
enum MACRO_PLOSS {PLOSS = 6,};
enum MACRO_SCHAR {SCHAR_MIN = -128,SCHAR_MAX = 127,};
enum MACRO_TLOSS {TLOSS = 5,};
enum MACRO_UCHAR {UCHAR_MAX = 0xFF,};
enum MACRO_USHRT {USHRT_MAX = 0xFFFF,};
enum MACRO_WCHAR {WCHAR_MIN = 0x0,WCHAR_MAX = 0xFFFF,};
enum MACRO__CALL {_CALL_REPORTFAULT = 0x2,};
enum MACRO__HEAP {_HEAP_MAXREQ = 0xFFFFFFE0,};
enum MACRO__HOOK {_HOOK_ALLOC = 1,_HOOK_REALLOC = 2,_HOOK_FREE = 3,};
enum MACRO__LOCK {_LOCK_LOCALE = 0,_LOCK_MALLOC = 1,_LOCK_STREAM = 2,_LOCK_DEBUG = 3,};
enum MACRO__NCAT {_NCAT = 7,};
enum MACRO__SIDD {_SIDD_UBYTE_OPS = 0x0,_SIDD_UWORD_OPS = 0x1,_SIDD_SBYTE_OPS = 0x2,_SIDD_SWORD_OPS = 0x3,_SIDD_CMP_EQUAL_ANY = 0x0,_SIDD_CMP_RANGES = 0x4,_SIDD_CMP_EQUAL_EACH = 0x8,_SIDD_CMP_EQUAL_ORDERED = 0xC,_SIDD_POSITIVE_POLARITY = 0x0,_SIDD_NEGATIVE_POLARITY = 0x10,_SIDD_MASKED_POSITIVE_POLARITY = 0x20,_SIDD_MASKED_NEGATIVE_POLARITY = 0x30,_SIDD_LEAST_SIGNIFICANT = 0x0,_SIDD_MOST_SIGNIFICANT = 0x40,_SIDD_BIT_MASK = 0x0,_SIDD_UNIT_MASK = 0x40,};
enum MACRO__TEOF {_TEOF = -1,};
enum MACRO__UI32 {_UI32_MAX = 0xFFFFFFFF,};
enum MACRO__UI64 {_UI64_MAX = 0xFFFFFFFF,SIZE_MAX = 0xFFFFFFFF,RSIZE_MAX = 0xFFFFFFFF,};
enum MACRO__WAIT {_WAIT_CHILD = 0,_WAIT_GRANDCHILD = 1,};
enum MACRO___GOT {__GOT_SECURE_LIB__ = 200411,};
typedef struct _BA519187DB4FB038EDB1959BB4D2DF27 _CRT_DOUBLE;
typedef struct _2AE221845231FFCECC219BE7F7049133 _LONGDOUBLE;
struct _diskfree_t {unsigned int total_clusters;unsigned int avail_clusters;unsigned int sectors_per_cluster;unsigned int bytes_per_sector;};
typedef char int_fast8_t;
enum MACRO_CHAR {CHAR_BIT = 8,};
enum MACRO_EXIT {EXIT_SUCCESS = 0,EXIT_FAILURE = 1,};
enum MACRO_INT8 {INT8_MAX = 0x7F,INT16_MAX = 0x7FFF,INT32_MAX = 0x7FFFFFFF,UINT8_MAX = 0xFF,UINT16_MAX = 0xFFFF,UINT32_MAX = 0xFFFFFFFF,};
enum MACRO_LDBL {LDBL_DIG = 15,LDBL_MANT_DIG = 53,LDBL_MAX_10_EXP = 308,LDBL_MAX_EXP = 1024,LDBL_MIN_10_EXP = -307,LDBL_MIN_EXP = -1021,};
enum MACRO_LONG {LONG_MIN = -2147483648,LONG_MAX = 2147483647,};
enum MACRO_NSIG {NSIG = 23,};
enum MACRO_NULL {NULL = 0,};
enum MACRO_RAND {RAND_MAX = 0x7FFF,};
enum MACRO_SEEK {SEEK_CUR = 1,SEEK_END = 2,SEEK_SET = 0,};
enum MACRO_SHRT {SHRT_MIN = -32768,SHRT_MAX = 32767,};
enum MACRO_UINT {UINT_MAX = 0xFFFFFFFF,};
enum MACRO_WAIT {WAIT_CHILD = 0,WAIT_GRANDCHILD = 1,};
enum MACRO_WEOF {WEOF = 0xFFFF,};
enum MACRO_WINT {WINT_MIN = 0x0,WINT_MAX = 0xFFFF,};
enum MACRO__CMP {_CMP_EQ_OQ = 0x0,_CMP_LT_OS = 0x1,_CMP_LE_OS = 0x2,_CMP_UNORD_Q = 0x3,_CMP_NEQ_UQ = 0x4,_CMP_NLT_US = 0x5,_CMP_NLE_US = 0x6,_CMP_ORD_Q = 0x7,_CMP_EQ_UQ = 0x8,_CMP_NGE_US = 0x9,_CMP_NGT_US = 0xA,_CMP_FALSE_OQ = 0xB,_CMP_NEQ_OQ = 0xC,_CMP_GE_OS = 0xD,_CMP_GT_OS = 0xE,_CMP_TRUE_UQ = 0xF,_CMP_EQ_OS = 0x10,_CMP_LT_OQ = 0x11,_CMP_LE_OQ = 0x12,_CMP_UNORD_S = 0x13,_CMP_NEQ_US = 0x14,_CMP_NLT_UQ = 0x15,_CMP_NLE_UQ = 0x16,_CMP_ORD_S = 0x17,_CMP_EQ_US = 0x18,_CMP_NGE_UQ = 0x19,_CMP_NGT_UQ = 0x1A,_CMP_FALSE_OS = 0x1B,_CMP_NEQ_OS = 0x1C,_CMP_GE_OQ = 0x1D,_CMP_GT_OQ = 0x1E,_CMP_TRUE_US = 0x1F,};
enum MACRO__CRT {_CRT_PACKING = 8,};
enum MACRO__DBL {_DBL_RADIX = 2,_DBL_ROUNDS = 1,};
enum MACRO__FPE {_FPE_INVALID = 0x81,_FPE_DENORMAL = 0x82,_FPE_ZERODIVIDE = 0x83,_FPE_OVERFLOW = 0x84,_FPE_UNDERFLOW = 0x85,_FPE_INEXACT = 0x86,_FPE_UNEMULATED = 0x87,_FPE_SQRTNEG = 0x88,_FPE_STACKOVERFLOW = 0x8A,_FPE_STACKUNDERFLOW = 0x8B,_FPE_EXPLICITGEN = 0x8C,_FPE_MULTIPLE_TRAPS = 0x8D,_FPE_MULTIPLE_FAULTS = 0x8E,};
enum MACRO__HAS {_HAS_CPP0X = 1,_HAS_TR1 = 1,};
enum MACRO__I32 {_I32_MIN = -2147483648,_I32_MAX = 2147483647,};
enum MACRO__I64 {_I64_MIN = -9223372036854775808,_I64_MAX = 9223372036854775807,};
enum MACRO__IOB {_IOB_ENTRIES = 20,};
enum MACRO__MAX {_MAX_BLOCKS = 5,};
enum MACRO__MBC {_MBC_SINGLE = 0,_MBC_LEAD = 1,_MBC_TRAIL = 2,_MBC_ILLEGAL = -1,};
enum MACRO__MCW {_MCW_EM = 0x8001F,};
enum MACRO__OLD {_OLD_P_OVERLAY = 2,};
enum MACRO__OUT {_OUT_TO_DEFAULT = 0,_OUT_TO_STDERR = 1,_OUT_TO_MSGBOX = 2,};
enum MACRO__RTC {_RTC_ERRTYPE_IGNORE = -1,_RTC_ERRTYPE_ASK = -2,};
enum MACRO__SYS {_SYS_OPEN = 20,};
enum MACRO__TMP {_TMP_MAX_S = 2147483647,};
enum MACRO__TWO {_TWO_DIGIT_EXPONENT = 0x1,};
enum MACRO__USE {_USE_DECLSPECS_FOR_SAL = 0,_USE_ATTRIBUTES_FOR_SAL = 0,};
enum MACRO__XCR {_XCR_XFEATURE_ENABLED_MASK = 0,};
typedef struct _E6A349E6C594207448DC3F8A57F3A91C _CRT_FLOAT;
typedef unsigned __int64 _ULonglong;
typedef int __time32_t;
typedef __int64 __time64_t;
struct _exception {int type;char *name;double arg1;double arg2;double retval;};
typedef void *omp_lock_t;
enum MACRO_CLK {CLK_TCK = 1000,};
enum MACRO_DBL {DBL_DIG = 15,DBL_MANT_DIG = 53,DBL_MAX_10_EXP = 308,DBL_MAX_EXP = 1024,DBL_MIN_10_EXP = -307,DBL_MIN_EXP = -1021,};
enum MACRO_EOF {EOF = -1,};
enum MACRO_FLT {FLT_DIG = 6,FLT_GUARD = 0,FLT_MANT_DIG = 24,FLT_MAX_10_EXP = 38,FLT_MAX_EXP = 128,FLT_MIN_10_EXP = -37,FLT_MIN_EXP = -125,FLT_NORMALIZE = 0,FLT_RADIX = 2,FLT_ROUNDS = 1,};
enum MACRO_FPE {FPE_INVALID = 129,FPE_DENORMAL = 130,FPE_ZERODIVIDE = 131,FPE_OVERFLOW = 132,FPE_UNDERFLOW = 133,FPE_INEXACT = 134,FPE_UNEMULATED = 135,FPE_SQRTNEG = 136,FPE_STACKOVERFLOW = 138,FPE_STACKUNDERFLOW = 139,FPE_EXPLICITGEN = 140,};
enum MACRO_INT {INT_MIN = -2147483648,INT_MAX = 2147483647,};
enum MACRO_MAX {ULONG_MAX = 0xFFFFFFFFFFFFFFFF,LLONG_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_MCW {MCW_EM = 524319,};
enum MACRO_MIN {INT8_MIN = 0xFFFFFF80,INT16_MIN = 0xFFFF8000,INT32_MIN = 0x80000000,};
enum MACRO_OLD {OLD_P_OVERLAY = 2,};
enum MACRO_SIG {SIG_ATOMIC_MIN = -2147483648,SIG_ATOMIC_MAX = 2147483647,};
enum MACRO_SYS {SYS_OPEN = 20,};
enum MACRO_TMP {TMP_MAX = 32767,};
enum MACRO__C2 {_C2 = 1,};
enum MACRO__CN {_CN = 8,};
enum MACRO__CW {_CW_DEFAULT = 589855,};
enum MACRO__DI {_DI = 4,};
enum MACRO__DN {_DN_SAVE = 0x0,_DN_FLUSH = 0x1000000,_DN_FLUSH_OPERANDS_SAVE_RESULTS = 0x2000000,_DN_SAVE_OPERANDS_FLUSH_RESULTS = 0x3000000,};
enum MACRO__EM {_EM_AMBIGUIOUS = 0x80000000,_EM_AMBIGUOUS = 0x80000000,};
enum MACRO__FE {_FE_DIVBYZERO = 0x4,_FE_INEXACT = 0x20,_FE_INVALID = 0x1,_FE_OVERFLOW = 0x8,_FE_UNDERFLOW = 0x10,};
enum MACRO__IC {_IC_AFFINE = 0x40000,_IC_PROJECTIVE = 0x0,};
enum MACRO__LO {_LO = 2,_PU = 16,_SP = 64,};
enum MACRO__MB {_MB_CP_SBCS = 0,_MB_CP_OEM = -2,_MB_CP_ANSI = -3,_MB_CP_LOCALE = -4,};
enum MACRO__MM {_MM_HINT_T0 = 1,_MM_HINT_T1 = 2,_MM_HINT_T2 = 3,_MM_HINT_NTA = 0,_MM_EXCEPT_MASK = 63,_MM_EXCEPT_INVALID = 1,_MM_EXCEPT_DENORM = 2,_MM_EXCEPT_DIV_ZERO = 4,_MM_EXCEPT_OVERFLOW = 8,_MM_EXCEPT_UNDERFLOW = 16,_MM_EXCEPT_INEXACT = 32,_MM_MASK_MASK = 8064,_MM_MASK_INVALID = 128,_MM_MASK_DENORM = 256,_MM_MASK_DIV_ZERO = 512,_MM_MASK_OVERFLOW = 1024,_MM_MASK_UNDERFLOW = 2048,_MM_MASK_INEXACT = 4096,_MM_ROUND_MASK = 24576,_MM_ROUND_NEAREST = 0,_MM_ROUND_DOWN = 8192,_MM_ROUND_UP = 16384,_MM_ROUND_TOWARD_ZERO = 24576,_MM_FLUSH_ZERO_MASK = 32768,_MM_FLUSH_ZERO_ON = 32768,_MM_FLUSH_ZERO_OFF = 0,};
enum MACRO__MS {_MS = 0x1,_MP = 0x2,_M1 = 0x4,_M2 = 0x8,_SBUP = 0x10,_SBLOW = 0x20,};
enum MACRO__PC {_PC_64 = 0x0,_PC_53 = 0x10000,_PC_24 = 0x20000,};
enum MACRO__RC {_RC_NEAR = 0x0,_RC_DOWN = 0x100,_RC_UP = 0x200,_RC_CHOP = 0x300,};
enum MACRO__SH {_SH_DENYRW = 0x10,_SH_DENYWR = 0x20,_SH_DENYRD = 0x30,_SH_DENYNO = 0x40,_SH_SECURE = 0x80,};
enum MACRO__SW {_SW_INEXACT = 0x1,_SW_UNDERFLOW = 0x2,_SW_OVERFLOW = 0x4,_SW_ZERODIVIDE = 0x8,_SW_INVALID = 0x10,_SW_DENORMAL = 0x80000,};
enum MACRO__UP {_UP = 1,_XD = 128,};
enum MACRO__VC {_VC_CRT_MAJOR_VERSION = 10,_VC_CRT_MINOR_VERSION = 0,_VC_CRT_BUILD_VERSION = 40219,_VC_CRT_RBUILD_VERSION = 325,};
enum MACRO__XA {_XA = 0x100,};
enum MACRO__XS {_XS = 0x0,_BB = 0x20,};
struct _Ctypevec {unsigned int _Hand;unsigned int _Page;const __int16 *_Table;int _Delfl;};
typedef struct _heapinfo _HEAPINFO;
typedef __int64 _Longlong;
typedef struct localeinfo_struct *_locale_t;
typedef int (*_onexit_t)();
typedef int mbstate_t;
typedef int ptrdiff_t;
typedef unsigned int uintptr_t;
enum MACRO_CW {CW_DEFAULT = 589855,};
enum MACRO_EM {EM_AMBIGUIOUS = -2147483648,EM_AMBIGUOUS = -2147483648,};
enum MACRO_IC {IC_AFFINE = 262144,IC_PROJECTIVE = 0,};
enum MACRO_LC {LC_ALL = 0,LC_COLLATE = 1,LC_CTYPE = 2,LC_MONETARY = 3,LC_NUMERIC = 4,LC_TIME = 5,LC_MIN = 0,LC_MAX = 5,};
enum MACRO_MB {MB_LEN_MAX = 5,};
enum MACRO_PC {PC_24 = 131072,PC_53 = 65536,PC_64 = 0,};
enum MACRO_RC {RC_CHOP = 768,RC_UP = 512,RC_DOWN = 256,RC_NEAR = 0,};
enum MACRO_SH {SH_DENYRW = 16,SH_DENYWR = 32,SH_DENYRD = 48,SH_DENYNO = 64,};
enum MACRO_SW {SW_INVALID = 16,SW_DENORMAL = 524288,SW_ZERODIVIDE = 8,SW_OVERFLOW = 4,SW_UNDERFLOW = 2,SW_INEXACT = 1,SW_UNEMULATED = 64,SW_SQRTNEG = 128,SW_STACKOVERFLOW = 512,SW_STACKUNDERFLOW = 1024,};
enum MACRO__A {_A_NORMAL = 0x0,_A_RDONLY = 0x1,_A_HIDDEN = 0x2,_A_SYSTEM = 0x4,_A_SUBDIR = 0x10,_A_ARCH = 0x20,};
enum MACRO__M {_M_COLLATE = 1,_M_CTYPE = 2,_M_MONETARY = 4,_M_NUMERIC = 8,_M_TIME = 16,_M_MESSAGES = 32,_M_ALL = 63,};
enum MACRO__O {_O_RDONLY = 0x0,_O_WRONLY = 0x1,_O_RDWR = 0x2,_O_APPEND = 0x8,_O_CREAT = 0x100,_O_TRUNC = 0x200,_O_EXCL = 0x400,_O_TEXT = 0x4000,_O_BINARY = 0x8000,_O_WTEXT = 0x10000,_O_U16TEXT = 0x20000,_O_U8TEXT = 0x40000,_O_RAW = 0x8000,_O_NOINHERIT = 0x80,_O_TEMPORARY = 0x40,_O_SHORT_LIVED = 0x1000,_O_SEQUENTIAL = 0x20,_O_RANDOM = 0x10,};
enum MACRO__P {_P_WAIT = 0,_P_NOWAIT = 1,};
enum MACRO__X {_X_ALL = 0,_X_COLLATE = 1,_X_CTYPE = 2,_X_MONETARY = 3,_X_NUMERIC = 4,_X_TIME = 5,_X_MAX = 5,_X_MESSAGES = 6,};
struct _CONTEXT;
struct _Collvec {unsigned int _Hand;unsigned int _Page;};
typedef struct _AD8E08CFADC045292413D8E747DD5ED4 _LDOUBLE;
typedef unsigned int _Uint32t;
struct _complex {double x;double y;};
typedef unsigned int _fsize_t;
struct _lldiv_t {__int64 quot;__int64 rem;};
typedef unsigned __int16 char16_t;
typedef unsigned int char32_t;
typedef int intptr_t;
struct tagLC_ID {unsigned __int16 wLanguage;unsigned __int16 wCountry;unsigned __int16 wCodePage;};
typedef unsigned __int16 uint16_t;
typedef unsigned int uint32_t;
typedef unsigned __int16 wctype_t;
typedef struct tagLC_ID *LPLC_ID;
enum MACRO_O {O_RDONLY = 0,O_WRONLY = 1,O_RDWR = 2,O_APPEND = 8,O_CREAT = 256,O_TRUNC = 512,O_EXCL = 1024,O_TEXT = 16384,O_BINARY = 32768,O_RAW = 32768,O_TEMPORARY = 64,O_NOINHERIT = 128,O_SEQUENTIAL = 32,O_RANDOM = 16,};
enum MACRO_P {P_WAIT = 0,P_NOWAIT = 1,P_OVERLAY = 2,};
struct _Cvtvec {unsigned int _Hand;unsigned int _Page;};
typedef union _D91DE99308EDB4B15B954CC4B13FA8FA _Dconst;
typedef struct _6D7329FAD13C403F17A910B84CCFB7BF _LDBL12;
typedef signed __int8 _TSCHAR;
typedef unsigned __int8 _TUCHAR;
typedef char _TXCHAR;
struct __m128d {double m128d_f64[2];};
union __m128i {__int8 m128i_i8[16];__int16 m128i_i16[8];__int32 m128i_i32[4];__int64 m128i_i64[2];unsigned __int8 m128i_u8[16];unsigned __int16 m128i_u16[8];unsigned __int32 m128i_u32[4];unsigned __int64 m128i_u64[2];};
typedef struct _0D8B1FE4A186593EFC62C1490ACF7897 __m256d;
union __m256i {__int8 m256i_i8[32];__int16 m256i_i16[16];__int32 m256i_i32[8];__int64 m256i_i64[4];unsigned __int8 m256i_u8[32];unsigned __int16 m256i_u16[16];unsigned __int32 m256i_u32[8];unsigned __int64 m256i_u64[4];};
struct _ldiv_t {int quot;int rem;};
typedef int clock_t;
typedef int errno_t;
typedef __int16 int16_t;
typedef int int32_t;
typedef int jmp_buf[16];
typedef struct _lldiv_t lldiv_t;
typedef unsigned __int8 uint8_t;
#define wchar_t unsigned __int16
typedef struct _72295A7541EC936D47FC3642EE72298B _BCD80;
typedef struct _8E0937B200DCBA03D39E01164C2A4D0D _FP128;
typedef struct _7007A5D07675D2D320A62125AF136FB2 _FPQ64;
typedef void *_HFILE;
typedef char _TCHAR;
union __m128 {float m128_f32[4];unsigned __int64 m128_u64[2];__int8 m128_i8[16];__int16 m128_i16[8];__int32 m128_i32[4];__int64 m128_i64[2];unsigned __int8 m128_u8[16];unsigned __int16 m128_u16[8];unsigned __int32 m128_u32[4];};
union __m256 {float m256_f32[8];};
typedef unsigned int _dev_t;
struct _div_t {int quot;int rem;};
typedef unsigned __int16 _ino_t;
struct _iobuf {char *_ptr;int _cnt;char *_base;int _flag;int _file;int _charbuf;int _bufsiz;char *_tmpfname;};
typedef int _off_t;
typedef __int64 fpos_t;
typedef signed __int8 int8_t;
typedef struct _ldiv_t ldiv_t;
typedef unsigned int size_t;
typedef unsigned __int16 wint_t;
typedef struct tagLC_ID LC_ID;
typedef char TCHAR;
typedef float _FP32;
typedef double _FP64;
typedef struct _72295A7541EC936D47FC3642EE72298B _FP80;
typedef int _TINT;
union __m64 {unsigned __int64 m64_u64;float m64_f32[2];__int8 m64_i8[8];__int16 m64_i16[4];__int32 m64_i32[2];__int64 m64_i64;unsigned __int8 m64_u8[8];unsigned __int16 m64_u16[4];unsigned __int32 m64_u32[2];};
typedef unsigned int dev_t;
typedef struct _div_t div_t;
typedef unsigned __int16 ino_t;
typedef int off_t;
typedef struct _iobuf FILE;
typedef __int16 _I16;
typedef int _I32;
typedef struct _1CF8D236196540158D67A26DAC991F28 _I64;
typedef __int64 _Q64;
typedef unsigned __int16 _U16;
typedef unsigned int _U32;
typedef struct _1CF8D236196540158D67A26DAC991F28 _U64;
struct tm {int tm_sec;int tm_min;int tm_hour;int tm_mday;int tm_mon;int tm_year;int tm_wday;int tm_yday;int tm_isdst;};
struct threadlocaleinfostruct___F0551D0CB09E7A078CAEF7CAC43D74C7 {char *locale;wchar_t *wlocale;int *refcount;int *wrefcount;};
struct _7007A5D07675D2D320A62125AF136FB2 {_Q64 W[2];};
typedef enum _0C0D8E877CDAA32B9F529E7264818D98 _FPIEEE_COMPARE_RESULT;
typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;
typedef enum _0CDD13AED9949118DD70163834A3A235 _FPIEEE_ROUNDING_MODE;
typedef void (*POGOAUTOSWEEPPROCW)(const wchar_t *);
typedef enum _D7F48ACA8F7E5F151D30CF090E11B572 _FP_OPERATION_CODE;
typedef int (*_CRT_REPORT_HOOKW)(int, wchar_t *, int *);
typedef enum _EBF8251B43E7412EBBCF0A9FFEA6D7A7 _FPIEEE_PRECISION;
typedef void (*_CRT_DUMP_CLIENT)(void *, size_t);
struct _RTC_ALLOCA_NODE {__int32 guard1;struct _RTC_ALLOCA_NODE *next;__int32 dummypad;size_t allocaSize;__int32 dummypad2;__int32 guard2[3];};
struct _finddata32i64_t {unsigned int attrib;__time32_t time_create;__time32_t time_access;__time32_t time_write;__int64 size;char name[260];};
typedef int (*_CRT_ALLOC_HOOK)(int, void *, size_t, int, int, const unsigned __int8 *, int);
typedef enum _239F13ABFE0DEB25C9BEF2C1826A55A5 _FPIEEE_FORMAT;
typedef int (*_RTC_error_fnW)(int, const wchar_t *, int, const wchar_t *, const wchar_t *, ...);
struct __finddata64_t {unsigned int attrib;__time64_t time_create;__time64_t time_access;__time64_t time_write;__int64 size;char name[260];};
typedef _ULonglong uint_least64_t;
typedef _Longlong int_least64_t;
typedef _ULonglong uint_fast64_t;
struct _CrtMemState {struct _CrtMemBlockHeader *pBlockHeader;size_t lCounts[5];size_t lSizes[5];size_t lHighWaterCount;size_t lTotalCount;};
typedef _Longlong int_fast64_t;
struct _heapinfo {int *_pentry;size_t _size;int _useflag;};
typedef _ULonglong uintmax_t;
typedef wchar_t wctrans_t;
typedef _Longlong intmax_t;
typedef _ULonglong uint64_t;
typedef wchar_t _Wint_t;
typedef _Longlong int64_t;
typedef size_t rsize_t;
typedef __time64_t time_t;
struct lconv {char *decimal_point;char *thousands_sep;char *grouping;char *int_curr_symbol;char *currency_symbol;char *mon_decimal_point;char *mon_thousands_sep;char *mon_grouping;char *positive_sign;char *negative_sign;char int_frac_digits;char frac_digits;char p_cs_precedes;char p_sep_by_space;char n_cs_precedes;char n_sep_by_space;char p_sign_posn;char n_sign_posn;wchar_t *_W_decimal_point;wchar_t *_W_thousands_sep;wchar_t *_W_int_curr_symbol;wchar_t *_W_currency_symbol;wchar_t *_W_mon_decimal_point;wchar_t *_W_mon_thousands_sep;wchar_t *_W_positive_sign;wchar_t *_W_negative_sign;};
struct _271E49C86C8EFA0B647D87A58CF03284 {unsigned __int32 RoundingMode : 2;unsigned __int32 Precision : 3;unsigned __int32 Operation : 12;_FPIEEE_EXCEPTION_FLAGS Cause;_FPIEEE_EXCEPTION_FLAGS Enable;_FPIEEE_EXCEPTION_FLAGS Status;_FPIEEE_VALUE Operand1;_FPIEEE_VALUE Operand2;_FPIEEE_VALUE Result;};
typedef void (*_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t);
struct _wfinddata32i64_t {unsigned int attrib;__time32_t time_create;__time32_t time_access;__time32_t time_write;__int64 size;wchar_t name[260];};
struct localeinfo_struct {pthreadlocinfo locinfo;pthreadmbcinfo mbcinfo;};
struct _finddata64i32_t {unsigned int attrib;__time64_t time_create;__time64_t time_access;__time64_t time_write;_fsize_t size;char name[260];};
struct _wfinddata64_t {unsigned int attrib;__time64_t time_create;__time64_t time_access;__time64_t time_write;__int64 size;wchar_t name[260];};
struct _finddata32_t {unsigned int attrib;__time32_t time_create;__time32_t time_access;__time32_t time_write;_fsize_t size;char name[260];};
struct threadlocaleinfostruct {int refcount;unsigned int lc_codepage;unsigned int lc_collate_cp;unsigned int lc_handle[6];LC_ID lc_id[6];struct threadlocaleinfostruct___F0551D0CB09E7A078CAEF7CAC43D74C7 lc_category[6];int lc_clike;int mb_cur_max;int *lconv_intl_refcount;int *lconv_num_refcount;int *lconv_mon_refcount;struct lconv *lconv;int *ctype1_refcount;unsigned __int16 *ctype1;const unsigned __int16 *pctype;const unsigned __int8 *pclmap;const unsigned __int8 *pcumap;struct __lc_time_data *lc_time_curr;};
struct _wfinddata64i32_t {unsigned int attrib;__time64_t time_create;__time64_t time_access;__time64_t time_write;_fsize_t size;wchar_t name[260];};
struct _wfinddata32_t {unsigned int attrib;__time32_t time_create;__time32_t time_access;__time32_t time_write;_fsize_t size;wchar_t name[260];};
struct _stat32i64 {_dev_t st_dev;_ino_t st_ino;unsigned __int16 st_mode;__int16 st_nlink;__int16 st_uid;__int16 st_gid;_dev_t st_rdev;__int64 st_size;__time32_t st_atime;__time32_t st_mtime;__time32_t st_ctime;};
struct _stat64 {_dev_t st_dev;_ino_t st_ino;unsigned __int16 st_mode;__int16 st_nlink;__int16 st_uid;__int16 st_gid;_dev_t st_rdev;__int64 st_size;__time64_t st_atime;__time64_t st_mtime;__time64_t st_ctime;};
struct _stat64i32 {_dev_t st_dev;_ino_t st_ino;unsigned __int16 st_mode;__int16 st_nlink;__int16 st_uid;__int16 st_gid;_dev_t st_rdev;_off_t st_size;__time64_t st_atime;__time64_t st_mtime;__time64_t st_ctime;};
struct _stat32 {_dev_t st_dev;_ino_t st_ino;unsigned __int16 st_mode;__int16 st_nlink;__int16 st_uid;__int16 st_gid;_dev_t st_rdev;_off_t st_size;__time32_t st_atime;__time32_t st_mtime;__time32_t st_ctime;};
struct stat {_dev_t st_dev;_ino_t st_ino;unsigned __int16 st_mode;__int16 st_nlink;__int16 st_uid;__int16 st_gid;_dev_t st_rdev;_off_t st_size;time_t st_atime;time_t st_mtime;time_t st_ctime;};
union _798F2A0931AE69495F6CF5BE64E576B5___C07814F2AB249BB45CDFEF44975072DA {_FP32 Fp32Value;_FP64 Fp64Value;_FP80 Fp80Value;_FP128 Fp128Value;_I16 I16Value;_I32 I32Value;_I64 I64Value;_U16 U16Value;_U32 U32Value;_U64 U64Value;_BCD80 Bcd80Value;char *StringValue;int CompareValue;_Q64 Q64Value;_FPQ64 Fpq64Value;};
struct _798F2A0931AE69495F6CF5BE64E576B5 {union _798F2A0931AE69495F6CF5BE64E576B5___C07814F2AB249BB45CDFEF44975072DA Value;unsigned __int32 OperandValid : 1;unsigned __int32 Format : 4;};



#endif
