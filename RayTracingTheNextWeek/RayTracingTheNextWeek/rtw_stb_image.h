//
//  rtw_stb_image.h
//  RayTracingTheNextWeek
//
//  Created by liuxing on 2023/6/26.
//

#ifndef rtw_stb_image_h
#define rtw_stb_image_h

// Disable pedantic warnings for this external library.
#ifdef _MSC_VER
    // Microsoft Visual C++ Compiler
    #pragma warning (push, 0)
#endif

#define STB_IMAGE_IMPLEMENTATION
#include "external/stb_image.h"

// Restore warning levels.
#ifdef _MSC_VER
    // Microsoft Visual C++ Compiler
    #pragma warning (pop)
#endif

#endif /* rtw_stb_image_h */
