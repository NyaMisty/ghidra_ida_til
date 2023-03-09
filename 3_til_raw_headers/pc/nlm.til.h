enum MACRO_TERMINATE {TERMINATE_BY_EXTERNAL_THREAD = 0,TERMINATE_BY_UNLOAD = 5,};
struct NLMInfo {union NLMInfo::$BE50D700E82C118F824F656CD86EE57D sig;unsigned int flavor;unsigned int version;size_t sizeof_long_double;size_t sizeof_wchar_t;};
union NLMInfo::$BE50D700E82C118F824F656CD86EE57D {unsigned int signature;int ID;};
typedef unsigned int size_t;

MACRO_TERMINATE TERMINATE_BY_EXTERNAL_THREAD;
MACRO_TERMINATE TERMINATE_BY_UNLOAD;
int __cdecl _SetupArgv(int (__cdecl *main)(int arg, char **argv));
unsigned int __cdecl _StartNLM(void *NH, void *iESID, unsigned __int8 *cL, unsigned __int8 *lDP, unsigned int bsslen, unsigned int NFH, unsigned int (__cdecl *rRP)(), unsigned int cDO, unsigned int cDS, NLMInfo *NI, int (__cdecl *uSF)());
unsigned __int32 __cdecl _TerminateNLM(int NLMID, int threadID, int status);
int __cdecl main(int argc, char **argv);
