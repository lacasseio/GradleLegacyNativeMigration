#include <windows.h>
#include <stdio.h>
#include <direct.h>
#include <io.h>
#include <time.h>

#include "lib_One.h"
#include "CamelCase.h"

#ifdef __cplusplus
extern "C" {
#endif


  // From https://docs.microsoft.com/en-us/cpp/code-quality/demo-sample?view=vs-2019
  // this is an issue that only the analyzer will find (build or intellisense).
  HRESULT retHandle()
  {
    return S_OK;
  }


  char* buggy_func_for_analyzer(int i) {
    if (retHandle()) {
      printf("Hello.\n");
    }
    return 0;
  }

  int lib_one_func_one(int i, char *descr) {
    int j;
    for(j=0; j < i; j++) {
      printf("%s: idx=%d, descr=%s.\n", __FUNCTION__, j, descr);
    }
    return 0;
  }

  int lib_one_camel_case(int i, char *descr) {
    int j;
    for(j=0; j < i; j++) {
      printf("%s: idx=%d, descr=%s.\n", __FUNCTION__, j, descr);
    }
    return 0;
  }

 #ifdef __cplusplus
}
#endif

