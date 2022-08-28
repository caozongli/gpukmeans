#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
#ifdef __cplusplus
extern "C" {
#endif

#pragma data_seg(__CUDAFATBINDATASECTION)
static const __declspec(allocate(__CUDAFATBINDATASECTION)) unsigned long long fatbinData[]= {
0x00100001ba55ed50ull,0x0000000000000338ull,0x0000004001010002ull,0x0000000000000268ull,
0x0000000000000000ull,0x0000001e00010007ull,0x0000000000000000ull,0x0000000000000041ull,
0x0000000000000000ull,0x0000000000000000ull,0x33010102464c457full,0x0000000000000007ull,
0x0000006500be0002ull,0x0000000000000000ull,0x00000000000001c0ull,0x00000000000000c0ull,
0x00380040001e051eull,0x0001000400400003ull,0x7472747368732e00ull,0x747274732e006261ull,
0x746d79732e006261ull,0x746d79732e006261ull,0x78646e68735f6261ull,0x666e692e766e2e00ull,
0x747368732e00006full,0x74732e0062617472ull,0x79732e0062617472ull,0x79732e006261746dull,
0x6e68735f6261746dull,0x692e766e2e007864ull,0x00000000006f666eull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000300000001ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000040ull,0x0000000000000032ull,0x0000000000000000ull,
0x0000000000000001ull,0x0000000000000000ull,0x000000030000000bull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000072ull,0x0000000000000032ull,0x0000000000000000ull,
0x0000000000000001ull,0x0000000000000000ull,0x0000000200000013ull,0x0000000000000000ull,
0x0000000000000000ull,0x00000000000000a8ull,0x0000000000000018ull,0x0000000000000002ull,
0x0000000000000008ull,0x0000000000000018ull,0x0000000500000006ull,0x00000000000001c0ull,
0x0000000000000000ull,0x0000000000000000ull,0x00000000000000a8ull,0x00000000000000a8ull,
0x0000000000000008ull,0x0000000500000001ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000008ull,
0x0000000600000001ull,0x0000000000000000ull,0x0000000000000000ull,0x0000000000000000ull,
0x0000000000000000ull,0x0000000000000000ull,0x0000000000000008ull,0x0000005001010001ull,
0x0000000000000040ull,0x000000400000003cull,0x0000001e00060004ull,0x0000000000000000ull,
0x0000000000002041ull,0x0000000000000000ull,0x0000000000000045ull,0x0000000000000048ull,
0x0000000000000000ull,0x2e26f000020a0d2aull,0x206e6f6973726576ull,0x61742e0a0d342e36ull,
0x5f6d732074656772ull,0x6464612e0a0d3033ull,0x7a69735f73736572ull,0x0a0d0a0d34362065ull,
0x000000000a0d0a0dull
};
#pragma data_seg()

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
#pragma data_seg(".nvFatBinSegment")
__declspec(allocate(__CUDAFATBINSECTION)) __declspec(align(8)) static const __fatBinC_Wrapper_t __fatDeviceText= 
	{ 0x466243b1, 1, fatbinData, 0 };
#pragma data_seg()
#ifdef __cplusplus
}
#endif
