// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdunedIappdIusersdIjiangldILiteFMWKdIbuilddIBasedIBaseDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "usbreadout.h"
#include "CRT.h"

// Header files passed via #pragma extra_include

namespace {
  void TriggerDictionaryInitialization_libLiteFMWK_Base_Impl() {
    static const char* headers[] = {
"usbreadout.h",
"CRT.h",
0
    };
    static const char* includePaths[] = {
"/cvmfs/larsoft.opensciencegrid.org/products/root/v6_22_06a/Linux64bit+3.10-2.17-e19-p383b-prof/include/",
"/dune/app/users/jiangl/LiteFMWK/Base/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libLiteFMWK_Base dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libLiteFMWK_Base dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "usbreadout.h"
#include "CRT.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libLiteFMWK_Base",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libLiteFMWK_Base_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libLiteFMWK_Base_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libLiteFMWK_Base() {
  TriggerDictionaryInitialization_libLiteFMWK_Base_Impl();
}
