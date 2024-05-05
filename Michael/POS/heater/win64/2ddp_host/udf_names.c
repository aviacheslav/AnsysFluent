/* This file generated automatically. */ 
/* Do not modify. */ 
#include "udf.h" 
#include "prop.h" 
#include "dpm.h" 
extern DEFINE_SOURCE(heat_genI,cell,thread,dS,eqn);
extern DEFINE_SOURCE(heat_genII,cell,thread,dS,eqn);
extern DEFINE_SOURCE(heat_genN,cell,thread,dS,eqn);
__declspec(dllexport) UDF_Data udf_data[] = { 
{"heat_genI", (void (*)(void))heat_genI, UDF_TYPE_SOURCE},
{"heat_genII", (void (*)(void))heat_genII, UDF_TYPE_SOURCE},
{"heat_genN", (void (*)(void))heat_genN, UDF_TYPE_SOURCE},
}; 
__declspec(dllexport) int n_udf_data = sizeof(udf_data)/sizeof(UDF_Data); 
#include "version.h" 
__declspec(dllexport) void UDF_Inquire_Release(int *major, int *minor, int *revision) 
{ 
*major = RampantReleaseMajor; 
*minor = RampantReleaseMinor; 
*revision = RampantReleaseRevision; 
} 
