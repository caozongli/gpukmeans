#pragma section("__nv_managed_data__")
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
#line 1 "CMakeCUDACompilerId.cu"
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

#line 1
#line 67 "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v10.1/bin/../include\\cuda_runtime.h"
#pragma warning(push)
#pragma warning(disable: 4820)
#line 708 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 2361 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
extern "C" {
#line 2967 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
}
#line 22 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
extern "C" {
#line 354 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
}
#line 15 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 18
extern "C" {
#line 28 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
typedef unsigned __int64 uintptr_t; 
#line 39 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
typedef char *va_list; 
#line 112 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
void __cdecl __va_start(va_list *, ...); 
#line 124 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
}
#line 128 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
extern "C++" {
#line 130
template< class _Ty> 
#line 131
struct __vcrt_va_list_is_reference { 
#line 133
enum: bool { __the_value}; 
#line 134
}; 
#line 136
template< class _Ty> 
#line 137
struct __vcrt_va_list_is_reference< _Ty &>  { 
#line 139
enum: bool { __the_value = '\001'}; 
#line 140
}; 
#line 142
template< class _Ty> 
#line 143
struct __vcrt_va_list_is_reference< _Ty &&>  { 
#line 145
enum: bool { __the_value = '\001'}; 
#line 146
}; 
#line 148
template< class _Ty> 
#line 149
struct __vcrt_assert_va_start_is_not_reference { 
#line 151
static_assert((!__vcrt_va_list_is_reference< _Ty> ::__the_value), "va_start argument must not have reference type and must not be parenthesized");
#line 153
}; 
#line 154
}
#line 164 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( pop )
#line 83 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 180 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
typedef unsigned __int64 size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#line 181
typedef __int64 ptrdiff_t; 
#line 182
typedef __int64 intptr_t; 
#line 190 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
typedef bool __vcrt_bool; 
#line 233 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
extern "C++" {
#line 235
template< class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (& _Array)[_SizeOfArray]))[_SizeOfArray]; 
#line 239
}
#line 277 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
void __cdecl __security_init_cookie(); 
#line 283
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
#line 284
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 
#line 288 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
extern uintptr_t __security_cookie; 
#line 296 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
}__pragma( pack ( pop )) 
#line 12 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 136 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
extern "C++" {
#line 138
template< bool _Enable, class _Ty> struct _CrtEnableIf; 
#line 141
template< class _Ty> 
#line 142
struct _CrtEnableIf< true, _Ty>  { 
#line 144
typedef _Ty _Type; 
#line 145
}; 
#line 146
}
#line 150 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef bool __crt_bool; 
#line 278 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
void __cdecl _invalid_parameter_noinfo(); 
#line 279
__declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); 
#line 281
__declspec(noreturn) void __cdecl 
#line 282
_invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 510 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef int errno_t; 
#line 511
typedef unsigned short wint_t; 
#line 512
typedef unsigned short wctype_t; 
#line 513
typedef long __time32_t; 
#line 514
typedef __int64 __time64_t; 
#line 521
typedef 
#line 516
struct __crt_locale_data_public { 
#line 518
const unsigned short *_locale_pctype; 
#line 519
int _locale_mb_cur_max; 
#line 520
unsigned _locale_lc_codepage; 
#line 521
} __crt_locale_data_public; 
#line 527
typedef 
#line 523
struct __crt_locale_pointers { 
#line 525
struct __crt_locale_data *locinfo; 
#line 526
struct __crt_multibyte_data *mbcinfo; 
#line 527
} __crt_locale_pointers; 
#line 529
typedef __crt_locale_pointers *_locale_t; 
#line 535
typedef 
#line 531
struct _Mbstatet { 
#line 533
unsigned long _Wchar; 
#line 534
unsigned short _Byte, _State; 
#line 535
} _Mbstatet; 
#line 537
typedef _Mbstatet mbstate_t; 
#line 551 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef __time64_t time_t; 
#line 561 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef size_t rsize_t; 
#line 2010 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
}__pragma( pack ( pop )) 
#line 66 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\device_types.h"
#if 0
#line 66
enum cudaRoundMode { 
#line 68
cudaRoundNearest, 
#line 69
cudaRoundZero, 
#line 70
cudaRoundPosInf, 
#line 71
cudaRoundMinInf
#line 72
}; 
#endif
#line 98 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 98
struct char1 { 
#line 100
signed char x; 
#line 101
}; 
#endif
#line 103 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 103
struct uchar1 { 
#line 105
unsigned char x; 
#line 106
}; 
#endif
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 109
struct __declspec(align(2)) char2 { 
#line 111
signed char x, y; 
#line 112
}; 
#endif
#line 114 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 114
struct __declspec(align(2)) uchar2 { 
#line 116
unsigned char x, y; 
#line 117
}; 
#endif
#line 119 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 119
struct char3 { 
#line 121
signed char x, y, z; 
#line 122
}; 
#endif
#line 124 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 124
struct uchar3 { 
#line 126
unsigned char x, y, z; 
#line 127
}; 
#endif
#line 129 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 129
struct __declspec(align(4)) char4 { 
#line 131
signed char x, y, z, w; 
#line 132
}; 
#endif
#line 134 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 134
struct __declspec(align(4)) uchar4 { 
#line 136
unsigned char x, y, z, w; 
#line 137
}; 
#endif
#line 139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 139
struct short1 { 
#line 141
short x; 
#line 142
}; 
#endif
#line 144 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 144
struct ushort1 { 
#line 146
unsigned short x; 
#line 147
}; 
#endif
#line 149 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 149
struct __declspec(align(4)) short2 { 
#line 151
short x, y; 
#line 152
}; 
#endif
#line 154 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 154
struct __declspec(align(4)) ushort2 { 
#line 156
unsigned short x, y; 
#line 157
}; 
#endif
#line 159 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 159
struct short3 { 
#line 161
short x, y, z; 
#line 162
}; 
#endif
#line 164 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 164
struct ushort3 { 
#line 166
unsigned short x, y, z; 
#line 167
}; 
#endif
#line 169 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 169
struct __declspec(align(8)) short4 { short x; short y; short z; short w; }; 
#endif
#line 170 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 170
struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
#line 172 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 172
struct int1 { 
#line 174
int x; 
#line 175
}; 
#endif
#line 177 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 177
struct uint1 { 
#line 179
unsigned x; 
#line 180
}; 
#endif
#line 182 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 182
struct __declspec(align(8)) int2 { int x; int y; }; 
#endif
#line 183 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 183
struct __declspec(align(8)) uint2 { unsigned x; unsigned y; }; 
#endif
#line 185 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 185
struct int3 { 
#line 187
int x, y, z; 
#line 188
}; 
#endif
#line 190 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 190
struct uint3 { 
#line 192
unsigned x, y, z; 
#line 193
}; 
#endif
#line 195 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 195
struct __declspec(align(16)) int4 { 
#line 197
int x, y, z, w; 
#line 198
}; 
#endif
#line 200 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 200
struct __declspec(align(16)) uint4 { 
#line 202
unsigned x, y, z, w; 
#line 203
}; 
#endif
#line 205 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 205
struct long1 { 
#line 207
long x; 
#line 208
}; 
#endif
#line 210 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 210
struct ulong1 { 
#line 212
unsigned long x; 
#line 213
}; 
#endif
#line 216 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 216
struct __declspec(align(8)) long2 { long x; long y; }; 
#endif
#line 217 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 217
struct __declspec(align(8)) ulong2 { unsigned long x; unsigned long y; }; 
#endif
#line 232 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 232
struct long3 { 
#line 234
long x, y, z; 
#line 235
}; 
#endif
#line 237 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 237
struct ulong3 { 
#line 239
unsigned long x, y, z; 
#line 240
}; 
#endif
#line 242 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 242
struct __declspec(align(16)) long4 { 
#line 244
long x, y, z, w; 
#line 245
}; 
#endif
#line 247 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 247
struct __declspec(align(16)) ulong4 { 
#line 249
unsigned long x, y, z, w; 
#line 250
}; 
#endif
#line 252 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 252
struct float1 { 
#line 254
float x; 
#line 255
}; 
#endif
#line 274 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 274
struct __declspec(align(8)) float2 { float x; float y; }; 
#endif
#line 279 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 279
struct float3 { 
#line 281
float x, y, z; 
#line 282
}; 
#endif
#line 284 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 284
struct __declspec(align(16)) float4 { 
#line 286
float x, y, z, w; 
#line 287
}; 
#endif
#line 289 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 289
struct longlong1 { 
#line 291
__int64 x; 
#line 292
}; 
#endif
#line 294 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 294
struct ulonglong1 { 
#line 296
unsigned __int64 x; 
#line 297
}; 
#endif
#line 299 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 299
struct __declspec(align(16)) longlong2 { 
#line 301
__int64 x, y; 
#line 302
}; 
#endif
#line 304 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 304
struct __declspec(align(16)) ulonglong2 { 
#line 306
unsigned __int64 x, y; 
#line 307
}; 
#endif
#line 309 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 309
struct longlong3 { 
#line 311
__int64 x, y, z; 
#line 312
}; 
#endif
#line 314 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 314
struct ulonglong3 { 
#line 316
unsigned __int64 x, y, z; 
#line 317
}; 
#endif
#line 319 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 319
struct __declspec(align(16)) longlong4 { 
#line 321
__int64 x, y, z, w; 
#line 322
}; 
#endif
#line 324 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 324
struct __declspec(align(16)) ulonglong4 { 
#line 326
unsigned __int64 x, y, z, w; 
#line 327
}; 
#endif
#line 329 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 329
struct double1 { 
#line 331
double x; 
#line 332
}; 
#endif
#line 334 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 334
struct __declspec(align(16)) double2 { 
#line 336
double x, y; 
#line 337
}; 
#endif
#line 339 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 339
struct double3 { 
#line 341
double x, y, z; 
#line 342
}; 
#endif
#line 344 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 344
struct __declspec(align(16)) double4 { 
#line 346
double x, y, z, w; 
#line 347
}; 
#endif
#line 361 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef char1 
#line 361
char1; 
#endif
#line 362 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uchar1 
#line 362
uchar1; 
#endif
#line 363 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef char2 
#line 363
char2; 
#endif
#line 364 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uchar2 
#line 364
uchar2; 
#endif
#line 365 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef char3 
#line 365
char3; 
#endif
#line 366 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uchar3 
#line 366
uchar3; 
#endif
#line 367 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef char4 
#line 367
char4; 
#endif
#line 368 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uchar4 
#line 368
uchar4; 
#endif
#line 369 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef short1 
#line 369
short1; 
#endif
#line 370 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ushort1 
#line 370
ushort1; 
#endif
#line 371 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef short2 
#line 371
short2; 
#endif
#line 372 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ushort2 
#line 372
ushort2; 
#endif
#line 373 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef short3 
#line 373
short3; 
#endif
#line 374 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ushort3 
#line 374
ushort3; 
#endif
#line 375 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef short4 
#line 375
short4; 
#endif
#line 376 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ushort4 
#line 376
ushort4; 
#endif
#line 377 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef int1 
#line 377
int1; 
#endif
#line 378 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uint1 
#line 378
uint1; 
#endif
#line 379 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef int2 
#line 379
int2; 
#endif
#line 380 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uint2 
#line 380
uint2; 
#endif
#line 381 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef int3 
#line 381
int3; 
#endif
#line 382 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uint3 
#line 382
uint3; 
#endif
#line 383 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef int4 
#line 383
int4; 
#endif
#line 384 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef uint4 
#line 384
uint4; 
#endif
#line 385 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef long1 
#line 385
long1; 
#endif
#line 386 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulong1 
#line 386
ulong1; 
#endif
#line 387 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef long2 
#line 387
long2; 
#endif
#line 388 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulong2 
#line 388
ulong2; 
#endif
#line 389 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef long3 
#line 389
long3; 
#endif
#line 390 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulong3 
#line 390
ulong3; 
#endif
#line 391 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef long4 
#line 391
long4; 
#endif
#line 392 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulong4 
#line 392
ulong4; 
#endif
#line 393 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef float1 
#line 393
float1; 
#endif
#line 394 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef float2 
#line 394
float2; 
#endif
#line 395 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef float3 
#line 395
float3; 
#endif
#line 396 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef float4 
#line 396
float4; 
#endif
#line 397 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef longlong1 
#line 397
longlong1; 
#endif
#line 398 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulonglong1 
#line 398
ulonglong1; 
#endif
#line 399 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef longlong2 
#line 399
longlong2; 
#endif
#line 400 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulonglong2 
#line 400
ulonglong2; 
#endif
#line 401 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef longlong3 
#line 401
longlong3; 
#endif
#line 402 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulonglong3 
#line 402
ulonglong3; 
#endif
#line 403 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef longlong4 
#line 403
longlong4; 
#endif
#line 404 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef ulonglong4 
#line 404
ulonglong4; 
#endif
#line 405 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef double1 
#line 405
double1; 
#endif
#line 406 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef double2 
#line 406
double2; 
#endif
#line 407 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef double3 
#line 407
double3; 
#endif
#line 408 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef double4 
#line 408
double4; 
#endif
#line 416 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
#line 416
struct dim3 { 
#line 418
unsigned x, y, z; 
#line 428 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
}; 
#endif
#line 430 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_types.h"
#if 0
typedef dim3 
#line 430
dim3; 
#endif
#line 13 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 88 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
}__pragma( pack ( pop )) 
#line 14 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
namespace std { 
#line 21
typedef decltype((nullptr)) nullptr_t; 
#line 22
}
#line 24
using std::nullptr_t;
#line 31 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
int *__cdecl _errno(); 
#line 34
errno_t __cdecl _set_errno(int _Value); 
#line 35
errno_t __cdecl _get_errno(int * _Value); 
#line 51 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
extern unsigned long __cdecl __threadid(); 
#line 53
extern uintptr_t __cdecl __threadhandle(); 
#line 57
}__pragma( pack ( pop )) 
#line 189 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 189
enum cudaError { 
#line 196
cudaSuccess, 
#line 202
cudaErrorInvalidValue, 
#line 208
cudaErrorMemoryAllocation, 
#line 214
cudaErrorInitializationError, 
#line 221
cudaErrorCudartUnloading, 
#line 228
cudaErrorProfilerDisabled, 
#line 236
cudaErrorProfilerNotInitialized, 
#line 243
cudaErrorProfilerAlreadyStarted, 
#line 250
cudaErrorProfilerAlreadyStopped, 
#line 259
cudaErrorInvalidConfiguration, 
#line 265
cudaErrorInvalidPitchValue = 12, 
#line 271
cudaErrorInvalidSymbol, 
#line 279
cudaErrorInvalidHostPointer = 16, 
#line 287
cudaErrorInvalidDevicePointer, 
#line 293
cudaErrorInvalidTexture, 
#line 299
cudaErrorInvalidTextureBinding, 
#line 306
cudaErrorInvalidChannelDescriptor, 
#line 312
cudaErrorInvalidMemcpyDirection, 
#line 322
cudaErrorAddressOfConstant, 
#line 331
cudaErrorTextureFetchFailed, 
#line 340
cudaErrorTextureNotBound, 
#line 349
cudaErrorSynchronizationError, 
#line 355
cudaErrorInvalidFilterSetting, 
#line 361
cudaErrorInvalidNormSetting, 
#line 369
cudaErrorMixedDeviceExecution, 
#line 377
cudaErrorNotYetImplemented = 31, 
#line 386
cudaErrorMemoryValueTooLarge, 
#line 393
cudaErrorInsufficientDriver = 35, 
#line 399
cudaErrorInvalidSurface = 37, 
#line 405
cudaErrorDuplicateVariableName = 43, 
#line 411
cudaErrorDuplicateTextureName, 
#line 417
cudaErrorDuplicateSurfaceName, 
#line 427
cudaErrorDevicesUnavailable, 
#line 440
cudaErrorIncompatibleDriverContext = 49, 
#line 446
cudaErrorMissingConfiguration = 52, 
#line 455
cudaErrorPriorLaunchFailure, 
#line 462
cudaErrorLaunchMaxDepthExceeded = 65, 
#line 470
cudaErrorLaunchFileScopedTex, 
#line 478
cudaErrorLaunchFileScopedSurf, 
#line 493
cudaErrorSyncDepthExceeded, 
#line 505
cudaErrorLaunchPendingCountExceeded, 
#line 511
cudaErrorInvalidDeviceFunction = 98, 
#line 517
cudaErrorNoDevice = 100, 
#line 523
cudaErrorInvalidDevice, 
#line 528
cudaErrorStartupFailure = 127, 
#line 533
cudaErrorInvalidKernelImage = 200, 
#line 543
cudaErrorDeviceUninitilialized, 
#line 548
cudaErrorMapBufferObjectFailed = 205, 
#line 553
cudaErrorUnmapBufferObjectFailed, 
#line 559
cudaErrorArrayIsMapped, 
#line 564
cudaErrorAlreadyMapped, 
#line 572
cudaErrorNoKernelImageForDevice, 
#line 577
cudaErrorAlreadyAcquired, 
#line 582
cudaErrorNotMapped, 
#line 588
cudaErrorNotMappedAsArray, 
#line 594
cudaErrorNotMappedAsPointer, 
#line 600
cudaErrorECCUncorrectable, 
#line 606
cudaErrorUnsupportedLimit, 
#line 612
cudaErrorDeviceAlreadyInUse, 
#line 618
cudaErrorPeerAccessUnsupported, 
#line 624
cudaErrorInvalidPtx, 
#line 629
cudaErrorInvalidGraphicsContext, 
#line 635
cudaErrorNvlinkUncorrectable, 
#line 642
cudaErrorJitCompilerNotFound, 
#line 647
cudaErrorInvalidSource = 300, 
#line 652
cudaErrorFileNotFound, 
#line 657
cudaErrorSharedObjectSymbolNotFound, 
#line 662
cudaErrorSharedObjectInitFailed, 
#line 667
cudaErrorOperatingSystem, 
#line 674
cudaErrorInvalidResourceHandle = 400, 
#line 680
cudaErrorIllegalState, 
#line 686
cudaErrorSymbolNotFound = 500, 
#line 694
cudaErrorNotReady = 600, 
#line 702
cudaErrorIllegalAddress = 700, 
#line 711
cudaErrorLaunchOutOfResources, 
#line 722
cudaErrorLaunchTimeout, 
#line 728
cudaErrorLaunchIncompatibleTexturing, 
#line 735
cudaErrorPeerAccessAlreadyEnabled, 
#line 742
cudaErrorPeerAccessNotEnabled, 
#line 755
cudaErrorSetOnActiveProcess = 708, 
#line 762
cudaErrorContextIsDestroyed, 
#line 769
cudaErrorAssert, 
#line 776
cudaErrorTooManyPeers, 
#line 782
cudaErrorHostMemoryAlreadyRegistered, 
#line 788
cudaErrorHostMemoryNotRegistered, 
#line 797
cudaErrorHardwareStackError, 
#line 805
cudaErrorIllegalInstruction, 
#line 814
cudaErrorMisalignedAddress, 
#line 825
cudaErrorInvalidAddressSpace, 
#line 833
cudaErrorInvalidPc, 
#line 844
cudaErrorLaunchFailure, 
#line 853
cudaErrorCooperativeLaunchTooLarge, 
#line 858
cudaErrorNotPermitted = 800, 
#line 864
cudaErrorNotSupported, 
#line 873
cudaErrorSystemNotReady, 
#line 880
cudaErrorSystemDriverMismatch, 
#line 889
cudaErrorCompatNotSupportedOnDevice, 
#line 894
cudaErrorStreamCaptureUnsupported = 900, 
#line 900
cudaErrorStreamCaptureInvalidated, 
#line 906
cudaErrorStreamCaptureMerge, 
#line 911
cudaErrorStreamCaptureUnmatched, 
#line 917
cudaErrorStreamCaptureUnjoined, 
#line 924
cudaErrorStreamCaptureIsolation, 
#line 930
cudaErrorStreamCaptureImplicit, 
#line 936
cudaErrorCapturedEvent, 
#line 943
cudaErrorStreamCaptureWrongThread, 
#line 948
cudaErrorUnknown = 999, 
#line 956
cudaErrorApiFailureBase = 10000
#line 957
}; 
#endif
#line 962 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 962
enum cudaChannelFormatKind { 
#line 964
cudaChannelFormatKindSigned, 
#line 965
cudaChannelFormatKindUnsigned, 
#line 966
cudaChannelFormatKindFloat, 
#line 967
cudaChannelFormatKindNone
#line 968
}; 
#endif
#line 973 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 973
struct cudaChannelFormatDesc { 
#line 975
int x; 
#line 976
int y; 
#line 977
int z; 
#line 978
int w; 
#line 979
cudaChannelFormatKind f; 
#line 980
}; 
#endif
#line 985 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
typedef struct cudaArray *cudaArray_t; 
#line 990
typedef const cudaArray *cudaArray_const_t; 
#line 992
struct cudaArray; 
#line 997
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
#line 1002
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
#line 1004
struct cudaMipmappedArray; 
#line 1009
#if 0
#line 1009
enum cudaMemoryType { 
#line 1011
cudaMemoryTypeUnregistered, 
#line 1012
cudaMemoryTypeHost, 
#line 1013
cudaMemoryTypeDevice, 
#line 1014
cudaMemoryTypeManaged
#line 1015
}; 
#endif
#line 1020 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1020
enum cudaMemcpyKind { 
#line 1022
cudaMemcpyHostToHost, 
#line 1023
cudaMemcpyHostToDevice, 
#line 1024
cudaMemcpyDeviceToHost, 
#line 1025
cudaMemcpyDeviceToDevice, 
#line 1026
cudaMemcpyDefault
#line 1027
}; 
#endif
#line 1034 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1034
struct cudaPitchedPtr { 
#line 1036
void *ptr; 
#line 1037
size_t pitch; 
#line 1038
size_t xsize; 
#line 1039
size_t ysize; 
#line 1040
}; 
#endif
#line 1047 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1047
struct cudaExtent { 
#line 1049
size_t width; 
#line 1050
size_t height; 
#line 1051
size_t depth; 
#line 1052
}; 
#endif
#line 1059 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1059
struct cudaPos { 
#line 1061
size_t x; 
#line 1062
size_t y; 
#line 1063
size_t z; 
#line 1064
}; 
#endif
#line 1069 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1069
struct cudaMemcpy3DParms { 
#line 1071
cudaArray_t srcArray; 
#line 1072
cudaPos srcPos; 
#line 1073
cudaPitchedPtr srcPtr; 
#line 1075
cudaArray_t dstArray; 
#line 1076
cudaPos dstPos; 
#line 1077
cudaPitchedPtr dstPtr; 
#line 1079
cudaExtent extent; 
#line 1080
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1081
}; 
#endif
#line 1086 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1086
struct cudaMemcpy3DPeerParms { 
#line 1088
cudaArray_t srcArray; 
#line 1089
cudaPos srcPos; 
#line 1090
cudaPitchedPtr srcPtr; 
#line 1091
int srcDevice; 
#line 1093
cudaArray_t dstArray; 
#line 1094
cudaPos dstPos; 
#line 1095
cudaPitchedPtr dstPtr; 
#line 1096
int dstDevice; 
#line 1098
cudaExtent extent; 
#line 1099
}; 
#endif
#line 1104 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1104
struct cudaMemsetParams { 
#line 1105
void *dst; 
#line 1106
size_t pitch; 
#line 1107
unsigned value; 
#line 1108
unsigned elementSize; 
#line 1109
size_t width; 
#line 1110
size_t height; 
#line 1111
}; 
#endif
#line 1123 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
typedef void (__stdcall *cudaHostFn_t)(void * userData); 
#line 1128
#if 0
#line 1128
struct cudaHostNodeParams { 
#line 1129
cudaHostFn_t fn; 
#line 1130
void *userData; 
#line 1131
}; 
#endif
#line 1136 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1136
enum cudaStreamCaptureStatus { 
#line 1137
cudaStreamCaptureStatusNone, 
#line 1138
cudaStreamCaptureStatusActive, 
#line 1139
cudaStreamCaptureStatusInvalidated
#line 1141
}; 
#endif
#line 1147 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1147
enum cudaStreamCaptureMode { 
#line 1148
cudaStreamCaptureModeGlobal, 
#line 1149
cudaStreamCaptureModeThreadLocal, 
#line 1150
cudaStreamCaptureModeRelaxed
#line 1151
}; 
#endif
#line 1156 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
struct cudaGraphicsResource; 
#line 1161
#if 0
#line 1161
enum cudaGraphicsRegisterFlags { 
#line 1163
cudaGraphicsRegisterFlagsNone, 
#line 1164
cudaGraphicsRegisterFlagsReadOnly, 
#line 1165
cudaGraphicsRegisterFlagsWriteDiscard, 
#line 1166
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
#line 1167
cudaGraphicsRegisterFlagsTextureGather = 8
#line 1168
}; 
#endif
#line 1173 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1173
enum cudaGraphicsMapFlags { 
#line 1175
cudaGraphicsMapFlagsNone, 
#line 1176
cudaGraphicsMapFlagsReadOnly, 
#line 1177
cudaGraphicsMapFlagsWriteDiscard
#line 1178
}; 
#endif
#line 1183 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1183
enum cudaGraphicsCubeFace { 
#line 1185
cudaGraphicsCubeFacePositiveX, 
#line 1186
cudaGraphicsCubeFaceNegativeX, 
#line 1187
cudaGraphicsCubeFacePositiveY, 
#line 1188
cudaGraphicsCubeFaceNegativeY, 
#line 1189
cudaGraphicsCubeFacePositiveZ, 
#line 1190
cudaGraphicsCubeFaceNegativeZ
#line 1191
}; 
#endif
#line 1196 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1196
enum cudaResourceType { 
#line 1198
cudaResourceTypeArray, 
#line 1199
cudaResourceTypeMipmappedArray, 
#line 1200
cudaResourceTypeLinear, 
#line 1201
cudaResourceTypePitch2D
#line 1202
}; 
#endif
#line 1207 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1207
enum cudaResourceViewFormat { 
#line 1209
cudaResViewFormatNone, 
#line 1210
cudaResViewFormatUnsignedChar1, 
#line 1211
cudaResViewFormatUnsignedChar2, 
#line 1212
cudaResViewFormatUnsignedChar4, 
#line 1213
cudaResViewFormatSignedChar1, 
#line 1214
cudaResViewFormatSignedChar2, 
#line 1215
cudaResViewFormatSignedChar4, 
#line 1216
cudaResViewFormatUnsignedShort1, 
#line 1217
cudaResViewFormatUnsignedShort2, 
#line 1218
cudaResViewFormatUnsignedShort4, 
#line 1219
cudaResViewFormatSignedShort1, 
#line 1220
cudaResViewFormatSignedShort2, 
#line 1221
cudaResViewFormatSignedShort4, 
#line 1222
cudaResViewFormatUnsignedInt1, 
#line 1223
cudaResViewFormatUnsignedInt2, 
#line 1224
cudaResViewFormatUnsignedInt4, 
#line 1225
cudaResViewFormatSignedInt1, 
#line 1226
cudaResViewFormatSignedInt2, 
#line 1227
cudaResViewFormatSignedInt4, 
#line 1228
cudaResViewFormatHalf1, 
#line 1229
cudaResViewFormatHalf2, 
#line 1230
cudaResViewFormatHalf4, 
#line 1231
cudaResViewFormatFloat1, 
#line 1232
cudaResViewFormatFloat2, 
#line 1233
cudaResViewFormatFloat4, 
#line 1234
cudaResViewFormatUnsignedBlockCompressed1, 
#line 1235
cudaResViewFormatUnsignedBlockCompressed2, 
#line 1236
cudaResViewFormatUnsignedBlockCompressed3, 
#line 1237
cudaResViewFormatUnsignedBlockCompressed4, 
#line 1238
cudaResViewFormatSignedBlockCompressed4, 
#line 1239
cudaResViewFormatUnsignedBlockCompressed5, 
#line 1240
cudaResViewFormatSignedBlockCompressed5, 
#line 1241
cudaResViewFormatUnsignedBlockCompressed6H, 
#line 1242
cudaResViewFormatSignedBlockCompressed6H, 
#line 1243
cudaResViewFormatUnsignedBlockCompressed7
#line 1244
}; 
#endif
#line 1249 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1249
struct cudaResourceDesc { 
#line 1250
cudaResourceType resType; 
#line 1252
union { 
#line 1253
struct { 
#line 1254
cudaArray_t array; 
#line 1255
} array; 
#line 1256
struct { 
#line 1257
cudaMipmappedArray_t mipmap; 
#line 1258
} mipmap; 
#line 1259
struct { 
#line 1260
void *devPtr; 
#line 1261
cudaChannelFormatDesc desc; 
#line 1262
size_t sizeInBytes; 
#line 1263
} linear; 
#line 1264
struct { 
#line 1265
void *devPtr; 
#line 1266
cudaChannelFormatDesc desc; 
#line 1267
size_t width; 
#line 1268
size_t height; 
#line 1269
size_t pitchInBytes; 
#line 1270
} pitch2D; 
#line 1271
} res; 
#line 1272
}; 
#endif
#line 1277 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1277
struct cudaResourceViewDesc { 
#line 1279
cudaResourceViewFormat format; 
#line 1280
size_t width; 
#line 1281
size_t height; 
#line 1282
size_t depth; 
#line 1283
unsigned firstMipmapLevel; 
#line 1284
unsigned lastMipmapLevel; 
#line 1285
unsigned firstLayer; 
#line 1286
unsigned lastLayer; 
#line 1287
}; 
#endif
#line 1292 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1292
struct cudaPointerAttributes { 
#line 1302
__declspec(deprecated) cudaMemoryType memoryType; 
#line 1308
cudaMemoryType type; 
#line 1319
int device; 
#line 1325
void *devicePointer; 
#line 1334
void *hostPointer; 
#line 1341
__declspec(deprecated) int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1342
}; 
#endif
#line 1347 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1347
struct cudaFuncAttributes { 
#line 1354
size_t sharedSizeBytes; 
#line 1360
size_t constSizeBytes; 
#line 1365
size_t localSizeBytes; 
#line 1372
int maxThreadsPerBlock; 
#line 1377
int numRegs; 
#line 1384
int ptxVersion; 
#line 1391
int binaryVersion; 
#line 1397
int cacheModeCA; 
#line 1404
int maxDynamicSharedSizeBytes; 
#line 1413
int preferredShmemCarveout; 
#line 1414
}; 
#endif
#line 1419 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1419
enum cudaFuncAttribute { 
#line 1421
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
#line 1422
cudaFuncAttributePreferredSharedMemoryCarveout, 
#line 1423
cudaFuncAttributeMax
#line 1424
}; 
#endif
#line 1429 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1429
enum cudaFuncCache { 
#line 1431
cudaFuncCachePreferNone, 
#line 1432
cudaFuncCachePreferShared, 
#line 1433
cudaFuncCachePreferL1, 
#line 1434
cudaFuncCachePreferEqual
#line 1435
}; 
#endif
#line 1441 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1441
enum cudaSharedMemConfig { 
#line 1443
cudaSharedMemBankSizeDefault, 
#line 1444
cudaSharedMemBankSizeFourByte, 
#line 1445
cudaSharedMemBankSizeEightByte
#line 1446
}; 
#endif
#line 1451 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1451
enum cudaSharedCarveout { 
#line 1452
cudaSharedmemCarveoutDefault = (-1), 
#line 1453
cudaSharedmemCarveoutMaxShared = 100, 
#line 1454
cudaSharedmemCarveoutMaxL1 = 0
#line 1455
}; 
#endif
#line 1460 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1460
enum cudaComputeMode { 
#line 1462
cudaComputeModeDefault, 
#line 1463
cudaComputeModeExclusive, 
#line 1464
cudaComputeModeProhibited, 
#line 1465
cudaComputeModeExclusiveProcess
#line 1466
}; 
#endif
#line 1471 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1471
enum cudaLimit { 
#line 1473
cudaLimitStackSize, 
#line 1474
cudaLimitPrintfFifoSize, 
#line 1475
cudaLimitMallocHeapSize, 
#line 1476
cudaLimitDevRuntimeSyncDepth, 
#line 1477
cudaLimitDevRuntimePendingLaunchCount, 
#line 1478
cudaLimitMaxL2FetchGranularity
#line 1479
}; 
#endif
#line 1484 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1484
enum cudaMemoryAdvise { 
#line 1486
cudaMemAdviseSetReadMostly = 1, 
#line 1487
cudaMemAdviseUnsetReadMostly, 
#line 1488
cudaMemAdviseSetPreferredLocation, 
#line 1489
cudaMemAdviseUnsetPreferredLocation, 
#line 1490
cudaMemAdviseSetAccessedBy, 
#line 1491
cudaMemAdviseUnsetAccessedBy
#line 1492
}; 
#endif
#line 1497 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1497
enum cudaMemRangeAttribute { 
#line 1499
cudaMemRangeAttributeReadMostly = 1, 
#line 1500
cudaMemRangeAttributePreferredLocation, 
#line 1501
cudaMemRangeAttributeAccessedBy, 
#line 1502
cudaMemRangeAttributeLastPrefetchLocation
#line 1503
}; 
#endif
#line 1508 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1508
enum cudaOutputMode { 
#line 1510
cudaKeyValuePair, 
#line 1511
cudaCSV
#line 1512
}; 
#endif
#line 1517 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1517
enum cudaDeviceAttr { 
#line 1519
cudaDevAttrMaxThreadsPerBlock = 1, 
#line 1520
cudaDevAttrMaxBlockDimX, 
#line 1521
cudaDevAttrMaxBlockDimY, 
#line 1522
cudaDevAttrMaxBlockDimZ, 
#line 1523
cudaDevAttrMaxGridDimX, 
#line 1524
cudaDevAttrMaxGridDimY, 
#line 1525
cudaDevAttrMaxGridDimZ, 
#line 1526
cudaDevAttrMaxSharedMemoryPerBlock, 
#line 1527
cudaDevAttrTotalConstantMemory, 
#line 1528
cudaDevAttrWarpSize, 
#line 1529
cudaDevAttrMaxPitch, 
#line 1530
cudaDevAttrMaxRegistersPerBlock, 
#line 1531
cudaDevAttrClockRate, 
#line 1532
cudaDevAttrTextureAlignment, 
#line 1533
cudaDevAttrGpuOverlap, 
#line 1534
cudaDevAttrMultiProcessorCount, 
#line 1535
cudaDevAttrKernelExecTimeout, 
#line 1536
cudaDevAttrIntegrated, 
#line 1537
cudaDevAttrCanMapHostMemory, 
#line 1538
cudaDevAttrComputeMode, 
#line 1539
cudaDevAttrMaxTexture1DWidth, 
#line 1540
cudaDevAttrMaxTexture2DWidth, 
#line 1541
cudaDevAttrMaxTexture2DHeight, 
#line 1542
cudaDevAttrMaxTexture3DWidth, 
#line 1543
cudaDevAttrMaxTexture3DHeight, 
#line 1544
cudaDevAttrMaxTexture3DDepth, 
#line 1545
cudaDevAttrMaxTexture2DLayeredWidth, 
#line 1546
cudaDevAttrMaxTexture2DLayeredHeight, 
#line 1547
cudaDevAttrMaxTexture2DLayeredLayers, 
#line 1548
cudaDevAttrSurfaceAlignment, 
#line 1549
cudaDevAttrConcurrentKernels, 
#line 1550
cudaDevAttrEccEnabled, 
#line 1551
cudaDevAttrPciBusId, 
#line 1552
cudaDevAttrPciDeviceId, 
#line 1553
cudaDevAttrTccDriver, 
#line 1554
cudaDevAttrMemoryClockRate, 
#line 1555
cudaDevAttrGlobalMemoryBusWidth, 
#line 1556
cudaDevAttrL2CacheSize, 
#line 1557
cudaDevAttrMaxThreadsPerMultiProcessor, 
#line 1558
cudaDevAttrAsyncEngineCount, 
#line 1559
cudaDevAttrUnifiedAddressing, 
#line 1560
cudaDevAttrMaxTexture1DLayeredWidth, 
#line 1561
cudaDevAttrMaxTexture1DLayeredLayers, 
#line 1562
cudaDevAttrMaxTexture2DGatherWidth = 45, 
#line 1563
cudaDevAttrMaxTexture2DGatherHeight, 
#line 1564
cudaDevAttrMaxTexture3DWidthAlt, 
#line 1565
cudaDevAttrMaxTexture3DHeightAlt, 
#line 1566
cudaDevAttrMaxTexture3DDepthAlt, 
#line 1567
cudaDevAttrPciDomainId, 
#line 1568
cudaDevAttrTexturePitchAlignment, 
#line 1569
cudaDevAttrMaxTextureCubemapWidth, 
#line 1570
cudaDevAttrMaxTextureCubemapLayeredWidth, 
#line 1571
cudaDevAttrMaxTextureCubemapLayeredLayers, 
#line 1572
cudaDevAttrMaxSurface1DWidth, 
#line 1573
cudaDevAttrMaxSurface2DWidth, 
#line 1574
cudaDevAttrMaxSurface2DHeight, 
#line 1575
cudaDevAttrMaxSurface3DWidth, 
#line 1576
cudaDevAttrMaxSurface3DHeight, 
#line 1577
cudaDevAttrMaxSurface3DDepth, 
#line 1578
cudaDevAttrMaxSurface1DLayeredWidth, 
#line 1579
cudaDevAttrMaxSurface1DLayeredLayers, 
#line 1580
cudaDevAttrMaxSurface2DLayeredWidth, 
#line 1581
cudaDevAttrMaxSurface2DLayeredHeight, 
#line 1582
cudaDevAttrMaxSurface2DLayeredLayers, 
#line 1583
cudaDevAttrMaxSurfaceCubemapWidth, 
#line 1584
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
#line 1585
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
#line 1586
cudaDevAttrMaxTexture1DLinearWidth, 
#line 1587
cudaDevAttrMaxTexture2DLinearWidth, 
#line 1588
cudaDevAttrMaxTexture2DLinearHeight, 
#line 1589
cudaDevAttrMaxTexture2DLinearPitch, 
#line 1590
cudaDevAttrMaxTexture2DMipmappedWidth, 
#line 1591
cudaDevAttrMaxTexture2DMipmappedHeight, 
#line 1592
cudaDevAttrComputeCapabilityMajor, 
#line 1593
cudaDevAttrComputeCapabilityMinor, 
#line 1594
cudaDevAttrMaxTexture1DMipmappedWidth, 
#line 1595
cudaDevAttrStreamPrioritiesSupported, 
#line 1596
cudaDevAttrGlobalL1CacheSupported, 
#line 1597
cudaDevAttrLocalL1CacheSupported, 
#line 1598
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
#line 1599
cudaDevAttrMaxRegistersPerMultiprocessor, 
#line 1600
cudaDevAttrManagedMemory, 
#line 1601
cudaDevAttrIsMultiGpuBoard, 
#line 1602
cudaDevAttrMultiGpuBoardGroupID, 
#line 1603
cudaDevAttrHostNativeAtomicSupported, 
#line 1604
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
#line 1605
cudaDevAttrPageableMemoryAccess, 
#line 1606
cudaDevAttrConcurrentManagedAccess, 
#line 1607
cudaDevAttrComputePreemptionSupported, 
#line 1608
cudaDevAttrCanUseHostPointerForRegisteredMem, 
#line 1609
cudaDevAttrReserved92, 
#line 1610
cudaDevAttrReserved93, 
#line 1611
cudaDevAttrReserved94, 
#line 1612
cudaDevAttrCooperativeLaunch, 
#line 1613
cudaDevAttrCooperativeMultiDeviceLaunch, 
#line 1614
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
#line 1615
cudaDevAttrCanFlushRemoteWrites, 
#line 1616
cudaDevAttrHostRegisterSupported, 
#line 1617
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
#line 1618
cudaDevAttrDirectManagedMemAccessFromHost
#line 1619
}; 
#endif
#line 1625 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1625
enum cudaDeviceP2PAttr { 
#line 1626
cudaDevP2PAttrPerformanceRank = 1, 
#line 1627
cudaDevP2PAttrAccessSupported, 
#line 1628
cudaDevP2PAttrNativeAtomicSupported, 
#line 1629
cudaDevP2PAttrCudaArrayAccessSupported
#line 1630
}; 
#endif
#line 1637 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1637
struct CUuuid_st { 
#line 1638
char bytes[16]; 
#line 1639
}; 
#endif
#line 1640 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 1640
CUuuid; 
#endif
#line 1642 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 1642
cudaUUID_t; 
#endif
#line 1647 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1647
struct cudaDeviceProp { 
#line 1649
char name[256]; 
#line 1650
cudaUUID_t uuid; 
#line 1651
char luid[8]; 
#line 1652
unsigned luidDeviceNodeMask; 
#line 1653
size_t totalGlobalMem; 
#line 1654
size_t sharedMemPerBlock; 
#line 1655
int regsPerBlock; 
#line 1656
int warpSize; 
#line 1657
size_t memPitch; 
#line 1658
int maxThreadsPerBlock; 
#line 1659
int maxThreadsDim[3]; 
#line 1660
int maxGridSize[3]; 
#line 1661
int clockRate; 
#line 1662
size_t totalConstMem; 
#line 1663
int major; 
#line 1664
int minor; 
#line 1665
size_t textureAlignment; 
#line 1666
size_t texturePitchAlignment; 
#line 1667
int deviceOverlap; 
#line 1668
int multiProcessorCount; 
#line 1669
int kernelExecTimeoutEnabled; 
#line 1670
int integrated; 
#line 1671
int canMapHostMemory; 
#line 1672
int computeMode; 
#line 1673
int maxTexture1D; 
#line 1674
int maxTexture1DMipmap; 
#line 1675
int maxTexture1DLinear; 
#line 1676
int maxTexture2D[2]; 
#line 1677
int maxTexture2DMipmap[2]; 
#line 1678
int maxTexture2DLinear[3]; 
#line 1679
int maxTexture2DGather[2]; 
#line 1680
int maxTexture3D[3]; 
#line 1681
int maxTexture3DAlt[3]; 
#line 1682
int maxTextureCubemap; 
#line 1683
int maxTexture1DLayered[2]; 
#line 1684
int maxTexture2DLayered[3]; 
#line 1685
int maxTextureCubemapLayered[2]; 
#line 1686
int maxSurface1D; 
#line 1687
int maxSurface2D[2]; 
#line 1688
int maxSurface3D[3]; 
#line 1689
int maxSurface1DLayered[2]; 
#line 1690
int maxSurface2DLayered[3]; 
#line 1691
int maxSurfaceCubemap; 
#line 1692
int maxSurfaceCubemapLayered[2]; 
#line 1693
size_t surfaceAlignment; 
#line 1694
int concurrentKernels; 
#line 1695
int ECCEnabled; 
#line 1696
int pciBusID; 
#line 1697
int pciDeviceID; 
#line 1698
int pciDomainID; 
#line 1699
int tccDriver; 
#line 1700
int asyncEngineCount; 
#line 1701
int unifiedAddressing; 
#line 1702
int memoryClockRate; 
#line 1703
int memoryBusWidth; 
#line 1704
int l2CacheSize; 
#line 1705
int maxThreadsPerMultiProcessor; 
#line 1706
int streamPrioritiesSupported; 
#line 1707
int globalL1CacheSupported; 
#line 1708
int localL1CacheSupported; 
#line 1709
size_t sharedMemPerMultiprocessor; 
#line 1710
int regsPerMultiprocessor; 
#line 1711
int managedMemory; 
#line 1712
int isMultiGpuBoard; 
#line 1713
int multiGpuBoardGroupID; 
#line 1714
int hostNativeAtomicSupported; 
#line 1715
int singleToDoublePrecisionPerfRatio; 
#line 1716
int pageableMemoryAccess; 
#line 1717
int concurrentManagedAccess; 
#line 1718
int computePreemptionSupported; 
#line 1719
int canUseHostPointerForRegisteredMem; 
#line 1720
int cooperativeLaunch; 
#line 1721
int cooperativeMultiDeviceLaunch; 
#line 1722
size_t sharedMemPerBlockOptin; 
#line 1723
int pageableMemoryAccessUsesHostPageTables; 
#line 1724
int directManagedMemAccessFromHost; 
#line 1725
}; 
#endif
#line 1818 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef 
#line 1815
struct cudaIpcEventHandle_st { 
#line 1817
char reserved[64]; 
#line 1818
} cudaIpcEventHandle_t; 
#endif
#line 1826 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef 
#line 1823
struct cudaIpcMemHandle_st { 
#line 1825
char reserved[64]; 
#line 1826
} cudaIpcMemHandle_t; 
#endif
#line 1831 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1831
enum cudaExternalMemoryHandleType { 
#line 1835
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
#line 1839
cudaExternalMemoryHandleTypeOpaqueWin32, 
#line 1843
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
#line 1847
cudaExternalMemoryHandleTypeD3D12Heap, 
#line 1851
cudaExternalMemoryHandleTypeD3D12Resource
#line 1852
}; 
#endif
#line 1862 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1862
struct cudaExternalMemoryHandleDesc { 
#line 1866
cudaExternalMemoryHandleType type; 
#line 1867
union { 
#line 1873
int fd; 
#line 1885
struct { 
#line 1889
void *handle; 
#line 1894
const void *name; 
#line 1895
} win32; 
#line 1896
} handle; 
#line 1900
unsigned __int64 size; 
#line 1904
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1905
}; 
#endif
#line 1910 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1910
struct cudaExternalMemoryBufferDesc { 
#line 1914
unsigned __int64 offset; 
#line 1918
unsigned __int64 size; 
#line 1922
unsigned flags; 
#line 1923
}; 
#endif
#line 1928 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1928
struct cudaExternalMemoryMipmappedArrayDesc { 
#line 1933
unsigned __int64 offset; 
#line 1937
cudaChannelFormatDesc formatDesc; 
#line 1941
cudaExtent extent; 
#line 1946
unsigned flags; 
#line 1950
unsigned numLevels; 
#line 1951
}; 
#endif
#line 1956 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1956
enum cudaExternalSemaphoreHandleType { 
#line 1960
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
#line 1964
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
#line 1968
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
#line 1972
cudaExternalSemaphoreHandleTypeD3D12Fence
#line 1973
}; 
#endif
#line 1978 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 1978
struct cudaExternalSemaphoreHandleDesc { 
#line 1982
cudaExternalSemaphoreHandleType type; 
#line 1983
union { 
#line 1988
int fd; 
#line 1999
struct { 
#line 2003
void *handle; 
#line 2008
const void *name; 
#line 2009
} win32; 
#line 2010
} handle; 
#line 2014
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 2015
}; 
#endif
#line 2020 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 2020
struct cudaExternalSemaphoreSignalParams { 
#line 2021
union { 
#line 2025
struct { 
#line 2029
unsigned __int64 value; 
#line 2030
} fence; 
#line 2031
} params; 
#line 2035
unsigned flags; 
#line 2036
}; 
#endif
#line 2041 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 2041
struct cudaExternalSemaphoreWaitParams { 
#line 2042
union { 
#line 2046
struct { 
#line 2050
unsigned __int64 value; 
#line 2051
} fence; 
#line 2052
} params; 
#line 2056
unsigned flags; 
#line 2057
}; 
#endif
#line 2069 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef cudaError 
#line 2069
cudaError_t; 
#endif
#line 2074 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef struct CUstream_st *
#line 2074
cudaStream_t; 
#endif
#line 2079 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef struct CUevent_st *
#line 2079
cudaEvent_t; 
#endif
#line 2084 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef cudaGraphicsResource *
#line 2084
cudaGraphicsResource_t; 
#endif
#line 2089 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef cudaOutputMode 
#line 2089
cudaOutputMode_t; 
#endif
#line 2094 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
#line 2094
cudaExternalMemory_t; 
#endif
#line 2099 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
#line 2099
cudaExternalSemaphore_t; 
#endif
#line 2104 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef struct CUgraph_st *
#line 2104
cudaGraph_t; 
#endif
#line 2109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
typedef struct CUgraphNode_st *
#line 2109
cudaGraphNode_t; 
#endif
#line 2114 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 2114
enum cudaCGScope { 
#line 2115
cudaCGScopeInvalid, 
#line 2116
cudaCGScopeGrid, 
#line 2117
cudaCGScopeMultiGrid
#line 2118
}; 
#endif
#line 2123 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 2123
struct cudaLaunchParams { 
#line 2125
void *func; 
#line 2126
dim3 gridDim; 
#line 2127
dim3 blockDim; 
#line 2128
void **args; 
#line 2129
size_t sharedMem; 
#line 2130
cudaStream_t stream; 
#line 2131
}; 
#endif
#line 2136 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 2136
struct cudaKernelNodeParams { 
#line 2137
void *func; 
#line 2138
dim3 gridDim; 
#line 2139
dim3 blockDim; 
#line 2140
unsigned sharedMemBytes; 
#line 2141
void **kernelParams; 
#line 2142
void **extra; 
#line 2143
}; 
#endif
#line 2148 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
#if 0
#line 2148
enum cudaGraphNodeType { 
#line 2149
cudaGraphNodeTypeKernel, 
#line 2150
cudaGraphNodeTypeMemcpy, 
#line 2151
cudaGraphNodeTypeMemset, 
#line 2152
cudaGraphNodeTypeHost, 
#line 2153
cudaGraphNodeTypeGraph, 
#line 2154
cudaGraphNodeTypeEmpty, 
#line 2155
cudaGraphNodeTypeCount
#line 2156
}; 
#endif
#line 2161 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
#line 84 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\surface_types.h"
#if 0
#line 84
enum cudaSurfaceBoundaryMode { 
#line 86
cudaBoundaryModeZero, 
#line 87
cudaBoundaryModeClamp, 
#line 88
cudaBoundaryModeTrap
#line 89
}; 
#endif
#line 94 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\surface_types.h"
#if 0
#line 94
enum cudaSurfaceFormatMode { 
#line 96
cudaFormatModeForced, 
#line 97
cudaFormatModeAuto
#line 98
}; 
#endif
#line 103 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\surface_types.h"
#if 0
#line 103
struct surfaceReference { 
#line 108
cudaChannelFormatDesc channelDesc; 
#line 109
}; 
#endif
#line 114 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\surface_types.h"
#if 0
typedef unsigned __int64 
#line 114
cudaSurfaceObject_t; 
#endif
#line 84 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\texture_types.h"
#if 0
#line 84
enum cudaTextureAddressMode { 
#line 86
cudaAddressModeWrap, 
#line 87
cudaAddressModeClamp, 
#line 88
cudaAddressModeMirror, 
#line 89
cudaAddressModeBorder
#line 90
}; 
#endif
#line 95 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\texture_types.h"
#if 0
#line 95
enum cudaTextureFilterMode { 
#line 97
cudaFilterModePoint, 
#line 98
cudaFilterModeLinear
#line 99
}; 
#endif
#line 104 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\texture_types.h"
#if 0
#line 104
enum cudaTextureReadMode { 
#line 106
cudaReadModeElementType, 
#line 107
cudaReadModeNormalizedFloat
#line 108
}; 
#endif
#line 113 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\texture_types.h"
#if 0
#line 113
struct textureReference { 
#line 118
int normalized; 
#line 122
cudaTextureFilterMode filterMode; 
#line 126
cudaTextureAddressMode addressMode[3]; 
#line 130
cudaChannelFormatDesc channelDesc; 
#line 134
int sRGB; 
#line 138
unsigned maxAnisotropy; 
#line 142
cudaTextureFilterMode mipmapFilterMode; 
#line 146
float mipmapLevelBias; 
#line 150
float minMipmapLevelClamp; 
#line 154
float maxMipmapLevelClamp; 
#line 155
int __cudaReserved[15]; 
#line 156
}; 
#endif
#line 161 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\texture_types.h"
#if 0
#line 161
struct cudaTextureDesc { 
#line 166
cudaTextureAddressMode addressMode[3]; 
#line 170
cudaTextureFilterMode filterMode; 
#line 174
cudaTextureReadMode readMode; 
#line 178
int sRGB; 
#line 182
float borderColor[4]; 
#line 186
int normalizedCoords; 
#line 190
unsigned maxAnisotropy; 
#line 194
cudaTextureFilterMode mipmapFilterMode; 
#line 198
float mipmapLevelBias; 
#line 202
float minMipmapLevelClamp; 
#line 206
float maxMipmapLevelClamp; 
#line 207
}; 
#endif
#line 212 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\texture_types.h"
#if 0
typedef unsigned __int64 
#line 212
cudaTextureObject_t; 
#endif
#line 70 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\library_types.h"
typedef 
#line 54
enum cudaDataType_t { 
#line 56
CUDA_R_16F = 2, 
#line 57
CUDA_C_16F = 6, 
#line 58
CUDA_R_32F = 0, 
#line 59
CUDA_C_32F = 4, 
#line 60
CUDA_R_64F = 1, 
#line 61
CUDA_C_64F = 5, 
#line 62
CUDA_R_8I = 3, 
#line 63
CUDA_C_8I = 7, 
#line 64
CUDA_R_8U, 
#line 65
CUDA_C_8U, 
#line 66
CUDA_R_32I, 
#line 67
CUDA_C_32I, 
#line 68
CUDA_R_32U, 
#line 69
CUDA_C_32U
#line 70
} cudaDataType; 
#line 78
typedef 
#line 73
enum libraryPropertyType_t { 
#line 75
MAJOR_VERSION, 
#line 76
MINOR_VERSION, 
#line 77
PATCH_LEVEL
#line 78
} libraryPropertyType; 
#line 121 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\cuda_device_runtime_api.h"
extern "C" {
#line 123
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 124
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 125
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 126
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 127
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 128
extern cudaError_t __stdcall cudaGetLastError(); 
#line 129
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 130
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 131
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 132
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 133
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 134
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 135
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 136
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 137
extern cudaError_t __stdcall cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 138
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 139
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
#line 140
extern cudaError_t __stdcall cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
#line 141
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 142
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 143
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 144
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 145
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 146
extern cudaError_t __stdcall cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 147
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 148
extern cudaError_t __stdcall cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 149
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 150
extern cudaError_t __stdcall cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 151
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 152
extern cudaError_t __stdcall cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 153
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 154
extern cudaError_t __stdcall cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 155
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 156
extern cudaError_t __stdcall cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 157
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 178
extern void *__stdcall cudaGetParameterBuffer(size_t alignment, size_t size); 
#line 206
extern void *__stdcall cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
#line 207
extern cudaError_t __stdcall cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 208
extern cudaError_t __stdcall cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
#line 226 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 227
extern cudaError_t __stdcall cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
#line 230 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
#line 231
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 233
extern unsigned __int64 __stdcall cudaCGGetIntrinsicHandle(cudaCGScope scope); 
#line 234
extern cudaError_t __stdcall cudaCGSynchronize(unsigned __int64 handle, unsigned flags); 
#line 235
extern cudaError_t __stdcall cudaCGSynchronizeGrid(unsigned __int64 handle, unsigned flags); 
#line 236
extern cudaError_t __stdcall cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned __int64 handle); 
#line 237
extern cudaError_t __stdcall cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned __int64 handle); 
#line 238
}
#line 240
template< class T> static __inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
#line 241
template< class T> static __inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
#line 242
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
#line 243
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 245 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\cuda_runtime_api.h"
extern "C" {
#line 280 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceReset(); 
#line 301
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 386
extern cudaError_t __stdcall cudaDeviceSetLimit(cudaLimit limit, size_t value); 
#line 420
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 453
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 490
extern cudaError_t __stdcall cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
#line 534
extern cudaError_t __stdcall cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
#line 565
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 609
extern cudaError_t __stdcall cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
#line 636
extern cudaError_t __stdcall cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
#line 666
extern cudaError_t __stdcall cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
#line 713
extern cudaError_t __stdcall cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
#line 753
extern cudaError_t __stdcall cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
#line 796
extern cudaError_t __stdcall cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
#line 854
extern cudaError_t __stdcall cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
#line 889
extern cudaError_t __stdcall cudaIpcCloseMemHandle(void * devPtr); 
#line 931
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadExit(); 
#line 957
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSynchronize(); 
#line 1006
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit limit, size_t value); 
#line 1039
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
#line 1075
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 1122
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
#line 1181
extern cudaError_t __stdcall cudaGetLastError(); 
#line 1227
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 1243
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 1259
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 1288
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 1559
extern cudaError_t __stdcall cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
#line 1748
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 1788
extern cudaError_t __stdcall cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
#line 1809
extern cudaError_t __stdcall cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
#line 1846
extern cudaError_t __stdcall cudaSetDevice(int device); 
#line 1867
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 1898
extern cudaError_t __stdcall cudaSetValidDevices(int * device_arr, int len); 
#line 1967
extern cudaError_t __stdcall cudaSetDeviceFlags(unsigned flags); 
#line 2013
extern cudaError_t __stdcall cudaGetDeviceFlags(unsigned * flags); 
#line 2053
extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t * pStream); 
#line 2085
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 2131
extern cudaError_t __stdcall cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
#line 2158
extern cudaError_t __stdcall cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
#line 2183
extern cudaError_t __stdcall cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
#line 2214
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 2240
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 2248
typedef void (__stdcall *cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
#line 2315
extern cudaError_t __stdcall cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
#line 2339
extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t stream); 
#line 2364
extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t stream); 
#line 2447
extern cudaError_t __stdcall cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
#line 2483
extern cudaError_t __stdcall cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
#line 2534
extern cudaError_t __stdcall cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
#line 2562
extern cudaError_t __stdcall cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
#line 2600
extern cudaError_t __stdcall cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
#line 2628
extern cudaError_t __stdcall cudaStreamGetCaptureInfo(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus, unsigned __int64 * pId); 
#line 2666
extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t * event); 
#line 2703
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 2742
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
#line 2773
extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t event); 
#line 2803
extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t event); 
#line 2830
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 2873
extern cudaError_t __stdcall cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
#line 3012
extern cudaError_t __stdcall cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
#line 3066
extern cudaError_t __stdcall cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
#line 3121
extern cudaError_t __stdcall cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
#line 3144
extern cudaError_t __stdcall cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
#line 3238
extern cudaError_t __stdcall cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
#line 3277
extern cudaError_t __stdcall cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3320
extern cudaError_t __stdcall cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3342
extern cudaError_t __stdcall cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
#line 3407
extern cudaError_t __stdcall cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 3464
extern cudaError_t __stdcall cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 3563
extern cudaError_t __stdcall cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
#line 3612
extern cudaError_t __stdcall cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
#line 3667
extern cudaError_t __stdcall cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
#line 3702
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 3741
extern cudaError_t __stdcall cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
#line 3765
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForDevice(double * d); 
#line 3789
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForHost(double * d); 
#line 3855
extern cudaError_t __stdcall cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
#line 3910
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
#line 3954
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
#line 4074
extern cudaError_t __stdcall cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
#line 4105
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 4138
extern cudaError_t __stdcall cudaMallocHost(void ** ptr, size_t size); 
#line 4181
extern cudaError_t __stdcall cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
#line 4227
extern cudaError_t __stdcall cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
#line 4256
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 4279
extern cudaError_t __stdcall cudaFreeHost(void * ptr); 
#line 4302
extern cudaError_t __stdcall cudaFreeArray(cudaArray_t array); 
#line 4325
extern cudaError_t __stdcall cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
#line 4391
extern cudaError_t __stdcall cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
#line 4475
extern cudaError_t __stdcall cudaHostRegister(void * ptr, size_t size, unsigned flags); 
#line 4498
extern cudaError_t __stdcall cudaHostUnregister(void * ptr); 
#line 4543
extern cudaError_t __stdcall cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
#line 4565
extern cudaError_t __stdcall cudaHostGetFlags(unsigned * pFlags, void * pHost); 
#line 4604
extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
#line 4743
extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
#line 4882
extern cudaError_t __stdcall cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
#line 4911
extern cudaError_t __stdcall cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
#line 5016
extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms * p); 
#line 5047
extern cudaError_t __stdcall cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
#line 5165
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
#line 5191
extern cudaError_t __stdcall cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
#line 5213
extern cudaError_t __stdcall cudaMemGetInfo(size_t * free, size_t * total); 
#line 5239
extern cudaError_t __stdcall cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
#line 5282
extern cudaError_t __stdcall cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 5317
extern cudaError_t __stdcall cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
#line 5365
extern cudaError_t __stdcall cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5414
extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5463
extern cudaError_t __stdcall cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5510
extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 5553
extern cudaError_t __stdcall cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
#line 5596
extern cudaError_t __stdcall cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
#line 5652
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5687
extern cudaError_t __stdcall cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
#line 5749
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5806
extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5862
extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5913
extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5964
extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5993
extern cudaError_t __stdcall cudaMemset(void * devPtr, int value, size_t count); 
#line 6027
extern cudaError_t __stdcall cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
#line 6071
extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
#line 6107
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
#line 6148
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
#line 6199
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
#line 6227
extern cudaError_t __stdcall cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
#line 6254
extern cudaError_t __stdcall cudaGetSymbolSize(size_t * size, const void * symbol); 
#line 6324
extern cudaError_t __stdcall cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
#line 6440
extern cudaError_t __stdcall cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
#line 6499
extern cudaError_t __stdcall cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
#line 6538
extern cudaError_t __stdcall cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
#line 6598
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
#line 6640
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
#line 6683
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 6734
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6784
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6950
extern cudaError_t __stdcall cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
#line 6991
extern cudaError_t __stdcall cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
#line 7033
extern cudaError_t __stdcall cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
#line 7055
extern cudaError_t __stdcall cudaDeviceDisablePeerAccess(int peerDevice); 
#line 7118
extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
#line 7153
extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
#line 7192
extern cudaError_t __stdcall cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 7227
extern cudaError_t __stdcall cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 7259
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
#line 7297
extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
#line 7326
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
#line 7397
extern cudaError_t __stdcall cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = 4294967295U); 
#line 7456
extern cudaError_t __stdcall cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
#line 7494
extern cudaError_t __stdcall cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 7534
extern cudaError_t __stdcall cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
#line 7560
extern cudaError_t __stdcall cudaUnbindTexture(const textureReference * texref); 
#line 7589
extern cudaError_t __stdcall cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
#line 7619
extern cudaError_t __stdcall cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
#line 7664
extern cudaError_t __stdcall cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 7689
extern cudaError_t __stdcall cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
#line 7724
extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
#line 7754
extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
#line 7969
extern cudaError_t __stdcall cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
#line 7988
extern cudaError_t __stdcall cudaDestroyTextureObject(cudaTextureObject_t texObject); 
#line 8008
extern cudaError_t __stdcall cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
#line 8028
extern cudaError_t __stdcall cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
#line 8049
extern cudaError_t __stdcall cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
#line 8094
extern cudaError_t __stdcall cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
#line 8113
extern cudaError_t __stdcall cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
#line 8132
extern cudaError_t __stdcall cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
#line 8166
extern cudaError_t __stdcall cudaDriverGetVersion(int * driverVersion); 
#line 8191
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 8238
extern cudaError_t __stdcall cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
#line 8335
extern cudaError_t __stdcall cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
#line 8368
extern cudaError_t __stdcall cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
#line 8393
extern cudaError_t __stdcall cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 8437
extern cudaError_t __stdcall cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
#line 8460
extern cudaError_t __stdcall cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
#line 8483
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 8525
extern cudaError_t __stdcall cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
#line 8548
extern cudaError_t __stdcall cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
#line 8571
extern cudaError_t __stdcall cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 8612
extern cudaError_t __stdcall cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
#line 8635
extern cudaError_t __stdcall cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
#line 8658
extern cudaError_t __stdcall cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 8696
extern cudaError_t __stdcall cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
#line 8720
extern cudaError_t __stdcall cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
#line 8757
extern cudaError_t __stdcall cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
#line 8784
extern cudaError_t __stdcall cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
#line 8812
extern cudaError_t __stdcall cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
#line 8843
extern cudaError_t __stdcall cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
#line 8874
extern cudaError_t __stdcall cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
#line 8905
extern cudaError_t __stdcall cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
#line 8939
extern cudaError_t __stdcall cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
#line 8970
extern cudaError_t __stdcall cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
#line 9002
extern cudaError_t __stdcall cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
#line 9033
extern cudaError_t __stdcall cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 9064
extern cudaError_t __stdcall cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 9090
extern cudaError_t __stdcall cudaGraphDestroyNode(cudaGraphNode_t node); 
#line 9126
extern cudaError_t __stdcall cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
#line 9160
extern cudaError_t __stdcall cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 9185
extern cudaError_t __stdcall cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
#line 9206
extern cudaError_t __stdcall cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
#line 9226
extern cudaError_t __stdcall cudaGraphDestroy(cudaGraph_t graph); 
#line 9231
extern cudaError_t __stdcall cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
#line 9476 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\cuda_runtime_api.h"
}
#line 104 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\channel_descriptor.h"
template< class T> __inline ::cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 105
{ 
#line 106
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 107
} 
#line 109
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 110
{ 
#line 111
int e = (((int)sizeof(unsigned short)) * 8); 
#line 113
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 114
} 
#line 116
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 117
{ 
#line 118
int e = (((int)sizeof(unsigned short)) * 8); 
#line 120
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 121
} 
#line 123
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 124
{ 
#line 125
int e = (((int)sizeof(unsigned short)) * 8); 
#line 127
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 128
} 
#line 130
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 131
{ 
#line 132
int e = (((int)sizeof(unsigned short)) * 8); 
#line 134
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 135
} 
#line 137
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 138
{ 
#line 139
int e = (((int)sizeof(char)) * 8); 
#line 144 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 146 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\channel_descriptor.h"
} 
#line 148
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 149
{ 
#line 150
int e = (((int)sizeof(signed char)) * 8); 
#line 152
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 153
} 
#line 155
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 156
{ 
#line 157
int e = (((int)sizeof(unsigned char)) * 8); 
#line 159
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 160
} 
#line 162
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 163
{ 
#line 164
int e = (((int)sizeof(signed char)) * 8); 
#line 166
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 167
} 
#line 169
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 170
{ 
#line 171
int e = (((int)sizeof(unsigned char)) * 8); 
#line 173
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 174
} 
#line 176
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 177
{ 
#line 178
int e = (((int)sizeof(signed char)) * 8); 
#line 180
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 181
} 
#line 183
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 184
{ 
#line 185
int e = (((int)sizeof(unsigned char)) * 8); 
#line 187
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 188
} 
#line 190
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 191
{ 
#line 192
int e = (((int)sizeof(signed char)) * 8); 
#line 194
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 195
} 
#line 197
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 198
{ 
#line 199
int e = (((int)sizeof(unsigned char)) * 8); 
#line 201
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 202
} 
#line 204
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 205
{ 
#line 206
int e = (((int)sizeof(short)) * 8); 
#line 208
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 209
} 
#line 211
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 212
{ 
#line 213
int e = (((int)sizeof(unsigned short)) * 8); 
#line 215
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 216
} 
#line 218
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 219
{ 
#line 220
int e = (((int)sizeof(short)) * 8); 
#line 222
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 223
} 
#line 225
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 226
{ 
#line 227
int e = (((int)sizeof(unsigned short)) * 8); 
#line 229
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 230
} 
#line 232
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 233
{ 
#line 234
int e = (((int)sizeof(short)) * 8); 
#line 236
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 237
} 
#line 239
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 240
{ 
#line 241
int e = (((int)sizeof(unsigned short)) * 8); 
#line 243
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 244
} 
#line 246
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 247
{ 
#line 248
int e = (((int)sizeof(short)) * 8); 
#line 250
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 251
} 
#line 253
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 254
{ 
#line 255
int e = (((int)sizeof(unsigned short)) * 8); 
#line 257
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 258
} 
#line 260
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 261
{ 
#line 262
int e = (((int)sizeof(int)) * 8); 
#line 264
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 265
} 
#line 267
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 268
{ 
#line 269
int e = (((int)sizeof(unsigned)) * 8); 
#line 271
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 272
} 
#line 274
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 275
{ 
#line 276
int e = (((int)sizeof(int)) * 8); 
#line 278
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 279
} 
#line 281
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 282
{ 
#line 283
int e = (((int)sizeof(unsigned)) * 8); 
#line 285
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 286
} 
#line 288
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 289
{ 
#line 290
int e = (((int)sizeof(int)) * 8); 
#line 292
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 293
} 
#line 295
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 296
{ 
#line 297
int e = (((int)sizeof(unsigned)) * 8); 
#line 299
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 300
} 
#line 302
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 303
{ 
#line 304
int e = (((int)sizeof(int)) * 8); 
#line 306
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 307
} 
#line 309
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 310
{ 
#line 311
int e = (((int)sizeof(unsigned)) * 8); 
#line 313
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 314
} 
#line 318
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 319
{ 
#line 320
int e = (((int)sizeof(long)) * 8); 
#line 322
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 323
} 
#line 325
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 326
{ 
#line 327
int e = (((int)sizeof(unsigned long)) * 8); 
#line 329
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 330
} 
#line 332
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 333
{ 
#line 334
int e = (((int)sizeof(long)) * 8); 
#line 336
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 337
} 
#line 339
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 340
{ 
#line 341
int e = (((int)sizeof(unsigned long)) * 8); 
#line 343
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 344
} 
#line 346
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 347
{ 
#line 348
int e = (((int)sizeof(long)) * 8); 
#line 350
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 351
} 
#line 353
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 354
{ 
#line 355
int e = (((int)sizeof(unsigned long)) * 8); 
#line 357
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 358
} 
#line 360
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 361
{ 
#line 362
int e = (((int)sizeof(long)) * 8); 
#line 364
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 365
} 
#line 367
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 368
{ 
#line 369
int e = (((int)sizeof(unsigned long)) * 8); 
#line 371
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 372
} 
#line 376 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 377
{ 
#line 378
int e = (((int)sizeof(float)) * 8); 
#line 380
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 381
} 
#line 383
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 384
{ 
#line 385
int e = (((int)sizeof(float)) * 8); 
#line 387
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 388
} 
#line 390
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 391
{ 
#line 392
int e = (((int)sizeof(float)) * 8); 
#line 394
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 395
} 
#line 397
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 398
{ 
#line 399
int e = (((int)sizeof(float)) * 8); 
#line 401
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 402
} 
#line 79 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 80
{ 
#line 81
cudaPitchedPtr s; 
#line 83
(s.ptr) = d; 
#line 84
(s.pitch) = p; 
#line 85
(s.xsize) = xsz; 
#line 86
(s.ysize) = ysz; 
#line 88
return s; 
#line 89
} 
#line 106
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 107
{ 
#line 108
cudaPos p; 
#line 110
(p.x) = x; 
#line 111
(p.y) = y; 
#line 112
(p.z) = z; 
#line 114
return p; 
#line 115
} 
#line 132
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 133
{ 
#line 134
cudaExtent e; 
#line 136
(e.width) = w; 
#line 137
(e.height) = h; 
#line 138
(e.depth) = d; 
#line 140
return e; 
#line 141
} 
#line 73 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x); 
#line 75
static __inline uchar1 make_uchar1(unsigned char x); 
#line 77
static __inline char2 make_char2(signed char x, signed char y); 
#line 79
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
#line 81
static __inline char3 make_char3(signed char x, signed char y, signed char z); 
#line 83
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
#line 85
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
#line 87
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
#line 89
static __inline short1 make_short1(short x); 
#line 91
static __inline ushort1 make_ushort1(unsigned short x); 
#line 93
static __inline short2 make_short2(short x, short y); 
#line 95
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
#line 97
static __inline short3 make_short3(short x, short y, short z); 
#line 99
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
#line 101
static __inline short4 make_short4(short x, short y, short z, short w); 
#line 103
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
#line 105
static __inline int1 make_int1(int x); 
#line 107
static __inline uint1 make_uint1(unsigned x); 
#line 109
static __inline int2 make_int2(int x, int y); 
#line 111
static __inline uint2 make_uint2(unsigned x, unsigned y); 
#line 113
static __inline int3 make_int3(int x, int y, int z); 
#line 115
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
#line 117
static __inline int4 make_int4(int x, int y, int z, int w); 
#line 119
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
#line 121
static __inline long1 make_long1(long x); 
#line 123
static __inline ulong1 make_ulong1(unsigned long x); 
#line 125
static __inline long2 make_long2(long x, long y); 
#line 127
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
#line 129
static __inline long3 make_long3(long x, long y, long z); 
#line 131
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
#line 133
static __inline long4 make_long4(long x, long y, long z, long w); 
#line 135
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
#line 137
static __inline float1 make_float1(float x); 
#line 139
static __inline float2 make_float2(float x, float y); 
#line 141
static __inline float3 make_float3(float x, float y, float z); 
#line 143
static __inline float4 make_float4(float x, float y, float z, float w); 
#line 145
static __inline longlong1 make_longlong1(__int64 x); 
#line 147
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x); 
#line 149
static __inline longlong2 make_longlong2(__int64 x, __int64 y); 
#line 151
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y); 
#line 153
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z); 
#line 155
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z); 
#line 157
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w); 
#line 159
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w); 
#line 161
static __inline double1 make_double1(double x); 
#line 163
static __inline double2 make_double2(double x, double y); 
#line 165
static __inline double3 make_double3(double x, double y, double z); 
#line 167
static __inline double4 make_double4(double x, double y, double z, double w); 
#line 73 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\vector_functions.hpp"
static __inline char1 make_char1(signed char x) 
#line 74
{ 
#line 75
char1 t; (t.x) = x; return t; 
#line 76
} 
#line 78
static __inline uchar1 make_uchar1(unsigned char x) 
#line 79
{ 
#line 80
uchar1 t; (t.x) = x; return t; 
#line 81
} 
#line 83
static __inline char2 make_char2(signed char x, signed char y) 
#line 84
{ 
#line 85
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 86
} 
#line 88
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 89
{ 
#line 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 91
} 
#line 93
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 94
{ 
#line 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 96
} 
#line 98
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 99
{ 
#line 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 101
} 
#line 103
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 104
{ 
#line 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 106
} 
#line 108
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 109
{ 
#line 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 111
} 
#line 113
static __inline short1 make_short1(short x) 
#line 114
{ 
#line 115
short1 t; (t.x) = x; return t; 
#line 116
} 
#line 118
static __inline ushort1 make_ushort1(unsigned short x) 
#line 119
{ 
#line 120
ushort1 t; (t.x) = x; return t; 
#line 121
} 
#line 123
static __inline short2 make_short2(short x, short y) 
#line 124
{ 
#line 125
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 126
} 
#line 128
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 129
{ 
#line 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 131
} 
#line 133
static __inline short3 make_short3(short x, short y, short z) 
#line 134
{ 
#line 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 136
} 
#line 138
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 139
{ 
#line 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 141
} 
#line 143
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 144
{ 
#line 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 146
} 
#line 148
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 149
{ 
#line 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 151
} 
#line 153
static __inline int1 make_int1(int x) 
#line 154
{ 
#line 155
int1 t; (t.x) = x; return t; 
#line 156
} 
#line 158
static __inline uint1 make_uint1(unsigned x) 
#line 159
{ 
#line 160
uint1 t; (t.x) = x; return t; 
#line 161
} 
#line 163
static __inline int2 make_int2(int x, int y) 
#line 164
{ 
#line 165
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 166
} 
#line 168
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 169
{ 
#line 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 171
} 
#line 173
static __inline int3 make_int3(int x, int y, int z) 
#line 174
{ 
#line 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 176
} 
#line 178
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 179
{ 
#line 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 181
} 
#line 183
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 184
{ 
#line 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 186
} 
#line 188
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 189
{ 
#line 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 191
} 
#line 193
static __inline long1 make_long1(long x) 
#line 194
{ 
#line 195
long1 t; (t.x) = x; return t; 
#line 196
} 
#line 198
static __inline ulong1 make_ulong1(unsigned long x) 
#line 199
{ 
#line 200
ulong1 t; (t.x) = x; return t; 
#line 201
} 
#line 203
static __inline long2 make_long2(long x, long y) 
#line 204
{ 
#line 205
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 206
} 
#line 208
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 209
{ 
#line 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 211
} 
#line 213
static __inline long3 make_long3(long x, long y, long z) 
#line 214
{ 
#line 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 216
} 
#line 218
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 219
{ 
#line 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 221
} 
#line 223
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 224
{ 
#line 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 226
} 
#line 228
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 229
{ 
#line 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 231
} 
#line 233
static __inline float1 make_float1(float x) 
#line 234
{ 
#line 235
float1 t; (t.x) = x; return t; 
#line 236
} 
#line 238
static __inline float2 make_float2(float x, float y) 
#line 239
{ 
#line 240
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 241
} 
#line 243
static __inline float3 make_float3(float x, float y, float z) 
#line 244
{ 
#line 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 246
} 
#line 248
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 249
{ 
#line 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 251
} 
#line 253
static __inline longlong1 make_longlong1(__int64 x) 
#line 254
{ 
#line 255
longlong1 t; (t.x) = x; return t; 
#line 256
} 
#line 258
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 259
{ 
#line 260
ulonglong1 t; (t.x) = x; return t; 
#line 261
} 
#line 263
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 264
{ 
#line 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 266
} 
#line 268
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 269
{ 
#line 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 271
} 
#line 273
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 274
{ 
#line 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 276
} 
#line 278
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 279
{ 
#line 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 281
} 
#line 283
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 284
{ 
#line 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 286
} 
#line 288
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 289
{ 
#line 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 291
} 
#line 293
static __inline double1 make_double1(double x) 
#line 294
{ 
#line 295
double1 t; (t.x) = x; return t; 
#line 296
} 
#line 298
static __inline double2 make_double2(double x, double y) 
#line 299
{ 
#line 300
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 301
} 
#line 303
static __inline double3 make_double3(double x, double y, double z) 
#line 304
{ 
#line 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 306
} 
#line 308
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 309
{ 
#line 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 311
} 
#line 14 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\errno.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
int *__cdecl _errno(); 
#line 22
errno_t __cdecl _set_errno(int _Value); 
#line 23
errno_t __cdecl _get_errno(int * _Value); 
#line 25
unsigned long *__cdecl __doserrno(); 
#line 28
errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 29
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 130 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\errno.h"
}__pragma( pack ( pop )) 
#line 14 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
const void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 26
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 40 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 47
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 60 "D:\\Soft\\Vistual Studio2017\\Community\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 67
const char *__cdecl strchr(const char * _Str, int _Val); 
#line 73
const char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 79
const char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 86
const __wchar_t *__cdecl wcschr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 92
const __wchar_t *__cdecl wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 99
const __wchar_t *__cdecl wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); 
#line 106
}__pragma( pack ( pop )) 
#line 14 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 35 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
static __inline errno_t __cdecl memcpy_s(void *const 
#line 36
_Destination, const rsize_t 
#line 37
_DestinationSize, const void *const 
#line 38
_Source, const rsize_t 
#line 39
_SourceSize) 
#line 41
{ 
#line 42
if (_SourceSize == (0)) 
#line 43
{ 
#line 44
return 0; 
#line 45
}  
#line 47
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 48
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
#line 49
{ 
#line 50
memset(_Destination, 0, _DestinationSize); 
#line 52
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 53
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 56
return 22; 
#line 57
}  
#pragma warning(suppress:4996)
memcpy(_Destination, _Source, _SourceSize); 
#line 60
return 0; 
#line 61
} 
#line 64
static __inline errno_t __cdecl memmove_s(void *const 
#line 65
_Destination, const rsize_t 
#line 66
_DestinationSize, const void *const 
#line 67
_Source, const rsize_t 
#line 68
_SourceSize) 
#line 70
{ 
#line 71
if (_SourceSize == (0)) 
#line 72
{ 
#line 73
return 0; 
#line 74
}  
#line 76
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 77
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 78
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 80
#pragma warning(suppress:4996)
memmove(_Destination, _Source, _SourceSize); 
#line 82
return 0; 
#line 83
} 
#line 89 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
}__pragma( pack ( pop )) 
#line 19 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 31
int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 79 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 87
int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 100 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
extern "C++" inline void *__cdecl memchr(void *
#line 101
_Pv, int 
#line 102
_C, size_t 
#line 103
_N) 
#line 105
{ 
#line 106
const void *const _Pvc = _Pv; 
#line 107
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
#line 108
} 
#line 114 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
}__pragma( pack ( pop )) 
#line 16 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 35
errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 42
errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 50
errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 58
__wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 79 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); 
#line 89 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscat_s ( _Destination, _Size, _Source ); }}
#line 97 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 105 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 109 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 114
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscpy_s ( _Destination, _Size, _Source ); }}
#line 120 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 128 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 131
size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 137
size_t __cdecl wcslen(const __wchar_t * _String); 
#line 150 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); 
#line 166 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
#line 167
_Source, size_t 
#line 168
_MaxCount) 
#line 170
{ 
#line 171
return (_Source == (0)) ? 0 : wcsnlen(_Source, _MaxCount); 
#line 172
} 
#line 176 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 183 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 192 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 198
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 205 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 214 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); 
#line 220
size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 226
__wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 243 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4141 4996)
#pragma warning(disable: 28719 28726 28727)
#line 247
static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
#line 248
_String, const __wchar_t *const 
#line 249
_Delimiter) 
#line 251
{ 
#line 252
return wcstok(_String, _Delimiter, 0); 
#line 253
} 
#line 261 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" 
#line 260
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
#line 261
wcstok(__wchar_t *
#line 262
_String, const __wchar_t *
#line 263
_Delimiter) throw() 
#line 265
{ 
#line 266
return wcstok(_String, _Delimiter, 0); 
#line 267
} 
#line 270 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 278 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcserror(int _ErrorNumber); 
#line 283
errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 289
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }}
#line 298 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl __wcserror(const __wchar_t * _String); 
#line 302
errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); 
#line 308
extern "C++" {template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 314 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 319
int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 325
int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 331
int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 338
errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); 
#line 345
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t _Value, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Destination, _Size, _Value, _MaxCount ); }}
#line 352 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 360 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsrev(__wchar_t * _String); 
#line 364
errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); 
#line 370
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _String ) [ _Size ], wchar_t _Value ) throw ( ) { return _wcsset_s ( _String, _Size, _Value ); }}
#line 376 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 383 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); 
#line 388
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }}
#line 393 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr(__wchar_t * _String); 
#line 399 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 405
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }}
#line 411 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); 
#line 419 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); 
#line 424
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }}
#line 429 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr(__wchar_t * _String); 
#line 435 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 441
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }}
#line 447 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); 
#line 456 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); 
#line 464
size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 472
int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 478
int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 485
int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 491
int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 498
int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 505
int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 513
int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 520
int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 535
extern "C++" {
#line 539
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
#line 540
{ 
#line 541
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
#line 542
} 
#line 545
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
#line 546
{ 
#line 547
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
#line 548
} 
#line 551
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
#line 552
{ 
#line 553
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
#line 554
} 
#line 558
inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
#line 559
{ 
#line 560
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
#line 561
} 
#line 563
}
#line 580 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsdup(const __wchar_t * _String); 
#line 592 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 598
int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 606
__wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 614
__wchar_t *__cdecl wcsrev(__wchar_t * _String); 
#line 620
__wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 627
__wchar_t *__cdecl wcslwr(__wchar_t * _String); 
#line 633
__wchar_t *__cdecl wcsupr(__wchar_t * _String); 
#line 638
int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 647 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
}__pragma( pack ( pop )) 
#line 19 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 35
errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 42
errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 48
errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 56
errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 64
char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 72 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 79
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcat_s ( _Destination, _Size, _Source ); }}
#line 87 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 95 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(pop)
#line 100 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 124
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcpy_s ( _Destination, _Size, _Source ); }}
#line 130 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 138 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(pop)
#line 141
size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 152 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
__declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 163 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strerror(const char * _ErrorMessage); 
#line 168
errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 174
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], char const * _ErrorMessage ) throw ( ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 182 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strerror(int _ErrorMessage); 
#line 186
extern "C++" {template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) throw ( ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 193 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 199
int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 205
int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 212
int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 219
size_t __cdecl strlen(const char * _Str); 
#line 224
errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 229
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strlwr_s ( _String, _Size ); }}
#line 234 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strlwr(char * _String); 
#line 240 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 246
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strlwr_s_l ( _String, _Size, _Locale ); }}
#line 252 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 259 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 266 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 275 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 282
int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 289
int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 297
int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 304
int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 312
int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 319
int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 326
size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 331
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 338 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 355 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 371 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
static __inline size_t __cdecl strnlen_s(const char *
#line 372
_String, size_t 
#line 373
_MaxCount) 
#line 375
{ 
#line 376
return (_String == (0)) ? 0 : strnlen(_String, _MaxCount); 
#line 377
} 
#line 382 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 389
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Destination ) [ _Size ], int _Value, size_t _Count ) throw ( ) { return _strnset_s ( _Destination, _Size, _Value, _Count ); }}
#line 396 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 405 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
const char *__cdecl strpbrk(const char * _Str, const char * _Control); 
#line 410
char *__cdecl _strrev(char * _Str); 
#line 415
errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 421
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Destination ) [ _Size ], int _Value ) throw ( ) { return _strset_s ( _Destination, _Size, _Value ); }}
#line 427 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strset(char * _Destination, int _Value); 
#line 434 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 440
char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 446
errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 451
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strupr_s ( _String, _Size ); }}
#line 456 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strupr(char * _String); 
#line 462 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 468
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strupr_s_l ( _String, _Size, _Locale ); }}
#line 474 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 483 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 491
size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 501
extern "C++" {
#line 504
inline char *__cdecl strchr(char *const _String, const int _Ch) 
#line 505
{ 
#line 506
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
#line 507
} 
#line 510
inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
#line 511
{ 
#line 512
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
#line 513
} 
#line 516
inline char *__cdecl strrchr(char *const _String, const int _Ch) 
#line 517
{ 
#line 518
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
#line 519
} 
#line 522
inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
#line 523
{ 
#line 524
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
#line 525
} 
#line 526
}
#line 536 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strdup(const char * _String); 
#line 543
int __cdecl strcmpi(const char * _String1, const char * _String2); 
#line 549
int __cdecl stricmp(const char * _String1, const char * _String2); 
#line 555
char *__cdecl strlwr(char * _String); 
#line 560
int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 567
char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 574
char *__cdecl strrev(char * _String); 
#line 579
char *__cdecl strset(char * _String, int _Value); 
#line 584
char *__cdecl strupr(char * _String); 
#line 592 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
}__pragma( pack ( pop )) 
#line 13 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 22
struct tm { 
#line 24
int tm_sec; 
#line 25
int tm_min; 
#line 26
int tm_hour; 
#line 27
int tm_mday; 
#line 28
int tm_mon; 
#line 29
int tm_year; 
#line 30
int tm_wday; 
#line 31
int tm_yday; 
#line 32
int tm_isdst; 
#line 33
}; 
#line 44
__wchar_t *__cdecl _wasctime(const tm * _Tm); 
#line 50
errno_t __cdecl _wasctime_s(__wchar_t * _Buffer, size_t _SizeInWords, const tm * _Tm); 
#line 56
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return _wasctime_s ( _Buffer, _Size, _Time ); }}
#line 65 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
size_t __cdecl wcsftime(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm); 
#line 74
size_t __cdecl _wcsftime_l(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm, _locale_t _Locale); 
#line 84
__wchar_t *__cdecl _wctime32(const __time32_t * _Time); 
#line 89
errno_t __cdecl _wctime32_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time32_t * _Time); 
#line 95
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _wctime32_s ( _Buffer, _Size, _Time ); }}
#line 104 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wctime64(const __time64_t * _Time); 
#line 109
errno_t __cdecl _wctime64_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time64_t * _Time); 
#line 114
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _wctime64_s ( _Buffer, _Size, _Time ); }}
#line 121 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrdate_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 126
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrdate_s ( _Buffer, _Size ); }}
#line 131 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrdate(__wchar_t * _Buffer); 
#line 137 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrtime_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 142
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrtime_s ( _Buffer, _Size ); }}
#line 147 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrtime(__wchar_t * _Buffer); 
#line 160 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#line 185
static __inline __wchar_t *__cdecl _wctime(const time_t *const 
#line 186
_Time) 
#line 187
{ 
#line 188
return _wctime64(_Time); 
#line 189
} 
#line 192
static __inline errno_t __cdecl _wctime_s(__wchar_t *const 
#line 193
_Buffer, const size_t 
#line 194
_SizeInWords, const time_t *const 
#line 195
_Time) 
#line 197
{ 
#line 198
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 199
} 
#line 208 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
}
#line 203 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
#pragma warning(pop)
#line 208 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( pop )) 
#line 15 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
typedef long clock_t; 
#line 26
struct _timespec32 { 
#line 28
__time32_t tv_sec; 
#line 29
long tv_nsec; 
#line 30
}; 
#line 32
struct _timespec64 { 
#line 34
__time64_t tv_sec; 
#line 35
long tv_nsec; 
#line 36
}; 
#line 39
struct timespec { 
#line 41
time_t tv_sec; 
#line 42
long tv_nsec; 
#line 43
}; 
#line 62 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
int *__cdecl __daylight(); 
#line 68
long *__cdecl __dstbias(); 
#line 74
long *__cdecl __timezone(); 
#line 80
char **__cdecl __tzname(); 
#line 85
errno_t __cdecl _get_daylight(int * _Daylight); 
#line 90
errno_t __cdecl _get_dstbias(long * _DaylightSavingsBias); 
#line 95
errno_t __cdecl _get_timezone(long * _TimeZone); 
#line 100
errno_t __cdecl _get_tzname(size_t * _ReturnValue, char * _Buffer, size_t _SizeInBytes, int _Index); 
#line 117
char *__cdecl asctime(const tm * _Tm); 
#line 124
errno_t __cdecl asctime_s(char * _Buffer, size_t _SizeInBytes, const tm * _Tm); 
#line 131 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl asctime_s ( char ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return asctime_s ( _Buffer, _Size, _Time ); }}
#line 138 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
clock_t __cdecl clock(); 
#line 143
char *__cdecl _ctime32(const __time32_t * _Time); 
#line 148
errno_t __cdecl _ctime32_s(char * _Buffer, size_t _SizeInBytes, const __time32_t * _Time); 
#line 154
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime32_s ( char ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _ctime32_s ( _Buffer, _Size, _Time ); }}
#line 163 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _ctime64(const __time64_t * _Time); 
#line 168
errno_t __cdecl _ctime64_s(char * _Buffer, size_t _SizeInBytes, const __time64_t * _Time); 
#line 174
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime64_s ( char ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _ctime64_s ( _Buffer, _Size, _Time ); }}
#line 181 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
double __cdecl _difftime32(__time32_t _Time1, __time32_t _Time2); 
#line 187
double __cdecl _difftime64(__time64_t _Time1, __time64_t _Time2); 
#line 194
tm *__cdecl _gmtime32(const __time32_t * _Time); 
#line 199
errno_t __cdecl _gmtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 206
tm *__cdecl _gmtime64(const __time64_t * _Time); 
#line 211
errno_t __cdecl _gmtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 218
tm *__cdecl _localtime32(const __time32_t * _Time); 
#line 223
errno_t __cdecl _localtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 230
tm *__cdecl _localtime64(const __time64_t * _Time); 
#line 235
errno_t __cdecl _localtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 241
__time32_t __cdecl _mkgmtime32(tm * _Tm); 
#line 246
__time64_t __cdecl _mkgmtime64(tm * _Tm); 
#line 251
__time32_t __cdecl _mktime32(tm * _Tm); 
#line 256
__time64_t __cdecl _mktime64(tm * _Tm); 
#line 262
size_t __cdecl strftime(char * _Buffer, size_t _SizeInBytes, const char * _Format, const tm * _Tm); 
#line 271
size_t __cdecl _strftime_l(char * _Buffer, size_t _MaxSize, const char * _Format, const tm * _Tm, _locale_t _Locale); 
#line 280
errno_t __cdecl _strdate_s(char * _Buffer, size_t _SizeInBytes); 
#line 285
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strdate_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strdate_s ( _Buffer, _Size ); }}
#line 290 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _strdate(char * _Buffer); 
#line 296 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
errno_t __cdecl _strtime_s(char * _Buffer, size_t _SizeInBytes); 
#line 301
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strtime_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strtime_s ( _Buffer, _Size ); }}
#line 306 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _strtime(char * _Buffer); 
#line 311 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
__time32_t __cdecl _time32(__time32_t * _Time); 
#line 315
__time64_t __cdecl _time64(__time64_t * _Time); 
#line 321
int __cdecl _timespec32_get(_timespec32 * _Ts, int _Base); 
#line 328
int __cdecl _timespec64_get(_timespec64 * _Ts, int _Base); 
#line 342
void __cdecl _tzset(); 
#line 345
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 346
_getsystime(tm * _Tm); 
#line 350
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 351
_setsystime(tm * _Tm, unsigned _Milliseconds); 
#line 476 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
static __inline char *__cdecl ctime(const time_t *const 
#line 477
_Time) 
#line 479
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _ctime64(_Time); 
#pragma warning(pop)
} 
#line 487
static __inline double __cdecl difftime(const time_t 
#line 488
_Time1, const time_t 
#line 489
_Time2) 
#line 491
{ 
#line 492
return _difftime64(_Time1, _Time2); 
#line 493
} 
#line 496
static __inline tm *__cdecl gmtime(const time_t *const 
#line 497
_Time) 
#line 498
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _gmtime64(_Time); 
#pragma warning(pop)
} 
#line 506
static __inline tm *__cdecl localtime(const time_t *const 
#line 507
_Time) 
#line 509
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _localtime64(_Time); 
#pragma warning(pop)
} 
#line 517
static __inline time_t __cdecl _mkgmtime(tm *const 
#line 518
_Tm) 
#line 520
{ 
#line 521
return _mkgmtime64(_Tm); 
#line 522
} 
#line 525
static __inline time_t __cdecl mktime(tm *const 
#line 526
_Tm) 
#line 528
{ 
#line 529
return _mktime64(_Tm); 
#line 530
} 
#line 532
static __inline time_t __cdecl time(time_t *const 
#line 533
_Time) 
#line 535
{ 
#line 536
return _time64(_Time); 
#line 537
} 
#line 540
static __inline int __cdecl timespec_get(timespec *const 
#line 541
_Ts, const int 
#line 542
_Base) 
#line 544
{ 
#line 545
return _timespec64_get((_timespec64 *)_Ts, _Base); 
#line 546
} 
#line 550
static __inline errno_t __cdecl ctime_s(char *const 
#line 551
_Buffer, const size_t 
#line 552
_SizeInBytes, const time_t *const 
#line 553
_Time) 
#line 555
{ 
#line 556
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 557
} 
#line 560
static __inline errno_t __cdecl gmtime_s(tm *const 
#line 561
_Tm, const time_t *const 
#line 562
_Time) 
#line 564
{ 
#line 565
return _gmtime64_s(_Tm, _Time); 
#line 566
} 
#line 569
static __inline errno_t __cdecl localtime_s(tm *const 
#line 570
_Tm, const time_t *const 
#line 571
_Time) 
#line 573
{ 
#line 574
return _localtime64_s(_Tm, _Time); 
#line 575
} 
#line 594 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
void __cdecl tzset(); 
#line 601 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
}__pragma( pack ( pop )) 
#line 80 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt/common_functions.h"
extern "C" {
#line 83 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt/common_functions.h"
extern clock_t __cdecl clock(); 
#line 88 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt/common_functions.h"
extern void *__cdecl memset(void *, int, size_t); 
#line 89
extern void *__cdecl memcpy(void *, const void *, size_t); 
#line 91
}
#line 49 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
#pragma warning(disable:C4819)
#line 109 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern "C" {
#line 193 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __cdecl abs(int); 
#line 194
extern long __cdecl labs(long); 
#line 195
extern __int64 llabs(__int64); 
#line 245 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl fabs(double x); 
#line 286
extern __inline float fabsf(float x); 
#line 290 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern inline int min(int, int); 
#line 292
extern inline unsigned umin(unsigned, unsigned); 
#line 293
extern inline __int64 llmin(__int64, __int64); 
#line 294
extern inline unsigned __int64 ullmin(unsigned __int64, unsigned __int64); 
#line 317 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl fminf(float x, float y); 
#line 337 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl fmin(double x, double y); 
#line 342 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern inline int max(int, int); 
#line 344
extern inline unsigned umax(unsigned, unsigned); 
#line 345
extern inline __int64 llmax(__int64, __int64); 
#line 346
extern inline unsigned __int64 ullmax(unsigned __int64, unsigned __int64); 
#line 369 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl fmaxf(float x, float y); 
#line 389 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl fmax(double, double); 
#line 431 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl sin(double x); 
#line 464
extern double __cdecl cos(double x); 
#line 483 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern void sincos(double x, double * sptr, double * cptr); 
#line 499
extern void sincosf(float x, float * sptr, float * cptr); 
#line 544 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl tan(double x); 
#line 613
extern double __cdecl sqrt(double x); 
#line 685 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double rsqrt(double x); 
#line 755
extern float rsqrtf(float x); 
#line 813 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl log2(double x); 
#line 838 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl exp2(double x); 
#line 863 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl exp2f(float x); 
#line 888 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double exp10(double x); 
#line 911
extern float exp10f(float x); 
#line 959 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl expm1(double x); 
#line 1004 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl expm1f(float x); 
#line 1059 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl log2f(float x); 
#line 1111 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl log10(double x); 
#line 1182
extern double __cdecl log(double x); 
#line 1278 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl log1p(double x); 
#line 1375 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl log1pf(float x); 
#line 1448 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl floor(double x); 
#line 1487
extern double __cdecl exp(double x); 
#line 1518
extern double __cdecl cosh(double x); 
#line 1548
extern double __cdecl sinh(double x); 
#line 1578
extern double __cdecl tanh(double x); 
#line 1615 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl acosh(double x); 
#line 1653 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl acoshf(float x); 
#line 1669 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl asinh(double x); 
#line 1685 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl asinhf(float x); 
#line 1739 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl atanh(double x); 
#line 1793 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl atanhf(float x); 
#line 1850 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl ldexp(double x, int exp); 
#line 1906
extern __inline float ldexpf(float x, int exp); 
#line 1960 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl logb(double x); 
#line 2015 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl logbf(float x); 
#line 2045 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __cdecl ilogb(double x); 
#line 2075 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __cdecl ilogbf(float x); 
#line 2151 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl scalbn(double x, int n); 
#line 2227 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl scalbnf(float x, int n); 
#line 2303 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl scalbln(double x, long n); 
#line 2379 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl scalblnf(float x, long n); 
#line 2455 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl frexp(double x, int * nptr); 
#line 2530
extern __inline float frexpf(float x, int * nptr); 
#line 2546 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl round(double x); 
#line 2563 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl roundf(float x); 
#line 2581 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern long __cdecl lround(double x); 
#line 2599 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern long __cdecl lroundf(float x); 
#line 2617 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern __int64 __cdecl llround(double x); 
#line 2635 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern __int64 __cdecl llroundf(float x); 
#line 2687 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl rintf(float x); 
#line 2704 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern long __cdecl lrint(double x); 
#line 2721 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern long __cdecl lrintf(float x); 
#line 2738 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrint(double x); 
#line 2755 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrintf(float x); 
#line 2808 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl nearbyint(double x); 
#line 2861 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl nearbyintf(float x); 
#line 2921 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl ceil(double x); 
#line 2935 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl trunc(double x); 
#line 2950 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl truncf(float x); 
#line 2976 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl fdim(double x, double y); 
#line 3002 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl fdimf(float x, float y); 
#line 3036 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl atan2(double y, double x); 
#line 3067
extern double __cdecl atan(double x); 
#line 3090
extern double __cdecl acos(double x); 
#line 3122
extern double __cdecl asin(double x); 
#line 3165 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl hypot(double x, double y); 
#line 3220 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double rhypot(double x, double y); 
#line 3264 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
static __inline float __cdecl hypotf(float x, float y); 
#line 3318 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float rhypotf(float x, float y); 
#line 3362
extern double __cdecl norm3d(double a, double b, double c); 
#line 3413
extern double rnorm3d(double a, double b, double c); 
#line 3462
extern double __cdecl norm4d(double a, double b, double c, double d); 
#line 3518
extern double rnorm4d(double a, double b, double c, double d); 
#line 3563
extern double norm(int dim, const double * t); 
#line 3614
extern double rnorm(int dim, const double * t); 
#line 3666
extern float rnormf(int dim, const float * a); 
#line 3710
extern float normf(int dim, const float * a); 
#line 3755
extern float norm3df(float a, float b, float c); 
#line 3806
extern float rnorm3df(float a, float b, float c); 
#line 3855
extern float norm4df(float a, float b, float c, float d); 
#line 3911
extern float rnorm4df(float a, float b, float c, float d); 
#line 4000 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl cbrt(double x); 
#line 4086 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl cbrtf(float x); 
#line 4139 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double rcbrt(double x); 
#line 4189
extern float rcbrtf(float x); 
#line 4249
extern double sinpi(double x); 
#line 4309
extern float sinpif(float x); 
#line 4361
extern double cospi(double x); 
#line 4413
extern float cospif(float x); 
#line 4443
extern void sincospi(double x, double * sptr, double * cptr); 
#line 4473
extern void sincospif(float x, float * sptr, float * cptr); 
#line 4785 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl pow(double x, double y); 
#line 4841
extern double __cdecl modf(double x, double * iptr); 
#line 4900
extern double __cdecl fmod(double x, double y); 
#line 4988 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl remainder(double x, double y); 
#line 5078 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl remainderf(float x, float y); 
#line 5132 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl remquo(double x, double y, int * quo); 
#line 5186 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl remquof(float x, float y, int * quo); 
#line 5225 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl j0(double x); 
#line 5267 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float j0f(float x); 
#line 5328 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl j1(double x); 
#line 5389 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float j1f(float x); 
#line 5432 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl jn(int n, double x); 
#line 5475 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float jnf(int n, float x); 
#line 5527 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl y0(double x); 
#line 5579 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float y0f(float x); 
#line 5631 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl y1(double x); 
#line 5683 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float y1f(float x); 
#line 5736 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl yn(int n, double x); 
#line 5789 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float ynf(int n, float x); 
#line 5816
extern double __cdecl cyl_bessel_i0(double x); 
#line 5842
extern float cyl_bessel_i0f(float x); 
#line 5869
extern double __cdecl cyl_bessel_i1(double x); 
#line 5895
extern float cyl_bessel_i1f(float x); 
#line 5980 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl erf(double x); 
#line 6062 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl erff(float x); 
#line 6124 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double erfinv(double y); 
#line 6181
extern float erfinvf(float y); 
#line 6222 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl erfc(double x); 
#line 6260 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl erfcf(float x); 
#line 6388 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl lgamma(double x); 
#line 6449 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double erfcinv(double y); 
#line 6505
extern float erfcinvf(float y); 
#line 6563
extern double normcdfinv(double y); 
#line 6621
extern float normcdfinvf(float y); 
#line 6664
extern double normcdf(double y); 
#line 6707
extern float normcdff(float y); 
#line 6782
extern double erfcx(double x); 
#line 6857
extern float erfcxf(float x); 
#line 6993 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl lgammaf(float x); 
#line 7102 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl tgamma(double x); 
#line 7211 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl tgammaf(float x); 
#line 7224 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl copysign(double x, double y); 
#line 7237 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl copysignf(float x, float y); 
#line 7274 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl nextafter(double x, double y); 
#line 7311 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl nextafterf(float x, float y); 
#line 7327 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl nan(const char * tagp); 
#line 7343 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl nanf(const char * tagp); 
#line 7348 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __isinff(float); 
#line 7349
extern int __isnanf(float); 
#line 7359 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __finite(double); 
#line 7360
extern int __finitef(float); 
#line 7361
extern int __signbit(double); 
#line 7362
extern int __isnan(double); 
#line 7363
extern int __isinf(double); 
#line 7366 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __signbitf(float); 
#line 7527 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern double __cdecl fma(double x, double y, double z); 
#line 7685 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl fmaf(float x, float y, float z); 
#line 7694 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __signbitl(long double); 
#line 7700 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern int __finitel(long double); 
#line 7701
extern int __isinfl(long double); 
#line 7702
extern int __isnanl(long double); 
#line 7706 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
extern float __cdecl acosf(float); 
#line 7707
extern float __cdecl asinf(float); 
#line 7708
extern float __cdecl atanf(float); 
#line 7709
extern float __cdecl atan2f(float, float); 
#line 7710
extern float __cdecl cosf(float); 
#line 7711
extern float __cdecl sinf(float); 
#line 7712
extern float __cdecl tanf(float); 
#line 7713
extern float __cdecl coshf(float); 
#line 7714
extern float __cdecl sinhf(float); 
#line 7715
extern float __cdecl tanhf(float); 
#line 7716
extern float __cdecl expf(float); 
#line 7717
extern float __cdecl logf(float); 
#line 7718
extern float __cdecl log10f(float); 
#line 7719
extern float __cdecl modff(float, float *); 
#line 7720
extern float __cdecl powf(float, float); 
#line 7721
extern float __cdecl sqrtf(float); 
#line 7722
extern float __cdecl ceilf(float); 
#line 7723
extern float __cdecl floorf(float); 
#line 7724
extern float __cdecl fmodf(float, float); 
#line 8857 "c:\\program files\\nvidia gpu computing toolkit\\cuda\\v10.1\\include\\crt\\math_functions.h"
}
#line 14 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 16
#pragma warning(push)
#pragma warning(disable:4738)
#pragma warning(disable:4820)
#line 25
struct _exception { 
#line 27
int type; 
#line 28
char *name; 
#line 29
double arg1; 
#line 30
double arg2; 
#line 31
double retval; 
#line 32
}; 
#line 39
struct _complex { 
#line 41
double x, y; 
#line 42
}; 
#line 61 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
typedef float float_t; 
#line 62
typedef double double_t; 
#line 80 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
extern const double _HUGE; 
#line 171 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
void __cdecl _fperrraise(int _Except); 
#line 173
short __cdecl _dclass(double _X); 
#line 174
short __cdecl _ldclass(long double _X); 
#line 175
short __cdecl _fdclass(float _X); 
#line 177
int __cdecl _dsign(double _X); 
#line 178
int __cdecl _ldsign(long double _X); 
#line 179
int __cdecl _fdsign(float _X); 
#line 181
int __cdecl _dpcomp(double _X, double _Y); 
#line 182
int __cdecl _ldpcomp(long double _X, long double _Y); 
#line 183
int __cdecl _fdpcomp(float _X, float _Y); 
#line 185
short __cdecl _dtest(double * _Px); 
#line 186
short __cdecl _ldtest(long double * _Px); 
#line 187
short __cdecl _fdtest(float * _Px); 
#line 189
short __cdecl _d_int(double * _Px, short _Xexp); 
#line 190
short __cdecl _ld_int(long double * _Px, short _Xexp); 
#line 191
short __cdecl _fd_int(float * _Px, short _Xexp); 
#line 193
short __cdecl _dscale(double * _Px, long _Lexp); 
#line 194
short __cdecl _ldscale(long double * _Px, long _Lexp); 
#line 195
short __cdecl _fdscale(float * _Px, long _Lexp); 
#line 197
short __cdecl _dunscale(short * _Pex, double * _Px); 
#line 198
short __cdecl _ldunscale(short * _Pex, long double * _Px); 
#line 199
short __cdecl _fdunscale(short * _Pex, float * _Px); 
#line 201
short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
#line 202
short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
#line 203
short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 
#line 205
short __cdecl _dnorm(unsigned short * _Ps); 
#line 206
short __cdecl _fdnorm(unsigned short * _Ps); 
#line 208
double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
#line 209
long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
#line 210
float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 
#line 212
double __cdecl _dlog(double _X, int _Baseflag); 
#line 213
long double __cdecl _ldlog(long double _X, int _Baseflag); 
#line 214
float __cdecl _fdlog(float _X, int _Baseflag); 
#line 216
double __cdecl _dsin(double _X, unsigned _Qoff); 
#line 217
long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
#line 218
float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 225
typedef 
#line 222
union { 
#line 223
unsigned short _Sh[4]; 
#line 224
double _Val; 
#line 225
} _double_val; 
#line 232
typedef 
#line 229
union { 
#line 230
unsigned short _Sh[2]; 
#line 231
float _Val; 
#line 232
} _float_val; 
#line 239
typedef 
#line 236
union { 
#line 237
unsigned short _Sh[4]; 
#line 238
long double _Val; 
#line 239
} _ldouble_val; 
#line 247
typedef 
#line 242
union { 
#line 243
unsigned short _Word[4]; 
#line 244
float _Float; 
#line 245
double _Double; 
#line 246
long double _Long_double; 
#line 247
} _float_const; 
#line 249
extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
#line 250
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
#line 251
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 
#line 253
extern const _float_const _Eps_C, _Rteps_C; 
#line 254
extern const _float_const _FEps_C, _FRteps_C; 
#line 255
extern const _float_const _LEps_C, _LRteps_C; 
#line 257
extern const double _Zero_C, _Xbig_C; 
#line 258
extern const float _FZero_C, _FXbig_C; 
#line 259
extern const long double _LZero_C, _LXbig_C; 
#line 288
extern "C++" {
#line 290
inline int fpclassify(float _X) throw() 
#line 291
{ 
#line 292
return _fdtest(&_X); 
#line 293
} 
#line 295
inline int fpclassify(double _X) throw() 
#line 296
{ 
#line 297
return _dtest(&_X); 
#line 298
} 
#line 300
inline int fpclassify(long double _X) throw() 
#line 301
{ 
#line 302
return _ldtest(&_X); 
#line 303
} 
#line 305
inline bool signbit(float _X) throw() 
#line 306
{ 
#line 307
return _fdsign(_X) != 0; 
#line 308
} 
#line 310
inline bool signbit(double _X) throw() 
#line 311
{ 
#line 312
return _dsign(_X) != 0; 
#line 313
} 
#line 315
inline bool signbit(long double _X) throw() 
#line 316
{ 
#line 317
return _ldsign(_X) != 0; 
#line 318
} 
#line 320
inline int _fpcomp(float _X, float _Y) throw() 
#line 321
{ 
#line 322
return _fdpcomp(_X, _Y); 
#line 323
} 
#line 325
inline int _fpcomp(double _X, double _Y) throw() 
#line 326
{ 
#line 327
return _dpcomp(_X, _Y); 
#line 328
} 
#line 330
inline int _fpcomp(long double _X, long double _Y) throw() 
#line 331
{ 
#line 332
return _ldpcomp(_X, _Y); 
#line 333
} 
#line 335
template< class _Trc, class _Tre> struct _Combined_type { 
#line 337
typedef float _Type; 
#line 338
}; 
#line 340
template<> struct _Combined_type< float, double>  { 
#line 342
typedef double _Type; 
#line 343
}; 
#line 345
template<> struct _Combined_type< float, long double>  { 
#line 347
typedef long double _Type; 
#line 348
}; 
#line 350
template< class _Ty, class _T2> struct _Real_widened { 
#line 352
typedef long double _Type; 
#line 353
}; 
#line 355
template<> struct _Real_widened< float, float>  { 
#line 357
typedef float _Type; 
#line 358
}; 
#line 360
template<> struct _Real_widened< float, double>  { 
#line 362
typedef double _Type; 
#line 363
}; 
#line 365
template<> struct _Real_widened< double, float>  { 
#line 367
typedef double _Type; 
#line 368
}; 
#line 370
template<> struct _Real_widened< double, double>  { 
#line 372
typedef double _Type; 
#line 373
}; 
#line 375
template< class _Ty> struct _Real_type { 
#line 377
typedef double _Type; 
#line 378
}; 
#line 380
template<> struct _Real_type< float>  { 
#line 382
typedef float _Type; 
#line 383
}; 
#line 385
template<> struct _Real_type< long double>  { 
#line 387
typedef long double _Type; 
#line 388
}; 
#line 390
template < class _T1, class _T2 >
      inline int _fpcomp ( _T1 _X, _T2 _Y ) throw ( )
    {
        typedef typename _Combined_type < float,
            typename _Real_widened <
            typename _Real_type < _T1 > :: _Type,
            typename _Real_type < _T2 > :: _Type > :: _Type > :: _Type _Tw;
        return _fpcomp ( ( _Tw ) _X, ( _Tw ) _Y );
    }
#line 400
template < class _Ty >
      inline bool isfinite ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) <= 0;
    }
#line 406
template < class _Ty >
      inline bool isinf ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 1;
    }
#line 412
template < class _Ty >
      inline bool isnan ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 2;
    }
#line 418
template < class _Ty >
      inline bool isnormal ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == ( - 1 );
    }
#line 424
template < class _Ty1, class _Ty2 >
      inline bool isgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 4 ) != 0;
    }
#line 430
template < class _Ty1, class _Ty2 >
      inline bool isgreaterequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 2 | 4 ) ) != 0;
    }
#line 436
template < class _Ty1, class _Ty2 >
      inline bool isless ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 1 ) != 0;
    }
#line 442
template < class _Ty1, class _Ty2 >
      inline bool islessequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 2 ) ) != 0;
    }
#line 448
template < class _Ty1, class _Ty2 >
      inline bool islessgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 4 ) ) != 0;
    }
#line 454
template < class _Ty1, class _Ty2 >
      inline bool isunordered ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return _fpcomp ( _X, _Y ) == 0;
    }
#line 459
}
#line 466 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
int __cdecl abs(int _X); 
#line 467
long __cdecl labs(long _X); 
#line 468
__int64 __cdecl llabs(__int64 _X); 
#line 470
double __cdecl acos(double _X); 
#line 471
double __cdecl asin(double _X); 
#line 472
double __cdecl atan(double _X); 
#line 473
double __cdecl atan2(double _Y, double _X); 
#line 475
double __cdecl cos(double _X); 
#line 476
double __cdecl cosh(double _X); 
#line 477
double __cdecl exp(double _X); 
#line 478
double __cdecl fabs(double _X); 
#line 479
double __cdecl fmod(double _X, double _Y); 
#line 480
double __cdecl log(double _X); 
#line 481
double __cdecl log10(double _X); 
#line 482
double __cdecl pow(double _X, double _Y); 
#line 483
double __cdecl sin(double _X); 
#line 484
double __cdecl sinh(double _X); 
#line 485
double __cdecl sqrt(double _X); 
#line 486
double __cdecl tan(double _X); 
#line 487
double __cdecl tanh(double _X); 
#line 489
double __cdecl acosh(double _X); 
#line 490
double __cdecl asinh(double _X); 
#line 491
double __cdecl atanh(double _X); 
#line 492
double __cdecl atof(const char * _String); 
#line 493
double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 494
double __cdecl _cabs(_complex _Complex_value); 
#line 495
double __cdecl cbrt(double _X); 
#line 496
double __cdecl ceil(double _X); 
#line 497
double __cdecl _chgsign(double _X); 
#line 498
double __cdecl copysign(double _Number, double _Sign); 
#line 499
double __cdecl _copysign(double _Number, double _Sign); 
#line 500
double __cdecl erf(double _X); 
#line 501
double __cdecl erfc(double _X); 
#line 502
double __cdecl exp2(double _X); 
#line 503
double __cdecl expm1(double _X); 
#line 504
double __cdecl fdim(double _X, double _Y); 
#line 505
double __cdecl floor(double _X); 
#line 506
double __cdecl fma(double _X, double _Y, double _Z); 
#line 507
double __cdecl fmax(double _X, double _Y); 
#line 508
double __cdecl fmin(double _X, double _Y); 
#line 509
double __cdecl frexp(double _X, int * _Y); 
#line 510
double __cdecl hypot(double _X, double _Y); 
#line 511
double __cdecl _hypot(double _X, double _Y); 
#line 512
int __cdecl ilogb(double _X); 
#line 513
double __cdecl ldexp(double _X, int _Y); 
#line 514
double __cdecl lgamma(double _X); 
#line 515
__int64 __cdecl llrint(double _X); 
#line 516
__int64 __cdecl llround(double _X); 
#line 517
double __cdecl log1p(double _X); 
#line 518
double __cdecl log2(double _X); 
#line 519
double __cdecl logb(double _X); 
#line 520
long __cdecl lrint(double _X); 
#line 521
long __cdecl lround(double _X); 
#line 523
int __cdecl _matherr(_exception * _Except); 
#line 525
double __cdecl modf(double _X, double * _Y); 
#line 526
double __cdecl nan(const char * _X); 
#line 527
double __cdecl nearbyint(double _X); 
#line 528
double __cdecl nextafter(double _X, double _Y); 
#line 529
double __cdecl nexttoward(double _X, long double _Y); 
#line 530
double __cdecl remainder(double _X, double _Y); 
#line 531
double __cdecl remquo(double _X, double _Y, int * _Z); 
#line 532
double __cdecl rint(double _X); 
#line 533
double __cdecl round(double _X); 
#line 534
double __cdecl scalbln(double _X, long _Y); 
#line 535
double __cdecl scalbn(double _X, int _Y); 
#line 536
double __cdecl tgamma(double _X); 
#line 537
double __cdecl trunc(double _X); 
#line 538
double __cdecl _j0(double _X); 
#line 539
double __cdecl _j1(double _X); 
#line 540
double __cdecl _jn(int _X, double _Y); 
#line 541
double __cdecl _y0(double _X); 
#line 542
double __cdecl _y1(double _X); 
#line 543
double __cdecl _yn(int _X, double _Y); 
#line 545
float __cdecl acoshf(float _X); 
#line 546
float __cdecl asinhf(float _X); 
#line 547
float __cdecl atanhf(float _X); 
#line 548
float __cdecl cbrtf(float _X); 
#line 549
float __cdecl _chgsignf(float _X); 
#line 550
float __cdecl copysignf(float _Number, float _Sign); 
#line 551
float __cdecl _copysignf(float _Number, float _Sign); 
#line 552
float __cdecl erff(float _X); 
#line 553
float __cdecl erfcf(float _X); 
#line 554
float __cdecl expm1f(float _X); 
#line 555
float __cdecl exp2f(float _X); 
#line 556
float __cdecl fdimf(float _X, float _Y); 
#line 557
float __cdecl fmaf(float _X, float _Y, float _Z); 
#line 558
float __cdecl fmaxf(float _X, float _Y); 
#line 559
float __cdecl fminf(float _X, float _Y); 
#line 560
float __cdecl _hypotf(float _X, float _Y); 
#line 561
int __cdecl ilogbf(float _X); 
#line 562
float __cdecl lgammaf(float _X); 
#line 563
__int64 __cdecl llrintf(float _X); 
#line 564
__int64 __cdecl llroundf(float _X); 
#line 565
float __cdecl log1pf(float _X); 
#line 566
float __cdecl log2f(float _X); 
#line 567
float __cdecl logbf(float _X); 
#line 568
long __cdecl lrintf(float _X); 
#line 569
long __cdecl lroundf(float _X); 
#line 570
float __cdecl nanf(const char * _X); 
#line 571
float __cdecl nearbyintf(float _X); 
#line 572
float __cdecl nextafterf(float _X, float _Y); 
#line 573
float __cdecl nexttowardf(float _X, long double _Y); 
#line 574
float __cdecl remainderf(float _X, float _Y); 
#line 575
float __cdecl remquof(float _X, float _Y, int * _Z); 
#line 576
float __cdecl rintf(float _X); 
#line 577
float __cdecl roundf(float _X); 
#line 578
float __cdecl scalblnf(float _X, long _Y); 
#line 579
float __cdecl scalbnf(float _X, int _Y); 
#line 580
float __cdecl tgammaf(float _X); 
#line 581
float __cdecl truncf(float _X); 
#line 591 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl _logbf(float _X); 
#line 592
float __cdecl _nextafterf(float _X, float _Y); 
#line 593
int __cdecl _finitef(float _X); 
#line 594
int __cdecl _isnanf(float _X); 
#line 595
int __cdecl _fpclassf(float _X); 
#line 597
int __cdecl _set_FMA3_enable(int _Flag); 
#line 598
int __cdecl _get_FMA3_enable(); 
#line 611 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl acosf(float _X); 
#line 612
float __cdecl asinf(float _X); 
#line 613
float __cdecl atan2f(float _Y, float _X); 
#line 614
float __cdecl atanf(float _X); 
#line 615
float __cdecl ceilf(float _X); 
#line 616
float __cdecl cosf(float _X); 
#line 617
float __cdecl coshf(float _X); 
#line 618
float __cdecl expf(float _X); 
#line 670 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__inline float __cdecl fabsf(float _X) 
#line 671
{ 
#line 672
return (float)fabs(_X); 
#line 673
} 
#line 679 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl floorf(float _X); 
#line 680
float __cdecl fmodf(float _X, float _Y); 
#line 696 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__inline float __cdecl frexpf(float _X, int *_Y) 
#line 697
{ 
#line 698
return (float)frexp(_X, _Y); 
#line 699
} 
#line 701
__inline float __cdecl hypotf(float _X, float _Y) 
#line 702
{ 
#line 703
return _hypotf(_X, _Y); 
#line 704
} 
#line 706
__inline float __cdecl ldexpf(float _X, int _Y) 
#line 707
{ 
#line 708
return (float)ldexp(_X, _Y); 
#line 709
} 
#line 713
float __cdecl log10f(float _X); 
#line 714
float __cdecl logf(float _X); 
#line 715
float __cdecl modff(float _X, float * _Y); 
#line 716
float __cdecl powf(float _X, float _Y); 
#line 717
float __cdecl sinf(float _X); 
#line 718
float __cdecl sinhf(float _X); 
#line 719
float __cdecl sqrtf(float _X); 
#line 720
float __cdecl tanf(float _X); 
#line 721
float __cdecl tanhf(float _X); 
#line 775 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
long double __cdecl acoshl(long double _X); 
#line 777
__inline long double __cdecl acosl(long double _X) 
#line 778
{ 
#line 779
return acos((double)_X); 
#line 780
} 
#line 782
long double __cdecl asinhl(long double _X); 
#line 784
__inline long double __cdecl asinl(long double _X) 
#line 785
{ 
#line 786
return asin((double)_X); 
#line 787
} 
#line 789
__inline long double __cdecl atan2l(long double _Y, long double _X) 
#line 790
{ 
#line 791
return atan2((double)_Y, (double)_X); 
#line 792
} 
#line 794
long double __cdecl atanhl(long double _X); 
#line 796
__inline long double __cdecl atanl(long double _X) 
#line 797
{ 
#line 798
return atan((double)_X); 
#line 799
} 
#line 801
long double __cdecl cbrtl(long double _X); 
#line 803
__inline long double __cdecl ceill(long double _X) 
#line 804
{ 
#line 805
return ceil((double)_X); 
#line 806
} 
#line 808
__inline long double __cdecl _chgsignl(long double _X) 
#line 809
{ 
#line 810
return _chgsign((double)_X); 
#line 811
} 
#line 813
long double __cdecl copysignl(long double _Number, long double _Sign); 
#line 815
__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
#line 816
{ 
#line 817
return _copysign((double)_Number, (double)_Sign); 
#line 818
} 
#line 820
__inline long double __cdecl coshl(long double _X) 
#line 821
{ 
#line 822
return cosh((double)_X); 
#line 823
} 
#line 825
__inline long double __cdecl cosl(long double _X) 
#line 826
{ 
#line 827
return cos((double)_X); 
#line 828
} 
#line 830
long double __cdecl erfl(long double _X); 
#line 831
long double __cdecl erfcl(long double _X); 
#line 833
__inline long double __cdecl expl(long double _X) 
#line 834
{ 
#line 835
return exp((double)_X); 
#line 836
} 
#line 838
long double __cdecl exp2l(long double _X); 
#line 839
long double __cdecl expm1l(long double _X); 
#line 841
__inline long double __cdecl fabsl(long double _X) 
#line 842
{ 
#line 843
return fabs((double)_X); 
#line 844
} 
#line 846
long double __cdecl fdiml(long double _X, long double _Y); 
#line 848
__inline long double __cdecl floorl(long double _X) 
#line 849
{ 
#line 850
return floor((double)_X); 
#line 851
} 
#line 853
long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
#line 854
long double __cdecl fmaxl(long double _X, long double _Y); 
#line 855
long double __cdecl fminl(long double _X, long double _Y); 
#line 857
__inline long double __cdecl fmodl(long double _X, long double _Y) 
#line 858
{ 
#line 859
return fmod((double)_X, (double)_Y); 
#line 860
} 
#line 862
__inline long double __cdecl frexpl(long double _X, int *_Y) 
#line 863
{ 
#line 864
return frexp((double)_X, _Y); 
#line 865
} 
#line 867
int __cdecl ilogbl(long double _X); 
#line 869
__inline long double __cdecl _hypotl(long double _X, long double _Y) 
#line 870
{ 
#line 871
return _hypot((double)_X, (double)_Y); 
#line 872
} 
#line 874
__inline long double __cdecl hypotl(long double _X, long double _Y) 
#line 875
{ 
#line 876
return _hypot((double)_X, (double)_Y); 
#line 877
} 
#line 879
__inline long double __cdecl ldexpl(long double _X, int _Y) 
#line 880
{ 
#line 881
return ldexp((double)_X, _Y); 
#line 882
} 
#line 884
long double __cdecl lgammal(long double _X); 
#line 885
__int64 __cdecl llrintl(long double _X); 
#line 886
__int64 __cdecl llroundl(long double _X); 
#line 888
__inline long double __cdecl logl(long double _X) 
#line 889
{ 
#line 890
return log((double)_X); 
#line 891
} 
#line 893
__inline long double __cdecl log10l(long double _X) 
#line 894
{ 
#line 895
return log10((double)_X); 
#line 896
} 
#line 898
long double __cdecl log1pl(long double _X); 
#line 899
long double __cdecl log2l(long double _X); 
#line 900
long double __cdecl logbl(long double _X); 
#line 901
long __cdecl lrintl(long double _X); 
#line 902
long __cdecl lroundl(long double _X); 
#line 904
__inline long double __cdecl modfl(long double _X, long double *_Y) 
#line 905
{ 
#line 906
double _F, _I; 
#line 907
_F = modf((double)_X, &_I); 
#line 908
(*_Y) = _I; 
#line 909
return _F; 
#line 910
} 
#line 912
long double __cdecl nanl(const char * _X); 
#line 913
long double __cdecl nearbyintl(long double _X); 
#line 914
long double __cdecl nextafterl(long double _X, long double _Y); 
#line 915
long double __cdecl nexttowardl(long double _X, long double _Y); 
#line 917
__inline long double __cdecl powl(long double _X, long double _Y) 
#line 918
{ 
#line 919
return pow((double)_X, (double)_Y); 
#line 920
} 
#line 922
long double __cdecl remainderl(long double _X, long double _Y); 
#line 923
long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
#line 924
long double __cdecl rintl(long double _X); 
#line 925
long double __cdecl roundl(long double _X); 
#line 926
long double __cdecl scalblnl(long double _X, long _Y); 
#line 927
long double __cdecl scalbnl(long double _X, int _Y); 
#line 929
__inline long double __cdecl sinhl(long double _X) 
#line 930
{ 
#line 931
return sinh((double)_X); 
#line 932
} 
#line 934
__inline long double __cdecl sinl(long double _X) 
#line 935
{ 
#line 936
return sin((double)_X); 
#line 937
} 
#line 939
__inline long double __cdecl sqrtl(long double _X) 
#line 940
{ 
#line 941
return sqrt((double)_X); 
#line 942
} 
#line 944
__inline long double __cdecl tanhl(long double _X) 
#line 945
{ 
#line 946
return tanh((double)_X); 
#line 947
} 
#line 949
__inline long double __cdecl tanl(long double _X) 
#line 950
{ 
#line 951
return tan((double)_X); 
#line 952
} 
#line 954
long double __cdecl tgammal(long double _X); 
#line 955
long double __cdecl truncl(long double _X); 
#line 976 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
extern double HUGE; 
#line 981 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
double __cdecl j0(double _X); 
#line 982
double __cdecl j1(double _X); 
#line 983
double __cdecl jn(int _X, double _Y); 
#line 984
double __cdecl y0(double _X); 
#line 985
double __cdecl y1(double _X); 
#line 986
double __cdecl yn(int _X, double _Y); 
#line 994 "D:\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
}
#line 992
#pragma warning(pop)
#line 994
__pragma( pack ( pop )) 
#line