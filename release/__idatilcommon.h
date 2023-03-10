/// Part1: Add Ghidra Missing type: __XXX
#ifdef GHIDRA
    #define __int64 long long
    #define __int32 int
    #define __int16 short
    #define __int8 char

    typedef struct {
        __int64 u1;
        __int64 u2;
    } __int128;
    typedef struct {
        unsigned __int64 u1;
        unsigned __int64 u2;
    } __uint128;
#endif // GHIDRA

/// Part2: Define <stdint.h> types
//#include <stdint.h>
typedef __int8 int8_t;
typedef __int16 int16_t;
typedef __int32 int32_t;
typedef __int64 int64_t;

typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;

/// Part2: Define IDA int types
#define _BYTE uint8_t
#define _WORD uint16_t
#define _QWORD uint64_t
#define _DWORD uint32_t


//// Part3: Type Helpers (see idatil2c.py `HELPER_TYPES`)
#ifndef HAVETYPE_bool
#define bool char
#endif
// for gnulnx
#ifndef HAVETYPE___u32
typedef uint32_t __u32;
#endif
#ifndef HAVETYPE___u16
typedef uint16_t __u16;
#endif
#ifndef HAVETYPE___u64
typedef uint64_t __u64;
#endif
#ifndef HAVETYPE___kernel_uid32_t
typedef unsigned int __kernel_uid32_t;
#endif
#ifndef HAVETYPE___kernel_mqd_t
typedef int __kernel_mqd_t;
#endif
#ifndef HAVETYPE_DOT11_DIRECTION
typedef int DOT11_DIRECTION; // originally enum
#endif
#ifndef HAVETYPE__DEVICE_RELATION_TYPE
enum _DEVICE_RELATION_TYPE {_DEVICE_RELATION_TYPE_UNDEFINED,};
#endif

//// Part4: Remove various IDA&M$ modifiers
#define __fastcall
#define __unaligned
#define __stdcall
#define __cppobj
#define __declspec(x)
#define __hidden
#define __cdecl
#define __noreturn
#define __pascal
#define __near
#define __high

//// Part4: Remove various modifiers
#define const
#define this _this
#define near

//// Part5: TYPEDEF_BLACKLIST stub types
typedef char _Mbstatet;

typedef void **va_list;

//typedef struct _stat32 _stat32;
//typedef struct _stat32i64 _stat32i64;
//typedef struct _stat64 _stat64;
//typedef struct _stat64i32 _stat64i32;

//struct qvector {
//  void *array;
//  uint64_t n;
//  uint64_t alloc;
//};
//
//struct qstring
//{
//  char *array;
//  unsigned __int64 n;
//  unsigned __int64 alloc;
//};
//
//struct bytevec_t
//{
//  unsigned char *array;
//  unsigned __int64 n;
//  unsigned __int64 alloc;
//};
//
//typedef struct qvector qvector;
//typedef struct qstring qstring;
//typedef struct bytevec_t bytevec_t;
