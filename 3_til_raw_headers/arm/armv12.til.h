struct $17D82F5356DDC0EEDBCECCE0B5949A4F {unsigned int statusword;__ieee_handler_t invalid_handler;__ieee_handler_t divbyzero_handler;__ieee_handler_t overflow_handler;__ieee_handler_t underflow_handler;__ieee_handler_t inexact_handler;};
union $416FD6CB8AAC8B76D031AA5EECE44784 {unsigned int armdsp_flags_word;struct $416FD6CB8AAC8B76D031AA5EECE44784::$B0EF9FAA8D8A8E319588C268DB835124 armdsp_bitfields;};
struct $416FD6CB8AAC8B76D031AA5EECE44784::$B0EF9FAA8D8A8E319588C268DB835124 {__int32 armdsp_unused : 27;__int32 armdsp_q : 1;__int32 armdsp_v : 1;__int32 armdsp_c : 1;__int32 armdsp_z : 1;__int32 armdsp_n : 1;};
struct $5CBEDA5D0476602ACDBC03C2C85B14FB {void *__chunk;int __pos;};
union $FA216CD0C98C3E74292B35D1DCE1ABF6 {float f;float s;double d;int i;unsigned int ui;__int64 l;unsigned __int64 ul;struct $FA216CD0C98C3E74292B35D1DCE1ABF6::$CCEA058AB41892FC51360BD3E0279821 str;};
struct $FA216CD0C98C3E74292B35D1DCE1ABF6::$CCEA058AB41892FC51360BD3E0279821 {int word1;int word2;};
typedef struct __FILE FILE;
typedef int FILEHANDLE;
typedef int Flag;
enum MACRO_ARMDSP {ARMDSP_WORD32_MAX = 2147483647,ARMDSP_WORD32_MIN = -2147483648,ARMDSP_WORD16_MAX = 32767,ARMDSP_WORD16_MIN = -32768,};
enum MACRO_BUFSIZ {STDIN_BUFSIZ = 64,STDOUT_BUFSIZ = 64,STDERR_BUFSIZ = 16,};
enum MACRO_CHAR {CHAR_BIT = 8,};
enum MACRO_CHAR_MIN {CHAR_MIN = 0,CHAR_MAX = 255,};
enum MACRO_CLK {CLK_TCK = 100,};
enum MACRO_CLOCKS {CLOCKS_PER_SEC = 100,};
enum MACRO_DIG {DBL_MANT_DIG = 53,LDBL_MANT_DIG = 53,FLT_DIG = 6,DBL_DIG = 15,LDBL_DIG = 15,};
enum MACRO_DIVBYZERO {DIVBYZERO = 2,};
enum MACRO_EDOM {EDOM = 1,ERANGE = 2,};
enum MACRO_EOF {EOF = -1,};
enum MACRO_ESIGNUM {ESIGNUM = 3,EILSEQ = 4,};
enum MACRO_EXIT {EXIT_FAILURE = 1,EXIT_SUCCESS = 0,};
enum MACRO_EXP {FLT_MIN_EXP = -125,DBL_MIN_EXP = -1021,LDBL_MIN_EXP = -1021,FLT_MIN_10_EXP = -37,DBL_MIN_10_EXP = -307,LDBL_MIN_10_EXP = -307,FLT_MAX_EXP = 128,DBL_MAX_EXP = 1024,LDBL_MAX_EXP = 1024,FLT_MAX_10_EXP = 38,DBL_MAX_10_EXP = 308,LDBL_MAX_10_EXP = 308,};
enum MACRO_FE {FE_INVALID = 0x1,FE_DIVBYZERO = 0x2,FE_OVERFLOW = 0x4,FE_UNDERFLOW = 0x8,FE_INEXACT = 0x10,FE_ALL_EXCEPT = 0x1F,FE_TONEAREST = 0x0,FE_UPWARD = 0x1,FE_DOWNWARD = 0x2,FE_TOWARDZERO = 0x3,FE_IEEE_FLUSHZERO = 0x1000000,FE_IEEE_ROUND_TONEAREST = 0x0,FE_IEEE_ROUND_UPWARD = 0x400000,FE_IEEE_ROUND_DOWNWARD = 0x800000,FE_IEEE_ROUND_TOWARDZERO = 0xC00000,FE_IEEE_ROUND_MASK = 0xC00000,FE_IEEE_MASK_INVALID = 0x100,FE_IEEE_MASK_DIVBYZERO = 0x200,FE_IEEE_MASK_OVERFLOW = 0x400,FE_IEEE_MASK_UNDERFLOW = 0x800,FE_IEEE_MASK_INEXACT = 0x1000,FE_IEEE_MASK_ALL_EXCEPT = 0x1F00,FE_IEEE_INVALID = 0x1,FE_IEEE_DIVBYZERO = 0x2,FE_IEEE_OVERFLOW = 0x4,FE_IEEE_UNDERFLOW = 0x8,FE_IEEE_INEXACT = 0x10,FE_IEEE_ALL_EXCEPT = 0x1F,FE_EX_RDIR = 0x80000000,FE_EX_EXCEPT_SHIFT = 0x1A,FE_EX_EXCEPT_MASK = 0x7C000000,FE_EX_INEXACT = 0x40000000,FE_EX_UNDERFLOW = 0x20000000,FE_EX_OVERFLOW = 0x10000000,FE_EX_DIVBYZERO = 0x8000000,FE_EX_INVALID = 0x4000000,FE_EX_FLUSHZERO_SHIFT = 0x18,FE_EX_FLUSHZERO = 0x1000000,FE_EX_ROUND_SHIFT = 0x16,FE_EX_ROUND_MASK = 0xC00000,FE_EX_INTYPE_SHIFT = 0x7,FE_EX_INTYPE_MASK = 0x380,FE_EX_OUTTYPE_SHIFT = 0x4,FE_EX_OUTTYPE_MASK = 0x70,FE_EX_TYPE_SHIFT = 0x4,FE_EX_TYPE_MASK = 0x70,FE_EX_FN_SHIFT = 0x0,FE_EX_FN_MASK = 0xF,FE_EX_ROUND_NEAREST = 0x0,FE_EX_ROUND_PLUSINF = 0x400000,FE_EX_ROUND_MINUSINF = 0x800000,FE_EX_ROUND_ZERO = 0xC00000,FE_EX_BASETYPE_FLOAT = 0x0,FE_EX_BASETYPE_DOUBLE = 0x1,FE_EX_BASETYPE_INT = 0x4,FE_EX_BASETYPE_LONGLONG = 0x5,FE_EX_BASETYPE_UINT = 0x6,FE_EX_BASETYPE_ULONGLONG = 0x7,FE_EX_TYPE_FLOAT = 0x0,FE_EX_TYPE_DOUBLE = 0x10,FE_EX_TYPE_INT = 0x40,FE_EX_TYPE_LONGLONG = 0x50,FE_EX_TYPE_UINT = 0x60,FE_EX_TYPE_ULONGLONG = 0x70,FE_EX_INTYPE_FLOAT = 0x0,FE_EX_INTYPE_DOUBLE = 0x80,FE_EX_INTYPE_INT = 0x200,FE_EX_INTYPE_LONGLONG = 0x280,FE_EX_INTYPE_UINT = 0x300,FE_EX_INTYPE_ULONGLONG = 0x380,FE_EX_OUTTYPE_FLOAT = 0x0,FE_EX_OUTTYPE_DOUBLE = 0x10,FE_EX_OUTTYPE_INT = 0x40,FE_EX_OUTTYPE_LONGLONG = 0x50,FE_EX_OUTTYPE_UINT = 0x60,FE_EX_OUTTYPE_ULONGLONG = 0x70,FE_EX_FN_ADD = 0x1,FE_EX_FN_SUB = 0x2,FE_EX_FN_MUL = 0x3,FE_EX_FN_DIV = 0x4,FE_EX_FN_REM = 0x5,FE_EX_FN_RND = 0x6,FE_EX_FN_SQRT = 0x7,FE_EX_FN_CVT = 0x8,FE_EX_FN_CMP = 0x9,FE_EX_FN_RAISE = 0xF,FE_EX_CMPRET_UNORDERED = 0x8,FE_EX_CMPRET_LESS = 0x4,FE_EX_CMPRET_EQUAL = 0x2,FE_EX_CMPRET_GREATER = 0x1,};
enum MACRO_FLT {FLT_RADIX = 2,FLT_ROUNDS = 1,FLT_MANT_DIG = 24,};
enum MACRO_FLT_ROUNDS_IS_CONSTANT {_RWSTD_FLT_ROUNDS_IS_CONSTANT = 1,RWSTD_FLT_ROUNDS_IS_CONSTANT = 1,};
enum MACRO_FOPEN {FOPEN_MAX = 16,FILENAME_MAX = 80,};
enum MACRO_INT : __int64 {INT_LEAST8_MIN = -128,INT_LEAST16_MIN = -32768,INT_LEAST32_MIN = -2147483648,INT_LEAST64_MIN = -9223372036854775808,INT_LEAST8_MAX = 127,INT_LEAST16_MAX = 32767,INT_LEAST32_MAX = 2147483647,INT_LEAST64_MAX = 9223372036854775807,};
enum MACRO_INTMAX : __int64 {INTMAX_MIN = 0x8000000000000000,INTMAX_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_INTPTR {INTPTR_MIN = 0x80000000,INTPTR_MAX = 0x7FFFFFFF,};
enum MACRO_INT_FAST8 : __int64 {INT_FAST8_MIN = 0xFFFFFFFF80000000,INT_FAST16_MIN = 0xFFFFFFFF80000000,INT_FAST32_MIN = 0xFFFFFFFF80000000,INT_FAST64_MIN = 0x8000000000000000,INT_FAST8_MAX = 0x7FFFFFFF,INT_FAST16_MAX = 0x7FFFFFFF,INT_FAST32_MAX = 0x7FFFFFFF,INT_FAST64_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_INT_MIN {INT_MIN = 0x80000000,INT_MAX = 0x7FFFFFFF,};
enum MACRO_L {L_tmpnam = 80,};
enum MACRO_LC {LC_COLLATE = 1,LC_CTYPE = 2,LC_MONETARY = 4,LC_NUMERIC = 8,LC_TIME = 16,LC_ALL = 31,};
enum MACRO_LLONG : __int64 {LLONG_MIN = 0x8000000000000000,LLONG_MAX = 0x7FFFFFFFFFFFFFFF,};
enum MACRO_LONG {LONG_MIN = 0x80000000,LONG_MAX = 0x7FFFFFFF,};
enum MACRO_MAX : __int64 {INT8_MAX = 127,INT16_MAX = 32767,INT32_MAX = 2147483647,INT64_MAX = 9223372036854775807,UINT8_MAX = 255,UINT16_MAX = 65535,UINT32_MAX = -1,UINT64_MAX = -1,};
enum MACRO_MB {MB_LEN_MAX = 1,};
enum MACRO_MIN : __int64 {INT8_MIN = -128,INT16_MIN = -32768,INT32_MIN = -2147483648,INT64_MIN = -9223372036854775808,};
enum MACRO_NO_BAD_CAST {_RWSTD_NO_BAD_CAST = 1,RWSTD_NO_BAD_CAST = 1,};
enum MACRO_NO_CATOPEN_CATGETS {_RWSTD_NO_CATOPEN_CATGETS = 1,RWSTD_NO_CATOPEN_CATGETS = 1,};
enum MACRO_NO_COMPLEX_DEFAULT_TEMPLATES {_RWSTD_NO_COMPLEX_DEFAULT_TEMPLATES = 1,RWSTD_NO_COMPLEX_DEFAULT_TEMPLATES = 1,};
enum MACRO_NO_EXCEPTIONS {_RWSTD_NO_EXCEPTIONS = 1,RWSTD_NO_EXCEPTIONS = 1,};
enum MACRO_NO_MBSTATE_T {_RWSTD_NO_MBSTATE_T = 1,RWSTD_NO_MBSTATE_T = 1,};
enum MACRO_NO_NAMESPACE {_RWSTD_NO_NAMESPACE = 1,RWSTD_NO_NAMESPACE = 1,};
enum MACRO_NO_STATIC_CAST {_RWSTD_NO_STATIC_CAST = 1,RWSTD_NO_STATIC_CAST = 1,};
enum MACRO_NO_STATIC_MEM_DEF {_RWSTD_NO_STATIC_MEM_DEF = 1,RWSTD_NO_STATIC_MEM_DEF = 1,};
enum MACRO_NO_STREAM_LONG_DOUBLE {_RWSTD_NO_STREAM_LONG_DOUBLE = 1,RWSTD_NO_STREAM_LONG_DOUBLE = 1,};
enum MACRO_NO_SWPRINTF {_RWSTD_NO_SWPRINTF = 1,RWSTD_NO_SWPRINTF = 1,};
enum MACRO_NO_TEMPLATE_TEMPLATE {_RWSTD_NO_TEMPLATE_TEMPLATE = 1,RWSTD_NO_TEMPLATE_TEMPLATE = 1,};
enum MACRO_NO_WCHAR_H {_RWSTD_NO_WCHAR_H = 1,RWSTD_NO_WCHAR_H = 1,};
enum MACRO_NO_WCTYPE_H {_RWSTD_NO_WCTYPE_H = 1,RWSTD_NO_WCTYPE_H = 1,};
enum MACRO_NO_WIDE_CHAR {_RWSTD_NO_WIDE_CHAR = 1,RWSTD_NO_WIDE_CHAR = 1,};
enum MACRO_NO_WINT_TYPE {_RWSTD_NO_WINT_TYPE = 1,RWSTD_NO_WINT_TYPE = 1,};
enum MACRO_NULL {_IOFBF = 256,_IOLBF = 512,_IONBF = 1024,};
enum MACRO_NULL_0 {NULL = 0,};
enum MACRO_OPEN {OPEN_R = 0,OPEN_W = 4,OPEN_A = 8,OPEN_B = 1,OPEN_PLUS = 2,};
enum MACRO_PTRDIFF {PTRDIFF_MIN = 0x80000000,PTRDIFF_MAX = 0x7FFFFFFF,};
enum MACRO_RAND {RAND_MAX = 0x7FFFFFFF,MB_CUR_MAX = 0x1,};
enum MACRO_RW {RW_MESSAGE_SET_NUMBER = 1,RW_NO_POSIX_RE = 1,RW_NO_XMSG = 1,};
enum MACRO_RWCOMPVERSION {RWCOMPVERSION = 120806,};
enum MACRO_RWSTD {RWSTD_NO_STRICMP = 1,RWSTD_NO_STRNICMP = 1,};
enum MACRO_RWSTD_COMPILE_INSTANTIATE {RWSTD_COMPILE_INSTANTIATE = 1,_RWSTD_COMPILE_INSTANTIATE = 1,};
enum MACRO_RWSTD_NOT_ALL_WSTR_CFUNCTIONS {RWSTD_NOT_ALL_WSTR_CFUNCTIONS = 1,_RWSTD_NOT_ALL_WSTR_CFUNCTIONS = 1,};
enum MACRO_RWSTD_NO_OVERLOAD_WCHAR {RWSTD_NO_OVERLOAD_WCHAR = 1,_RWSTD_NO_OVERLOAD_WCHAR = 1,};
enum MACRO_RWSTD_NO_THREADS {RWSTD_NO_THREADS = 1,_RWSTD_NO_THREADS = 1,};
enum MACRO_RWSTD_NO_WCSXFRM {RWSTD_NO_WCSXFRM = 1,_RWSTD_NO_WCSXFRM = 1,};
enum MACRO_RWSTD_NO_WSTR {RWSTD_NO_WSTR = 1,_RWSTD_NO_WSTR = 1,};
enum MACRO_RW_BYTES {RW_BYTES_PER_PTR = 4,RW_BYTES_PER_WORD = 4,RW_BYTES_PER_LONG = 4,RW_DEFAULT_PRECISION = 16,RW_NO_THREADS = 1,};
enum MACRO_SCHAR {SCHAR_MIN = -128,SCHAR_MAX = 127,};
enum MACRO_SEEK {SEEK_SET = 0,SEEK_CUR = 1,SEEK_END = 2,};
enum MACRO_SHRT {SHRT_MIN = 0xFFFF8000,SHRT_MAX = 0x7FFF,};
enum MACRO_SIG {SIG_ATOMIC_MIN = 0x80000000,SIG_ATOMIC_MAX = 0x7FFFFFFF,};
enum MACRO_SIGNAL {SIGABRT = 1,SIGFPE = 2,SIGILL = 3,SIGINT = 4,SIGSEGV = 5,SIGTERM = 6,SIGSTAK = 7,SIGRTRED = 8,SIGRTMEM = 9,SIGUSR1 = 10,SIGUSR2 = 11,SIGPVFN = 12,SIGCPPL = 13,};
enum MACRO_SIZE {SIZE_MAX = -1,};
enum MACRO_TMP {TMP_MAX = 256,};
enum MACRO_UCHAR {UCHAR_MAX = 255,};
enum MACRO_UINT {UINT_LEAST8_MAX = 255,UINT_LEAST16_MAX = 65535,UINT_LEAST32_MAX = -1,UINT_LEAST64_MAX = -1,};
enum MACRO_UINTMAX {UINTMAX_MAX = -1,};
enum MACRO_UINTPTR {UINTPTR_MAX = -1,};
enum MACRO_UINT_FAST8 {UINT_FAST8_MAX = -1,UINT_FAST16_MAX = -1,UINT_FAST32_MAX = -1,UINT_FAST64_MAX = -1,};
enum MACRO_UINT_MAX {UINT_MAX = 0xFFFFFFFF,};
enum MACRO_ULLONG {ULLONG_MAX = 0xFFFFFFFF,};
enum MACRO_ULONG {ULONG_MAX = 0xFFFFFFFF,};
enum MACRO_USHRT {USHRT_MAX = 65535,};
enum MACRO_WCHAR {WCHAR_MIN = 0,WCHAR_MAX = 65535,};
enum MACRO__EM {_EM_INVALID = 0x1,_EM_ZERODIVIDE = 0x2,_EM_OVERFLOW = 0x4,_EM_UNDERFLOW = 0x8,_EM_INEXACT = 0x10,};
enum MACRO__FPE {_FPE_INVALID = 0x4000000,_FPE_ZERODIVIDE = 0x8000000,_FPE_OVERFLOW = 0x10000000,_FPE_UNDERFLOW = 0x20000000,_FPE_INEXACT = 0x40000000,};
enum MACRO__IOBIN {_IOBIN = 0x4,BUFSIZ = 0x200,};
enum MACRO__MCW {_MCW_EM = 0x1F,};
enum MACRO__MCW_RC {_MCW_RC = 0xC000,};
enum MACRO__RC {_RC_CHOP = 0xC000,_RC_UP = 0x4000,_RC_DOWN = 0x8000,_RC_NEAR = 0x0,};
enum MACRO__RW {_RW_STD_LOCALE = 1,_RW_STD_IOSTREAM = 1,_RW_STD_STL = 1,_RW_STD_STRING = 1,_RW_STD_COMPLEX = 1,_RW_STD_BITSET = 1,_RW_STD_EXCEPT = 1,_RW_STD_VALARRAY = 1,_RW_STD_LIMITS = 1,_RW_NO_SIGNED_OVERLOAD = 1,};
enum MACRO__RWSTD {_RWSTD_VER = 0x20101,_RWSTD_NOMSG = 0x0,_RWSTD_CATGETS = 0x1,_RWSTD_GETTEXT = 0x2,_RWSTD_DGETTEXT = 0x3,_RWSTD_MESSAGE = 0x0,};
enum MACRO__RWSTD_ANSI {_RWSTD_ANSI_FILEIO = 1,_RWSTD_NO_STRFTIME_CAPC = 1,_RWSTD_DEFAULT_PRECISION = 16,_RWSTD_NO_EXPLICIT_INSTANTIATION = 1,_RWSTD_NO_INSTANTIATE = 1,_RWSTD_NO_EXPLICIT_FUNC_INSTANTIATION = 1,_RWSTD_MB_CUR_MAX = 16,_RWSTD_NO_EX_MSGS = 1,};
enum MACRO__RWSTD_NO {_RWSTD_NO_GLOBAL_TZ = 1,};
enum MACRO__SYS {_SYS_OPEN = 16,};
enum MACRO___S {__S = 1,__P = 2,__B = 4,__L = 8,__U = 16,__N = 32,__C = 64,__X = 128,};
enum MACRO___STD {__STD_RWCOMPILER_H__ = 1,};
enum MACRO___USER {__USER_LIBSPACE_SIZE = 96,};
enum MACRO___fpsr {__fpsr_IXE = 0x100000,__fpsr_UFE = 0x80000,__fpsr_OFE = 0x40000,__fpsr_DZE = 0x20000,__fpsr_IOE = 0x10000,__fpsr_IXC = 0x10,__fpsr_UFC = 0x8,__fpsr_OFC = 0x4,__fpsr_DZC = 0x2,__fpsr_IOC = 0x1,};
typedef signed __int16 Word16;
typedef signed int Word32;
struct __FILE;
struct __Heap_Descriptor;
typedef struct $5CBEDA5D0476602ACDBC03C2C85B14FB __alloca_state;
struct __argc_argv {int argc;char **argv;};
struct __fpos_t_struct {unsigned int __lo;};
struct __heap_extent {unsigned int base;unsigned int range;};
typedef int (*__heapprt)(void *, const char *, ...);
typedef unsigned int __ieee_edata_t;
typedef __ieee_value_t (*__ieee_handler_t)(__ieee_value_t, __ieee_value_t, __ieee_edata_t);
typedef union $FA216CD0C98C3E74292B35D1DCE1ABF6 __ieee_value_t;
struct __initial_stackheap {unsigned int heap_base;unsigned int stack_base;unsigned int heap_limit;unsigned int stack_limit;};
struct __lc_collate_blk {unsigned int offset_collate_table;};
struct __lc_ctype_blk {char ctype_table[257];};
struct __lc_monetary_blk {char int_frac_digits;char frac_digits;char p_cs_precedes;char p_sep_by_space;char n_cs_precedes;char n_sep_by_space;char p_sign_posn;char n_sign_posn;unsigned int offset_int_curr_symbol;unsigned int offset_currency_symbol;unsigned int offset_mon_decimal_point;unsigned int offset_mon_thousands_sep;unsigned int offset_mon_grouping;unsigned int offset_positive_sign;unsigned int offset_negative_sign;};
struct __lc_numeric_blk {unsigned int offset_decimal_point;unsigned int offset_thousands_sep;unsigned int offset_grouping;};
struct __lc_time_blk {unsigned int offset_week_abbrs;unsigned int offset_week_full;unsigned int offset_month_abbrs;unsigned int offset_month_full;unsigned int offset_am;unsigned int offset_pm;unsigned int offset_datetime_fmt;unsigned int offset_date_fmt;unsigned int offset_time_fmt;unsigned int size_week_abbrs;unsigned int size_week_full;unsigned int size_month_abbrs;unsigned int size_month_full;};
struct __sdiv32by16 {int quot;int rem;};
struct __sdiv64by32 {int rem;int quot;};
struct __stack_slop {unsigned int always;unsigned int cleanup;};
struct __udiv32by16 {unsigned int quot;unsigned int rem;};
typedef int *__va_list[1];
typedef union $416FD6CB8AAC8B76D031AA5EECE44784 armdsp_flagdata_union;
typedef unsigned int clock_t;
struct div_t {int quot;int rem;};
typedef struct $17D82F5356DDC0EEDBCECCE0B5949A4F fenv_t;
typedef struct $17D82F5356DDC0EEDBCECCE0B5949A4F fexcept_t;
typedef struct __fpos_t_struct fpos_t;
typedef signed __int16 int16_t;
typedef signed int int32_t;
typedef signed __int64 int64_t;
typedef signed __int8 int8_t;
typedef signed int int_fast16_t;
typedef signed int int_fast32_t;
typedef signed __int64 int_fast64_t;
typedef signed int int_fast8_t;
typedef signed __int16 int_least16_t;
typedef signed int int_least32_t;
typedef signed __int64 int_least64_t;
typedef signed __int8 int_least8_t;
typedef signed __int64 intmax_t;
typedef signed int intptr_t;
typedef int jmp_buf[32];
struct lconv {char *decimal_point;char *thousands_sep;char *grouping;char *int_curr_symbol;char *currency_symbol;char *mon_decimal_point;char *mon_thousands_sep;char *mon_grouping;char *positive_sign;char *negative_sign;char int_frac_digits;char frac_digits;char p_cs_precedes;char p_sep_by_space;char n_cs_precedes;char n_sep_by_space;char p_sign_posn;char n_sign_posn;};
struct ldiv_t {int quot;int rem;};
struct lldiv_t {__int64 quot;__int64 rem;};
typedef int ptrdiff_t;
typedef int sig_atomic_t;
typedef unsigned int size_t;
typedef unsigned int time_t;
struct tm {int tm_sec;int tm_min;int tm_hour;int tm_mday;int tm_mon;int tm_year;int tm_wday;int tm_yday;int tm_isdst;};
typedef unsigned __int16 uint16_t;
typedef unsigned int uint32_t;
typedef unsigned __int64 uint64_t;
typedef unsigned __int8 uint8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned __int64 uint_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned __int16 uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned __int64 uint_least64_t;
typedef unsigned __int8 uint_least8_t;
typedef unsigned __int64 uintmax_t;
typedef unsigned int uintptr_t;
typedef int *va_list[1];
typedef unsigned __int16 wchar_t;

MACRO_ARMDSP ARMDSP_WORD16_MAX;
MACRO_ARMDSP ARMDSP_WORD16_MIN;
MACRO_ARMDSP ARMDSP_WORD32_MAX;
MACRO_ARMDSP ARMDSP_WORD32_MIN;
MACRO__IOBIN BUFSIZ;
MACRO_CHAR CHAR_BIT;
MACRO_CHAR_MIN CHAR_MAX;
MACRO_CHAR_MIN CHAR_MIN;
MACRO_CLK CLK_TCK;
MACRO_CLOCKS CLOCKS_PER_SEC;
MACRO_DIG DBL_DIG;
MACRO_DIG DBL_MANT_DIG;
MACRO_EXP DBL_MAX_10_EXP;
MACRO_EXP DBL_MAX_EXP;
MACRO_EXP DBL_MIN_10_EXP;
MACRO_EXP DBL_MIN_EXP;
MACRO_DIVBYZERO DIVBYZERO;
MACRO_EDOM EDOM;
MACRO_ESIGNUM EILSEQ;
MACRO_EOF EOF;
MACRO_EDOM ERANGE;
MACRO_ESIGNUM ESIGNUM;
MACRO_EXIT EXIT_FAILURE;
MACRO_EXIT EXIT_SUCCESS;
MACRO_FE FE_ALL_EXCEPT;
MACRO_FE FE_DIVBYZERO;
MACRO_FE FE_DOWNWARD;
MACRO_FE FE_EX_BASETYPE_DOUBLE;
MACRO_FE FE_EX_BASETYPE_FLOAT;
MACRO_FE FE_EX_BASETYPE_INT;
MACRO_FE FE_EX_BASETYPE_LONGLONG;
MACRO_FE FE_EX_BASETYPE_UINT;
MACRO_FE FE_EX_BASETYPE_ULONGLONG;
MACRO_FE FE_EX_CMPRET_EQUAL;
MACRO_FE FE_EX_CMPRET_GREATER;
MACRO_FE FE_EX_CMPRET_LESS;
MACRO_FE FE_EX_CMPRET_UNORDERED;
MACRO_FE FE_EX_DIVBYZERO;
MACRO_FE FE_EX_EXCEPT_MASK;
MACRO_FE FE_EX_EXCEPT_SHIFT;
MACRO_FE FE_EX_FLUSHZERO;
MACRO_FE FE_EX_FLUSHZERO_SHIFT;
MACRO_FE FE_EX_FN_ADD;
MACRO_FE FE_EX_FN_CMP;
MACRO_FE FE_EX_FN_CVT;
MACRO_FE FE_EX_FN_DIV;
MACRO_FE FE_EX_FN_MASK;
MACRO_FE FE_EX_FN_MUL;
MACRO_FE FE_EX_FN_RAISE;
MACRO_FE FE_EX_FN_REM;
MACRO_FE FE_EX_FN_RND;
MACRO_FE FE_EX_FN_SHIFT;
MACRO_FE FE_EX_FN_SQRT;
MACRO_FE FE_EX_FN_SUB;
MACRO_FE FE_EX_INEXACT;
MACRO_FE FE_EX_INTYPE_DOUBLE;
MACRO_FE FE_EX_INTYPE_FLOAT;
MACRO_FE FE_EX_INTYPE_INT;
MACRO_FE FE_EX_INTYPE_LONGLONG;
MACRO_FE FE_EX_INTYPE_MASK;
MACRO_FE FE_EX_INTYPE_SHIFT;
MACRO_FE FE_EX_INTYPE_UINT;
MACRO_FE FE_EX_INTYPE_ULONGLONG;
MACRO_FE FE_EX_INVALID;
MACRO_FE FE_EX_OUTTYPE_DOUBLE;
MACRO_FE FE_EX_OUTTYPE_FLOAT;
MACRO_FE FE_EX_OUTTYPE_INT;
MACRO_FE FE_EX_OUTTYPE_LONGLONG;
MACRO_FE FE_EX_OUTTYPE_MASK;
MACRO_FE FE_EX_OUTTYPE_SHIFT;
MACRO_FE FE_EX_OUTTYPE_UINT;
MACRO_FE FE_EX_OUTTYPE_ULONGLONG;
MACRO_FE FE_EX_OVERFLOW;
MACRO_FE FE_EX_RDIR;
MACRO_FE FE_EX_ROUND_MASK;
MACRO_FE FE_EX_ROUND_MINUSINF;
MACRO_FE FE_EX_ROUND_NEAREST;
MACRO_FE FE_EX_ROUND_PLUSINF;
MACRO_FE FE_EX_ROUND_SHIFT;
MACRO_FE FE_EX_ROUND_ZERO;
MACRO_FE FE_EX_TYPE_DOUBLE;
MACRO_FE FE_EX_TYPE_FLOAT;
MACRO_FE FE_EX_TYPE_INT;
MACRO_FE FE_EX_TYPE_LONGLONG;
MACRO_FE FE_EX_TYPE_MASK;
MACRO_FE FE_EX_TYPE_SHIFT;
MACRO_FE FE_EX_TYPE_UINT;
MACRO_FE FE_EX_TYPE_ULONGLONG;
MACRO_FE FE_EX_UNDERFLOW;
MACRO_FE FE_IEEE_ALL_EXCEPT;
MACRO_FE FE_IEEE_DIVBYZERO;
MACRO_FE FE_IEEE_FLUSHZERO;
MACRO_FE FE_IEEE_INEXACT;
MACRO_FE FE_IEEE_INVALID;
MACRO_FE FE_IEEE_MASK_ALL_EXCEPT;
MACRO_FE FE_IEEE_MASK_DIVBYZERO;
MACRO_FE FE_IEEE_MASK_INEXACT;
MACRO_FE FE_IEEE_MASK_INVALID;
MACRO_FE FE_IEEE_MASK_OVERFLOW;
MACRO_FE FE_IEEE_MASK_UNDERFLOW;
MACRO_FE FE_IEEE_OVERFLOW;
MACRO_FE FE_IEEE_ROUND_DOWNWARD;
MACRO_FE FE_IEEE_ROUND_MASK;
MACRO_FE FE_IEEE_ROUND_TONEAREST;
MACRO_FE FE_IEEE_ROUND_TOWARDZERO;
MACRO_FE FE_IEEE_ROUND_UPWARD;
MACRO_FE FE_IEEE_UNDERFLOW;
MACRO_FE FE_INEXACT;
MACRO_FE FE_INVALID;
MACRO_FE FE_OVERFLOW;
MACRO_FE FE_TONEAREST;
MACRO_FE FE_TOWARDZERO;
MACRO_FE FE_UNDERFLOW;
MACRO_FE FE_UPWARD;
MACRO_FOPEN FILENAME_MAX;
MACRO_DIG FLT_DIG;
MACRO_FLT FLT_MANT_DIG;
MACRO_EXP FLT_MAX_10_EXP;
MACRO_EXP FLT_MAX_EXP;
MACRO_EXP FLT_MIN_10_EXP;
MACRO_EXP FLT_MIN_EXP;
MACRO_FLT FLT_RADIX;
MACRO_FLT FLT_ROUNDS;
MACRO_FOPEN FOPEN_MAX;
MACRO_MAX INT16_MAX;
MACRO_MIN INT16_MIN;
MACRO_MAX INT32_MAX;
MACRO_MIN INT32_MIN;
MACRO_MAX INT64_MAX;
MACRO_MIN INT64_MIN;
MACRO_MAX INT8_MAX;
MACRO_MIN INT8_MIN;
MACRO_INTMAX INTMAX_MAX;
MACRO_INTMAX INTMAX_MIN;
MACRO_INTPTR INTPTR_MAX;
MACRO_INTPTR INTPTR_MIN;
MACRO_INT_FAST8 INT_FAST16_MAX;
MACRO_INT_FAST8 INT_FAST16_MIN;
MACRO_INT_FAST8 INT_FAST32_MAX;
MACRO_INT_FAST8 INT_FAST32_MIN;
MACRO_INT_FAST8 INT_FAST64_MAX;
MACRO_INT_FAST8 INT_FAST64_MIN;
MACRO_INT_FAST8 INT_FAST8_MAX;
MACRO_INT_FAST8 INT_FAST8_MIN;
MACRO_INT INT_LEAST16_MAX;
MACRO_INT INT_LEAST16_MIN;
MACRO_INT INT_LEAST32_MAX;
MACRO_INT INT_LEAST32_MIN;
MACRO_INT INT_LEAST64_MAX;
MACRO_INT INT_LEAST64_MIN;
MACRO_INT INT_LEAST8_MAX;
MACRO_INT INT_LEAST8_MIN;
MACRO_INT_MIN INT_MAX;
MACRO_INT_MIN INT_MIN;
MACRO_LC LC_ALL;
MACRO_LC LC_COLLATE;
MACRO_LC LC_CTYPE;
MACRO_LC LC_MONETARY;
MACRO_LC LC_NUMERIC;
MACRO_LC LC_TIME;
MACRO_DIG LDBL_DIG;
MACRO_DIG LDBL_MANT_DIG;
MACRO_EXP LDBL_MAX_10_EXP;
MACRO_EXP LDBL_MAX_EXP;
MACRO_EXP LDBL_MIN_10_EXP;
MACRO_EXP LDBL_MIN_EXP;
MACRO_LLONG LLONG_MAX;
MACRO_LLONG LLONG_MIN;
MACRO_LONG LONG_MAX;
MACRO_LONG LONG_MIN;
MACRO_L L_tmpnam;
MACRO_RAND MB_CUR_MAX;
MACRO_MB MB_LEN_MAX;
MACRO_NULL_0 NULL;
MACRO_OPEN OPEN_A;
MACRO_OPEN OPEN_B;
MACRO_OPEN OPEN_PLUS;
MACRO_OPEN OPEN_R;
MACRO_OPEN OPEN_W;
MACRO_PTRDIFF PTRDIFF_MAX;
MACRO_PTRDIFF PTRDIFF_MIN;
MACRO_RAND RAND_MAX;
MACRO_RWCOMPVERSION RWCOMPVERSION;
MACRO_RWSTD_COMPILE_INSTANTIATE RWSTD_COMPILE_INSTANTIATE;
MACRO_FLT_ROUNDS_IS_CONSTANT RWSTD_FLT_ROUNDS_IS_CONSTANT;
MACRO_RWSTD_NOT_ALL_WSTR_CFUNCTIONS RWSTD_NOT_ALL_WSTR_CFUNCTIONS;
MACRO_NO_BAD_CAST RWSTD_NO_BAD_CAST;
MACRO_NO_CATOPEN_CATGETS RWSTD_NO_CATOPEN_CATGETS;
MACRO_NO_COMPLEX_DEFAULT_TEMPLATES RWSTD_NO_COMPLEX_DEFAULT_TEMPLATES;
MACRO_NO_EXCEPTIONS RWSTD_NO_EXCEPTIONS;
MACRO_NO_MBSTATE_T RWSTD_NO_MBSTATE_T;
MACRO_NO_NAMESPACE RWSTD_NO_NAMESPACE;
MACRO_RWSTD_NO_OVERLOAD_WCHAR RWSTD_NO_OVERLOAD_WCHAR;
MACRO_NO_STATIC_CAST RWSTD_NO_STATIC_CAST;
MACRO_NO_STATIC_MEM_DEF RWSTD_NO_STATIC_MEM_DEF;
MACRO_NO_STREAM_LONG_DOUBLE RWSTD_NO_STREAM_LONG_DOUBLE;
MACRO_RWSTD RWSTD_NO_STRICMP;
MACRO_RWSTD RWSTD_NO_STRNICMP;
MACRO_NO_SWPRINTF RWSTD_NO_SWPRINTF;
MACRO_NO_TEMPLATE_TEMPLATE RWSTD_NO_TEMPLATE_TEMPLATE;
MACRO_RWSTD_NO_THREADS RWSTD_NO_THREADS;
MACRO_NO_WCHAR_H RWSTD_NO_WCHAR_H;
MACRO_RWSTD_NO_WCSXFRM RWSTD_NO_WCSXFRM;
MACRO_NO_WCTYPE_H RWSTD_NO_WCTYPE_H;
MACRO_NO_WIDE_CHAR RWSTD_NO_WIDE_CHAR;
MACRO_NO_WINT_TYPE RWSTD_NO_WINT_TYPE;
MACRO_RWSTD_NO_WSTR RWSTD_NO_WSTR;
MACRO_RW_BYTES RW_BYTES_PER_LONG;
MACRO_RW_BYTES RW_BYTES_PER_PTR;
MACRO_RW_BYTES RW_BYTES_PER_WORD;
MACRO_RW_BYTES RW_DEFAULT_PRECISION;
MACRO_RW RW_MESSAGE_SET_NUMBER;
MACRO_RW RW_NO_POSIX_RE;
MACRO_RW_BYTES RW_NO_THREADS;
MACRO_RW RW_NO_XMSG;
MACRO_SCHAR SCHAR_MAX;
MACRO_SCHAR SCHAR_MIN;
MACRO_SEEK SEEK_CUR;
MACRO_SEEK SEEK_END;
MACRO_SEEK SEEK_SET;
MACRO_SHRT SHRT_MAX;
MACRO_SHRT SHRT_MIN;
MACRO_SIGNAL SIGABRT;
MACRO_SIGNAL SIGCPPL;
MACRO_SIGNAL SIGFPE;
MACRO_SIGNAL SIGILL;
MACRO_SIGNAL SIGINT;
MACRO_SIGNAL SIGPVFN;
MACRO_SIGNAL SIGRTMEM;
MACRO_SIGNAL SIGRTRED;
MACRO_SIGNAL SIGSEGV;
MACRO_SIGNAL SIGSTAK;
MACRO_SIGNAL SIGTERM;
MACRO_SIGNAL SIGUSR1;
MACRO_SIGNAL SIGUSR2;
MACRO_SIG SIG_ATOMIC_MAX;
MACRO_SIG SIG_ATOMIC_MIN;
MACRO_SIZE SIZE_MAX;
MACRO_BUFSIZ STDERR_BUFSIZ;
MACRO_BUFSIZ STDIN_BUFSIZ;
MACRO_BUFSIZ STDOUT_BUFSIZ;
MACRO_TMP TMP_MAX;
MACRO_UCHAR UCHAR_MAX;
MACRO_MAX UINT16_MAX;
MACRO_MAX UINT32_MAX;
MACRO_MAX UINT64_MAX;
MACRO_MAX UINT8_MAX;
MACRO_UINTMAX UINTMAX_MAX;
MACRO_UINTPTR UINTPTR_MAX;
MACRO_UINT_FAST8 UINT_FAST16_MAX;
MACRO_UINT_FAST8 UINT_FAST32_MAX;
MACRO_UINT_FAST8 UINT_FAST64_MAX;
MACRO_UINT_FAST8 UINT_FAST8_MAX;
MACRO_UINT UINT_LEAST16_MAX;
MACRO_UINT UINT_LEAST32_MAX;
MACRO_UINT UINT_LEAST64_MAX;
MACRO_UINT UINT_LEAST8_MAX;
MACRO_UINT_MAX UINT_MAX;
MACRO_ULLONG ULLONG_MAX;
MACRO_ULONG ULONG_MAX;
MACRO_USHRT USHRT_MAX;
MACRO_WCHAR WCHAR_MAX;
MACRO_WCHAR WCHAR_MIN;
MACRO__EM _EM_INEXACT;
MACRO__EM _EM_INVALID;
MACRO__EM _EM_OVERFLOW;
MACRO__EM _EM_UNDERFLOW;
MACRO__EM _EM_ZERODIVIDE;
MACRO__FPE _FPE_INEXACT;
MACRO__FPE _FPE_INVALID;
MACRO__FPE _FPE_OVERFLOW;
MACRO__FPE _FPE_UNDERFLOW;
MACRO__FPE _FPE_ZERODIVIDE;
MACRO__IOBIN _IOBIN;
MACRO_NULL _IOFBF;
MACRO_NULL _IOLBF;
MACRO_NULL _IONBF;
Word32 L_abs(Word32 x);
Word32 L_add(Word32 x, Word32 y);
Word32 L_add_c(Word32 x, Word32 y);
Word32 L_deposit_h(Word16 x);
Word32 L_deposit_l(Word16 x);
Word32 L_mac(Word32 accumulator, Word16 x, Word16 y);
Word32 L_macNs(Word32 accumulator, Word16 x, Word16 y);
Word32 L_msu(Word32 accumulator, Word16 x, Word16 y);
Word32 L_msuNs(Word32 accumulator, Word16 x, Word16 y);
Word32 L_mult(Word16 x, Word16 y);
Word32 L_negate(Word32 x);
Word32 L_sat(Word32 x);
Word32 L_shl(Word32 x, Word16 shift);
Word32 L_shr(Word32 x, Word16 shift);
Word32 L_shr_r(Word32 x, Word16 shift);
Word32 L_sub(Word32 x, Word32 y);
Word32 L_sub_c(Word32 x, Word32 y);
MACRO__MCW _MCW_EM;
MACRO__MCW_RC _MCW_RC;
MACRO__RC _RC_CHOP;
MACRO__RC _RC_DOWN;
MACRO__RC RC_NEAR;
MACRO__RC _RC_UP;
MACRO__RWSTD_ANSI _RWSTD_ANSI_FILEIO;
MACRO__RWSTD _RWSTD_CATGETS;
MACRO_RWSTD_COMPILE_INSTANTIATE _RWSTD_COMPILE_INSTANTIATE;
MACRO__RWSTD_ANSI _RWSTD_DEFAULT_PRECISION;
MACRO__RWSTD _RWSTD_DGETTEXT;
MACRO_FLT_ROUNDS_IS_CONSTANT _RWSTD_FLT_ROUNDS_IS_CONSTANT;
MACRO__RWSTD _RWSTD_GETTEXT;
MACRO__RWSTD_ANSI _RWSTD_MB_CUR_MAX;
MACRO__RWSTD RWSTD_MESSAGE;
MACRO__RWSTD RWSTD_NOMSG;
MACRO_RWSTD_NOT_ALL_WSTR_CFUNCTIONS _RWSTD_NOT_ALL_WSTR_CFUNCTIONS;
MACRO_NO_BAD_CAST _RWSTD_NO_BAD_CAST;
MACRO_NO_CATOPEN_CATGETS _RWSTD_NO_CATOPEN_CATGETS;
MACRO_NO_COMPLEX_DEFAULT_TEMPLATES _RWSTD_NO_COMPLEX_DEFAULT_TEMPLATES;
MACRO_NO_EXCEPTIONS _RWSTD_NO_EXCEPTIONS;
MACRO__RWSTD_ANSI _RWSTD_NO_EXPLICIT_FUNC_INSTANTIATION;
MACRO__RWSTD_ANSI _RWSTD_NO_EXPLICIT_INSTANTIATION;
MACRO__RWSTD_ANSI _RWSTD_NO_EX_MSGS;
MACRO__RWSTD_NO _RWSTD_NO_GLOBAL_TZ;
MACRO__RWSTD_ANSI _RWSTD_NO_INSTANTIATE;
MACRO_NO_MBSTATE_T _RWSTD_NO_MBSTATE_T;
MACRO_NO_NAMESPACE _RWSTD_NO_NAMESPACE;
MACRO_RWSTD_NO_OVERLOAD_WCHAR _RWSTD_NO_OVERLOAD_WCHAR;
MACRO_NO_STATIC_CAST _RWSTD_NO_STATIC_CAST;
MACRO_NO_STATIC_MEM_DEF _RWSTD_NO_STATIC_MEM_DEF;
MACRO_NO_STREAM_LONG_DOUBLE _RWSTD_NO_STREAM_LONG_DOUBLE;
MACRO__RWSTD_ANSI _RWSTD_NO_STRFTIME_CAPC;
MACRO_NO_SWPRINTF _RWSTD_NO_SWPRINTF;
MACRO_NO_TEMPLATE_TEMPLATE _RWSTD_NO_TEMPLATE_TEMPLATE;
MACRO_RWSTD_NO_THREADS _RWSTD_NO_THREADS;
MACRO_NO_WCHAR_H _RWSTD_NO_WCHAR_H;
MACRO_RWSTD_NO_WCSXFRM _RWSTD_NO_WCSXFRM;
MACRO_NO_WCTYPE_H _RWSTD_NO_WCTYPE_H;
MACRO_NO_WIDE_CHAR _RWSTD_NO_WIDE_CHAR;
MACRO_NO_WINT_TYPE _RWSTD_NO_WINT_TYPE;
MACRO_RWSTD_NO_WSTR _RWSTD_NO_WSTR;
MACRO__RWSTD _RWSTD_VER;
MACRO__RW _RW_NO_SIGNED_OVERLOAD;
MACRO__RW _RW_STD_BITSET;
MACRO__RW _RW_STD_COMPLEX;
MACRO__RW _RW_STD_EXCEPT;
MACRO__RW _RW_STD_IOSTREAM;
MACRO__RW _RW_STD_LIMITS;
MACRO__RW _RW_STD_LOCALE;
MACRO__RW _RW_STD_STL;
MACRO__RW _RW_STD_STRING;
MACRO__RW _RW_STD_VALARRAY;
MACRO__SYS _SYS_OPEN;
MACRO___S __B;
MACRO___S __C;
MACRO___S __L;
MACRO___S __N;
MACRO___S __P;
MACRO___S __S;
MACRO___STD __STD_RWCOMPILER_H__;
MACRO___S __U;
MACRO___USER __USER_LIBSPACE_SIZE;
MACRO___S __X;
int __C_library_version_number(void);
const char *__C_library_version_string(void);
void *__Heap_Alloc(struct __Heap_Descriptor *, size_t);
void __Heap_Broken(struct __Heap_Descriptor *);
int __Heap_DescSize(int zero);
void __Heap_Free(struct __Heap_Descriptor *, void *);
int __Heap_Full(struct __Heap_Descriptor *, size_t);
void __Heap_Initialize(struct __Heap_Descriptor *h);
void __Heap_ProvideMemory(struct __Heap_Descriptor *, void *, size_t);
void *__Heap_Realloc(struct __Heap_Descriptor *, void *, size_t);
void *__Heap_Stats(struct __Heap_Descriptor *, int (*)(void *, const char *format, ...), void *);
int __Heap_Valid(struct __Heap_Descriptor *, int (*)(void *, const char *format, ...), void *, int);
void __SIG_DFL(int);
void __SIG_ERR(int);
void __SIG_IGN(int);
void *__alloca(size_t);
void __assert(const char *, const char *, int);
int __default_signal_handler(int, int);
unsigned int __fp_status(unsigned int, unsigned int);
const fenv_t __fpl_default_env;
size_t __fread_bytes_avail(void *, size_t, FILE *);
double __hardfp_acosh(double);
double __hardfp_asinh(double);
double __hardfp_atanh(double);
double __hardfp_cbrt(double);
double __hardfp_copysign(double, double);
double __hardfp_erf(double);
double __hardfp_erfc(double);
double __hardfp_expm1(double);
int __hardfp_finite(double);
double __hardfp_gamma(double);
double __hardfp_gamma_r(double, int *);
double __hardfp_hypot(double, double);
int __hardfp_ilogb(double);
int __hardfp_isnan(double);
double __hardfp_j0(double);
double __hardfp_j1(double);
double __hardfp_jn(int, double);
double __hardfp_lgamma(double);
double __hardfp_lgamma_r(double, int *);
double __hardfp_log1p(double);
double __hardfp_logb(double);
double __hardfp_nextafter(double, double);
double __hardfp_remainder(double, double);
double __hardfp_rint(double);
double __hardfp_scalb(double, double);
double __hardfp_scalbn(double, int);
double __hardfp_significand(double);
double __hardfp_y0(double);
double __hardfp_y1(double);
double __hardfp_yn(int, double);
void __heapstats(int (*)(void *, const char *, ...), void *);
int __heapvalid(int (*)(void *, const char *, ...), void *, int);
unsigned int __ieee_status(unsigned int, unsigned int);
int __raise(int, int);
unsigned __int8 **__rt_ctype_table(void);
volatile int *__rt_errno_addr(void);
void __rt_exit(int);
unsigned int *__rt_fp_status_addr(void);
unsigned int __rt_heap_extend(unsigned int, void **);
struct __argc_argv __rt_lib_init(unsigned int, unsigned int);
void __rt_lib_shutdown(void);
void __rt_raise(int, int);
__sdiv32by16 __rt_sdiv32by16(int, __int16);
__sdiv64by32 __rt_sdiv64by32(int, unsigned int, int);
__udiv32by16 __rt_udiv32by16(unsigned int, unsigned __int16);
FILE __stderr;
const char __stderr_name[];
FILE __stdin;
const char __stdin_name[];
FILE __stdout;
const char __stdout_name[];
void __use_accurate_range_reduction(void);
void __use_iso8859_collate(void);
void __use_iso8859_ctype(void);
void __use_iso8859_locale(void);
void __use_iso8859_monetary(void);
void __use_iso8859_numeric(void);
void __use_no_heap(void);
void __use_no_heap_region(void);
void __use_no_semihosting_swi(void);
void __use_realtime_division(void);
void __use_realtime_heap(void);
void __use_two_region_memory(void);
unsigned int __user_heap_extend(int, unsigned int, void **);
struct __heap_extent __user_heap_extent(unsigned int, unsigned int);
struct __initial_stackheap __user_initial_stackheap(unsigned int, unsigned int, unsigned int, unsigned int);
void *__user_libspace(void);
struct __stack_slop __user_stack_slop(unsigned int, unsigned int);
unsigned int _clearfp(void);
void _clock_init(void);
unsigned int _controlfp(unsigned int, unsigned int);
float _d2f(double);
double _dabs(double);
double _dadd(double, double);
double _ddiv(double, double);
int _deq(double, double);
int _dfix(double);
int _dfix_r(double);
unsigned int _dfixu(double);
unsigned int _dfixu_r(double);
double _dflt(int);
double _dfltu(unsigned int);
int _dgeq(double, double);
int _dgr(double, double);
int _dleq(double, double);
int _dls(double, double);
double _dmul(double, double);
double _dneg(double);
int _dneq(double, double);
double _drdiv(double, double);
double _drem(double, double);
double _drnd(double);
double _drsb(double, double);
double _dsqrt(double);
double _dsub(double, double);
double _f2d(float);
float _fabs(float);
float _fabsf(float);
float _fadd(float, float);
float _fdiv(float, float);
int _feq(float, float);
int _ffix(float);
int _ffix_r(float);
unsigned int _ffixu(float);
unsigned int _ffixu_r(float);
float _fflt(int);
float _ffltu(unsigned int);
int _fgeq(float, float);
int _fgr(float, float);
const void *_findlocale(const void *, const char *);
int _fisatty(FILE *);
int _fleq(float, float);
int _fls(float, float);
float _fmul(float, float);
float _fneg(float);
int _fneq(float, float);
void _fp_init(void);
int _fprintf(FILE *, const char *, ...);
MACRO___fpsr __fpsr_DZC;
MACRO___fpsr __fpsr_DZE;
MACRO___fpsr __fpsr_IOC;
MACRO___fpsr __fpsr_IOE;
MACRO___fpsr __fpsr_IXC;
MACRO___fpsr __fpsr_IXE;
MACRO___fpsr __fpsr_OFC;
MACRO___fpsr __fpsr_OFE;
MACRO___fpsr __fpsr_UFC;
MACRO___fpsr __fpsr_UFE;
float _frdiv(float, float);
float _frem(float, float);
float _frnd(float);
float _frsb(float, float);
int _fscanf(FILE *, const char *, ...);
float _fsqrt(float);
float _fsub(float, float);
const void *_get_lc_collate(const void *, const char *);
const void *_get_lc_ctype(const void *, const char *);
const void *_get_lc_monetary(const void *, const char *);
const void *_get_lc_numeric(const void *, const char *);
const void *_get_lc_time(const void *, const char *);
void _get_lconv(struct lconv *);
void _getenv_init(void);
void _init_alloc(unsigned int, unsigned int);
__int64 _ll_sfrom_d(double);
__int64 _ll_sfrom_d_r(double);
__int64 _ll_sfrom_f(float);
__int64 _ll_sfrom_f_r(float);
double _ll_sto_d(__int64);
float _ll_sto_f(__int64);
unsigned __int64 _ll_ufrom_d(double);
unsigned __int64 _ll_ufrom_d_r(double);
unsigned __int64 _ll_ufrom_f(float);
unsigned __int64 _ll_ufrom_f_r(float);
double _ll_uto_d(unsigned __int64);
float _ll_uto_f(unsigned __int64);
int _printf(const char *, ...);
int _scanf(const char *, ...);
int _snprintf(char *, size_t, const char *, ...);
int _sprintf(char *, const char *, ...);
double _sqrt(double x);
float _sqrtf(float x);
int _sscanf(const char *, const char *, ...);
unsigned int _statusfp(void);
int _sys_close(FILEHANDLE);
char *_sys_command_string(char *, int);
int _sys_ensure(FILEHANDLE);
void _sys_exit(int);
int _sys_flen(FILEHANDLE);
int _sys_istty(FILEHANDLE);
FILEHANDLE _sys_open(const char *, int);
int _sys_read(FILEHANDLE, unsigned __int8 *, unsigned int, int);
int _sys_seek(FILEHANDLE, int);
int _sys_tmpnam(char *, int, unsigned int);
int _sys_write(FILEHANDLE, const unsigned __int8 *, unsigned int, int);
void _ttywrch(int);
int _vfprintf(FILE *, const char *, __va_list);
int _vprintf(const char *, __va_list);
int _vsnprintf(char *, size_t, const char *, __va_list);
int _vsprintf(char *, const char *, __va_list);
void abort(void);
int abs(int);
Word16 abs_s(Word16 x);
double acos(double);
double acosh(double x);
Word16 add(Word16 x, Word16 y);
armdsp_flagdata_union armdsp_flagdata;
char *asctime(const struct tm *);
double asin(double);
double asinh(double x);
double atan(double);
double atan2(double, double);
double atanh(double x);
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
int atol(const char *);
__int64 atoll(const char *);
void *bsearch(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
double cbrt(double x);
double ceil(double);
void clearerr(FILE *);
clock_t clock(void);
double copysign(double x, double y);
double cos(double);
double cosh(double);
char *ctime(const time_t *);
double difftime(time_t, time_t);
div_t div(int, int);
Word16 div_s(Word16 x, Word16 y);
double erf(double x);
double erfc(double x);
void exit(int);
double exp(double);
double expm1(double x);
Word16 extract_h(Word32 x);
Word16 extract_l(Word32 x);
double fabs(double);
int fclose(FILE *);
void feclearexcept(int);
void fegetenv(fenv_t *);
void fegetexceptflag(fexcept_t *, int);
int fegetround(void);
int feholdexcept(fenv_t *);
int feof(FILE *);
void feraiseexcept(int);
int ferror(FILE *);
void fesetenv(const fenv_t *);
void fesetexceptflag(const fexcept_t *, int);
int fesetround(int);
int fetestexcept(int);
void feupdateenv(const fenv_t *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
double finite(double x);
double floor(double);
double fmod(double, double);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
void free(void *);
FILE *freopen(const char *, const char *, FILE *);
double frexp(double, int *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, int, int);
int fsetpos(FILE *, const fpos_t *);
int ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
double gamma(double x);
double gamma_r(double x, int *p);
int getc(FILE *);
int getchar(void);
char *getenv(const char *);
char *gets(char *);
struct tm *gmtime(const time_t *);
double hypot(double x, double y);
int ilogb(double x);
int isalnum(int);
int isalpha(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
double isnan(double x);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
double j0(double x);
double j1(double x);
double jn(int n, double x);
int labs(int);
double ldexp(double, int);
ldiv_t ldiv(int, int);
double lgamma(double x);
double lgamma_r(double x, int *p);
__int64 llabs(__int64);
lldiv_t lldiv(__int64, __int64);
struct lconv *localeconv(void);
struct tm *localtime(const time_t *);
double log(double);
double log10(double);
double log1p(double x);
double logb(double x);
void longjmp(jmp_buf, int);
Word16 mac_r(Word32 accumulator, Word16 x, Word16 y);
void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t *, const char *, size_t);
int mbtowc(wchar_t *, const char *, size_t);
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
time_t mktime(struct tm *);
double modf(double, double *);
Word16 msu_r(Word32 accumulator, Word16 x, Word16 y);
Word16 mult(Word16 x, Word16 y);
Word16 mult_r(Word16 x, Word16 y);
Word16 negate(Word16 x);
double nextafter(double x, double y);
Word16 norm_l(Word32 x);
Word16 norm_s(Word16 x);
void perror(const char *);
double pow(double, double);
int printf(const char *, ...);
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
Word32 qadd(Word32 x, Word32 y);
Word32 qdadd(Word32 x, Word32 y);
Word32 qdsub(Word32 x, Word32 y);
void qsort(void *, size_t, size_t, int (*)(const void *, const void *));
Word32 qsub(Word32 x, Word32 y);
int raise(int);
int rand(void);
void *realloc(void *, size_t);
double remainder(double x, double y);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
double rint(double x);
Word16 round(Word32 x);
Word16 saturate(Word32 x);
double scalb(double x, double n);
double scalbn(double x, int n);
int scanf(const char *, ...);
void setbuf(FILE *, char *);
int setjmp(jmp_buf);
char *setlocale(int, const char *);
int setvbuf(FILE *, char *, int, size_t);
Word16 shl(Word16 x, Word16 shift);
Word16 shr(Word16 x, Word16 shift);
Word16 shr_r(Word16 x, Word16 shift);
void (*signal(int, void (*)(int)))(int);
double significand(double x);
double sin(double);
double sinh(double);
Word32 smlabb(Word32 x, Word32 y, Word32 a);
Word32 smlabt(Word32 x, Word32 y, Word32 a);
void smlalbb(Word32 *lo, Word32 *hi, Word32 x, Word32 y);
void smlalbt(Word32 *lo, Word32 *hi, Word32 x, Word32 y);
void smlaltb(Word32 *lo, Word32 *hi, Word32 x, Word32 y);
void smlaltt(Word32 *lo, Word32 *hi, Word32 x, Word32 y);
Word32 smlatb(Word32 x, Word32 y, Word32 a);
Word32 smlatt(Word32 x, Word32 y, Word32 a);
Word32 smlawb(Word32 x, Word32 y, Word32 a);
Word32 smlawt(Word32 x, Word32 y, Word32 a);
Word32 smulbb(Word32 x, Word32 y);
Word32 smulbt(Word32 x, Word32 y);
Word32 smultb(Word32 x, Word32 y);
Word32 smultt(Word32 x, Word32 y);
Word32 smulwb(Word32 x, Word32 y);
Word32 smulwt(Word32 x, Word32 y);
int snprintf(char *, size_t, const char *, ...);
int sprintf(char *, const char *, ...);
double sqrt(double);
void srand(unsigned int);
int sscanf(const char *, const char *, ...);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int);
size_t strftime(char *, size_t, const char *, const struct tm *);
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
double strtod(const char *, char **);
intmax_t strtoimax(const char *, char **, int);
char *strtok(char *, const char *);
int strtol(const char *, char **, int);
__int64 strtoll(const char *, char **, int);
unsigned int strtoul(const char *, char **, int);
unsigned __int64 strtoull(const char *, char **, int);
uintmax_t strtoumax(const char *, char **, int);
size_t strxfrm(char *, const char *, size_t);
Word16 sub(Word16 x, Word16 y);
int system(const char *);
double tan(double);
double tanh(double);
time_t time(time_t *);
FILE *tmpfile(void);
char *tmpnam(char *);
int tolower(int);
int toupper(int);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vprintf(const char *, __va_list);
int vsnprintf(char *, size_t, const char *, __va_list);
int vsprintf(char *, const char *, __va_list);
size_t wcstombs(char *, const wchar_t *, size_t);
int wctomb(char *, wchar_t);
double y0(double x);
double y1(double x);
double yn(int n, double x);