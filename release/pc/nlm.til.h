#define GHIDRA
#ifndef INCLUDE_GUARD_nlm_til
#define INCLUDE_GUARD_nlm_til
#include "../__idatilcommon.h"



union NLMInfo___BE50D700E82C118F824F656CD86EE57D;
struct NLMInfo;

union NLMInfo___BE50D700E82C118F824F656CD86EE57D {unsigned int signature;int ID;};
enum MACRO_TERMINATE {TERMINATE_BY_EXTERNAL_THREAD = 0,TERMINATE_BY_UNLOAD = 5,};
typedef unsigned int size_t;
struct NLMInfo {union NLMInfo___BE50D700E82C118F824F656CD86EE57D sig;unsigned int flavor;unsigned int version;size_t sizeof_long_double;size_t sizeof_wchar_t;};



#endif
