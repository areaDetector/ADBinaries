#ifdef _M_X64
  #ifdef H5_BUILT_AS_DYNAMIC_LIB
    #include "H5pubconf_64_shared.h"
  #else
    #include "H5pubconf_64_static.h"
  #endif
#else
  #include "H5pubconf_32.h"
#endif

