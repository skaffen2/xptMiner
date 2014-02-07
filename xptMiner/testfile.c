# 1 "xptMiner/keccak.c"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "xptMiner/keccak.c"
# 33 "xptMiner/keccak.c"
# 1 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 324 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h" 3 4
typedef int wchar_t;
# 34 "xptMiner/keccak.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 25 "/usr/include/string.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 385 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 386 "/usr/include/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 207 "/usr/include/string.h" 3 4

# 232 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 278 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 311 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 338 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 393 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 423 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 441 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 485 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 513 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 530 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 553 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 628 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 629 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/bits/string2.h" 1 3 4
# 51 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 27 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 122 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/bits/byteswap.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 52 "/usr/include/bits/string2.h" 2 3 4
# 393 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 945 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c1 (const char *__s, int __reject);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c1 (const char *__s, int __reject)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c2 (const char *__s, int __reject1,
         int __reject2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c2 (const char *__s, int __reject1, int __reject2)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strcspn_c3 (const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strcspn_c3 (const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1021 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c1 (const char *__s, int __accept);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c1 (const char *__s, int __accept)
{
  size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c2 (const char *__s, int __accept1, int __accept2)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline __attribute__ ((__gnu_inline__)) size_t __strspn_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) size_t
__strspn_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{
  size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1097 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c2 (const char *__s, int __accept1,
        int __accept2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c2 (const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strpbrk_c3 (const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strpbrk_c3 (const char *__s, int __accept1, int __accept2, int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1147 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1179 "/usr/include/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, const char *__delim);
# 1197 "/usr/include/bits/string2.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_1c (char **__s, char __reject);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_1c (char **__s, char __reject)
{
  char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline __attribute__ ((__gnu_inline__)) char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline __attribute__ ((__gnu_inline__)) char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1273 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4


# 464 "/usr/include/stdlib.h" 3 4


extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

# 968 "/usr/include/stdlib.h" 3 4

# 1274 "/usr/include/bits/string2.h" 2 3 4




extern char *__strdup (const char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 1297 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
# 632 "/usr/include/string.h" 2 3 4
# 640 "/usr/include/string.h" 3 4

# 35 "xptMiner/keccak.c" 2

# 1 "xptMiner/sph_keccak.h" 1
# 43 "xptMiner/sph_keccak.h"
# 1 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h" 1 3 4
# 44 "xptMiner/sph_keccak.h" 2
# 1 "xptMiner/sph_types.h" 1
# 50 "xptMiner/sph_types.h"
# 1 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 38 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 2 3 4
# 161 "/usr/include/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib64/gcc/x86_64-suse-linux/4.8/include-fixed/limits.h" 2 3 4
# 51 "xptMiner/sph_types.h" 2
# 863 "xptMiner/sph_types.h"
typedef unsigned int sph_u32;
typedef int sph_s32;
# 889 "xptMiner/sph_types.h"
typedef unsigned long sph_u64;
typedef long sph_s64;
# 1212 "xptMiner/sph_types.h"
static inline sph_u32
sph_bswap32(sph_u32 x)
{
 __asm__ __volatile__ ("bswapl %0" : "=r" (x) : "0" (x));
 return x;
}



static inline sph_u64
sph_bswap64(sph_u64 x)
{
 __asm__ __volatile__ ("bswapq %0" : "=r" (x) : "0" (x));
 return x;
}
# 1332 "xptMiner/sph_types.h"
static inline void
sph_enc16be(void *dst, unsigned val)
{
 ((unsigned char *)dst)[0] = (val >> 8);
 ((unsigned char *)dst)[1] = val;
}

static inline unsigned
sph_dec16be(const void *src)
{
 return ((unsigned)(((const unsigned char *)src)[0]) << 8)
  | (unsigned)(((const unsigned char *)src)[1]);
}

static inline void
sph_enc16le(void *dst, unsigned val)
{
 ((unsigned char *)dst)[0] = val;
 ((unsigned char *)dst)[1] = val >> 8;
}

static inline unsigned
sph_dec16le(const void *src)
{
 return (unsigned)(((const unsigned char *)src)[0])
  | ((unsigned)(((const unsigned char *)src)[1]) << 8);
}







static inline void
sph_enc32be(void *dst, sph_u32 val)
{



 val = sph_bswap32(val);

 *(sph_u32 *)dst = val;
# 1394 "xptMiner/sph_types.h"
}
# 1403 "xptMiner/sph_types.h"
static inline void
sph_enc32be_aligned(void *dst, sph_u32 val)
{

 *(sph_u32 *)dst = sph_bswap32(val);
# 1416 "xptMiner/sph_types.h"
}







static inline sph_u32
sph_dec32be(const void *src)
{



 return sph_bswap32(*(const sph_u32 *)src);
# 1454 "xptMiner/sph_types.h"
}
# 1463 "xptMiner/sph_types.h"
static inline sph_u32
sph_dec32be_aligned(const void *src)
{

 return sph_bswap32(*(const sph_u32 *)src);
# 1476 "xptMiner/sph_types.h"
}







static inline void
sph_enc32le(void *dst, sph_u32 val)
{





 *(sph_u32 *)dst = val;
# 1512 "xptMiner/sph_types.h"
}
# 1521 "xptMiner/sph_types.h"
static inline void
sph_enc32le_aligned(void *dst, sph_u32 val)
{

 *(sph_u32 *)dst = val;
# 1534 "xptMiner/sph_types.h"
}







static inline sph_u32
sph_dec32le(const void *src)
{





 return *(const sph_u32 *)src;
# 1605 "xptMiner/sph_types.h"
}
# 1614 "xptMiner/sph_types.h"
static inline sph_u32
sph_dec32le_aligned(const void *src)
{

 return *(const sph_u32 *)src;
# 1643 "xptMiner/sph_types.h"
}
# 1653 "xptMiner/sph_types.h"
static inline void
sph_enc64be(void *dst, sph_u64 val)
{



 val = sph_bswap64(val);

 *(sph_u64 *)dst = val;
# 1689 "xptMiner/sph_types.h"
}
# 1698 "xptMiner/sph_types.h"
static inline void
sph_enc64be_aligned(void *dst, sph_u64 val)
{

 *(sph_u64 *)dst = sph_bswap64(val);
# 1715 "xptMiner/sph_types.h"
}







static inline sph_u64
sph_dec64be(const void *src)
{



 return sph_bswap64(*(const sph_u64 *)src);
# 1761 "xptMiner/sph_types.h"
}
# 1770 "xptMiner/sph_types.h"
static inline sph_u64
sph_dec64be_aligned(const void *src)
{

 return sph_bswap64(*(const sph_u64 *)src);
# 1787 "xptMiner/sph_types.h"
}







static inline void
sph_enc64le(void *dst, sph_u64 val)
{





 *(sph_u64 *)dst = val;
# 1831 "xptMiner/sph_types.h"
}
# 1840 "xptMiner/sph_types.h"
static inline void
sph_enc64le_aligned(void *dst, sph_u64 val)
{

 *(sph_u64 *)dst = val;
# 1857 "xptMiner/sph_types.h"
}







static inline sph_u64
sph_dec64le(const void *src)
{





 return *(const sph_u64 *)src;
# 1925 "xptMiner/sph_types.h"
}
# 1934 "xptMiner/sph_types.h"
static inline sph_u64
sph_dec64le_aligned(const void *src)
{

 return *(const sph_u64 *)src;
# 1970 "xptMiner/sph_types.h"
}
# 45 "xptMiner/sph_keccak.h" 2
# 76 "xptMiner/sph_keccak.h"
typedef struct {

 unsigned char buf[144];
 size_t ptr, lim;
 union {

  sph_u64 wide[25];

  sph_u32 narrow[50];
 } u;

} sph_keccak_context;




typedef sph_keccak_context sph_keccak224_context;




typedef sph_keccak_context sph_keccak256_context;




typedef sph_keccak_context sph_keccak384_context;




typedef sph_keccak_context sph_keccak512_context;







void sph_keccak224_init(void *cc);
# 125 "xptMiner/sph_keccak.h"
void sph_keccak224(void *cc, const void *data, size_t len);
# 136 "xptMiner/sph_keccak.h"
void sph_keccak224_close(void *cc, void *dst);
# 151 "xptMiner/sph_keccak.h"
void sph_keccak224_addbits_and_close(
 void *cc, unsigned ub, unsigned n, void *dst);







void sph_keccak256_init(void *cc);
# 170 "xptMiner/sph_keccak.h"
void sph_keccak256(void *cc, const void *data, size_t len);
# 181 "xptMiner/sph_keccak.h"
void sph_keccak256_close(void *cc, void *dst);
# 196 "xptMiner/sph_keccak.h"
void sph_keccak256_addbits_and_close(
 void *cc, unsigned ub, unsigned n, void *dst);







void sph_keccak384_init(void *cc);
# 215 "xptMiner/sph_keccak.h"
void sph_keccak384(void *cc, const void *data, size_t len);
# 226 "xptMiner/sph_keccak.h"
void sph_keccak384_close(void *cc, void *dst);
# 241 "xptMiner/sph_keccak.h"
void sph_keccak384_addbits_and_close(
 void *cc, unsigned ub, unsigned n, void *dst);







void sph_keccak512_init(void *cc);
# 260 "xptMiner/sph_keccak.h"
void sph_keccak512(void *cc, const void *data, size_t len);
# 271 "xptMiner/sph_keccak.h"
void sph_keccak512_close(void *cc, void *dst);
# 286 "xptMiner/sph_keccak.h"
void sph_keccak512_addbits_and_close(
 void *cc, unsigned ub, unsigned n, void *dst);


void keccak_core_prepare(sph_keccak512_context *kc, const void *data, unsigned long long *stateOut);
void keccak_core_opt(sph_keccak512_context *kc, unsigned long long* keccakPre, unsigned long long w1, unsigned long long* dst);


unsigned long long keccak256_maxcoin_opt_v(const unsigned long long *data);
# 37 "xptMiner/keccak.c" 2
# 138 "xptMiner/keccak.c"
static const sph_u64 RC[] = {
 ((sph_u64)(0x0000000000000001UL)), ((sph_u64)(0x0000000000008082UL)),
 ((sph_u64)(0x800000000000808AUL)), ((sph_u64)(0x8000000080008000UL)),
 ((sph_u64)(0x000000000000808BUL)), ((sph_u64)(0x0000000080000001UL)),
 ((sph_u64)(0x8000000080008081UL)), ((sph_u64)(0x8000000000008009UL)),
 ((sph_u64)(0x000000000000008AUL)), ((sph_u64)(0x0000000000000088UL)),
 ((sph_u64)(0x0000000080008009UL)), ((sph_u64)(0x000000008000000AUL)),
 ((sph_u64)(0x000000008000808BUL)), ((sph_u64)(0x800000000000008BUL)),
 ((sph_u64)(0x8000000000008089UL)), ((sph_u64)(0x8000000000008003UL)),
 ((sph_u64)(0x8000000000008002UL)), ((sph_u64)(0x8000000000000080UL)),
 ((sph_u64)(0x000000000000800AUL)), ((sph_u64)(0x800000008000000AUL)),
 ((sph_u64)(0x8000000080008081UL)), ((sph_u64)(0x8000000000008080UL)),
 ((sph_u64)(0x0000000080000001UL)), ((sph_u64)(0x8000000080008008UL))
};
# 1527 "xptMiner/keccak.c"
static void
keccak_init(sph_keccak_context *kc, unsigned out_size)
{
 int i;


 for (i = 0; i < 25; i ++)
  kc->u.wide[i] = 0;



 kc->u.wide[ 1] = ((sph_u64)(0xFFFFFFFFFFFFFFFFUL));
 kc->u.wide[ 2] = ((sph_u64)(0xFFFFFFFFFFFFFFFFUL));
 kc->u.wide[ 8] = ((sph_u64)(0xFFFFFFFFFFFFFFFFUL));
 kc->u.wide[12] = ((sph_u64)(0xFFFFFFFFFFFFFFFFUL));
 kc->u.wide[17] = ((sph_u64)(0xFFFFFFFFFFFFFFFFUL));
 kc->u.wide[20] = ((sph_u64)(0xFFFFFFFFFFFFFFFFUL));
# 1566 "xptMiner/keccak.c"
 kc->ptr = 0;
 kc->lim = 200 - (out_size >> 2);
}

static void keccak_core(sph_keccak_context *kc, const void *data, size_t len, size_t lim)
{
 unsigned char *buf;
 size_t ptr;


  buf = kc->buf;
 ptr = kc->ptr;

 if (len < (lim - ptr)) {
  memcpy(buf + ptr, data, len);
  kc->ptr = ptr + len;
  return;
 }

 ;
 while (len > 0) {
  size_t clen;

  clen = (lim - ptr);
  if (clen > len)
   clen = len;
  memcpy(buf + ptr, data, clen);
  ptr += clen;
  data = (const unsigned char *)data + clen;
  len -= clen;
  if (ptr == lim) {
   do { size_t j; for (j = 0; j < (lim); j += 8) { kc->u.wide[j >> 3] ^= sph_dec64le_aligned(buf + j); } } while (0);
   do { int j; for (j = 0; j < 24; j += 8) { do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 6])); (tt1 = (kc->u.wide[11]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 9])); (tt3 = (kc->u.wide[14]) ^ (kc->u.wide[19])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 7])); (tt1 = (kc->u.wide[12]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[22])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 5])); (tt3 = (kc->u.wide[10]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 3]) ^ (kc->u.wide[ 8])); (tt1 = (kc->u.wide[13]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 6])); (tt3 = (kc->u.wide[11]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 9])); (tt1 = (kc->u.wide[14]) ^ (kc->u.wide[19])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 7])); (tt3 = (kc->u.wide[12]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[22])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 5])); (tt1 = (kc->u.wide[10]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 3]) ^ (kc->u.wide[ 8])); (tt3 = (kc->u.wide[13]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t0); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t0); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t0); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t0); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t1); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t1); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t1); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t1); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t1); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t2); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t2); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t2); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t2); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t2); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t3); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t3); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t3); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t3); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t4); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t4); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t4); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t4); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t4); } while (0); do { ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (36)) | (((kc->u.wide[ 5])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (3)) | (((kc->u.wide[10])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (41)) | (((kc->u.wide[15])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (18)) | (((kc->u.wide[20])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (1)) | (((kc->u.wide[ 1])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (44)) | (((kc->u.wide[ 6])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (10)) | (((kc->u.wide[11])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (45)) | (((kc->u.wide[16])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (2)) | (((kc->u.wide[21])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (62)) | (((kc->u.wide[ 2])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (6)) | (((kc->u.wide[ 7])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (43)) | (((kc->u.wide[12])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (15)) | (((kc->u.wide[17])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (61)) | (((kc->u.wide[22])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (28)) | (((kc->u.wide[ 3])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (55)) | (((kc->u.wide[ 8])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (25)) | (((kc->u.wide[13])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (21)) | (((kc->u.wide[18])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (56)) | (((kc->u.wide[23])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (27)) | (((kc->u.wide[ 4])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (20)) | (((kc->u.wide[ 9])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (39)) | (((kc->u.wide[14])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (8)) | (((kc->u.wide[19])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (14)) | (((kc->u.wide[24])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[12])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) | (kc->u.wide[12])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[18])); (c1 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) & (kc->u.wide[24])); (c2 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[ 6])); (c4 = (kc->u.wide[24]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[ 6]) = c1); ((kc->u.wide[12]) = c2); ((kc->u.wide[18]) = c3); ((kc->u.wide[24]) = c4); (bnn = ((~(kc->u.wide[22])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[10])); (c0 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[16])); (c1 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | bnn); (c2 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[ 3])); (c3 = (kc->u.wide[16]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) & (kc->u.wide[ 9])); (c4 = (kc->u.wide[22]) ^ kt); } while (0); ((kc->u.wide[ 3]) = c0); ((kc->u.wide[ 9]) = c1); ((kc->u.wide[10]) = c2); ((kc->u.wide[16]) = c3); ((kc->u.wide[22]) = c4); (bnn = ((~(kc->u.wide[19])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) | (kc->u.wide[13])); (c0 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) & (kc->u.wide[19])); (c1 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[20])); (c2 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 1])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[ 7])); (c4 = (kc->u.wide[20]) ^ kt); } while (0); ((kc->u.wide[ 1]) = c0); ((kc->u.wide[ 7]) = c1); ((kc->u.wide[13]) = c2); ((kc->u.wide[19]) = c3); ((kc->u.wide[20]) = c4); (bnn = ((~(kc->u.wide[17])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) & (kc->u.wide[11])); (c0 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) | (kc->u.wide[17])); (c1 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[23])); (c2 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) & (kc->u.wide[ 4])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) | (kc->u.wide[ 5])); (c4 = (kc->u.wide[23]) ^ kt); } while (0); ((kc->u.wide[ 4]) = c0); ((kc->u.wide[ 5]) = c1); ((kc->u.wide[11]) = c2); ((kc->u.wide[17]) = c3); ((kc->u.wide[23]) = c4); (bnn = ((~(kc->u.wide[ 8])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[14])); (c0 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[15])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[21])); (c2 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) | (kc->u.wide[ 2])); (c3 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) & (kc->u.wide[ 8])); (c4 = (kc->u.wide[21]) ^ kt); } while (0); ((kc->u.wide[ 2]) = c0); ((kc->u.wide[ 8]) = c1); ((kc->u.wide[14]) = c2); ((kc->u.wide[15]) = c3); ((kc->u.wide[21]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 0]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 9])); (tt1 = (kc->u.wide[ 7]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[24]) ^ (kc->u.wide[22])); (tt3 = (kc->u.wide[20]) ^ (kc->u.wide[23])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[12]) ^ (kc->u.wide[10])); (tt1 = (kc->u.wide[13]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[14])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 3])); (tt3 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[18]) ^ (kc->u.wide[16])); (tt1 = (kc->u.wide[19]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 9])); (tt3 = (kc->u.wide[ 7]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[24]) ^ (kc->u.wide[22])); (tt1 = (kc->u.wide[20]) ^ (kc->u.wide[23])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[12]) ^ (kc->u.wide[10])); (tt3 = (kc->u.wide[13]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[14])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 3])); (tt1 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[18]) ^ (kc->u.wide[16])); (tt3 = (kc->u.wide[19]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t0); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t0); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t0); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t0); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t1); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t1); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t1); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t1); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t1); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t2); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t2); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t2); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t2); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t2); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t3); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t3); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t3); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t3); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t3); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t4); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t4); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t4); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t4); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t4); } while (0); do { ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (36)) | (((kc->u.wide[ 3])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (3)) | (((kc->u.wide[ 1])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (41)) | (((kc->u.wide[ 4])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (18)) | (((kc->u.wide[ 2])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (1)) | (((kc->u.wide[ 6])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (44)) | (((kc->u.wide[ 9])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (10)) | (((kc->u.wide[ 7])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (45)) | (((kc->u.wide[ 5])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (2)) | (((kc->u.wide[ 8])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (62)) | (((kc->u.wide[12])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (6)) | (((kc->u.wide[10])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (43)) | (((kc->u.wide[13])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (15)) | (((kc->u.wide[11])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (61)) | (((kc->u.wide[14])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (28)) | (((kc->u.wide[18])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (55)) | (((kc->u.wide[16])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (25)) | (((kc->u.wide[19])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (21)) | (((kc->u.wide[17])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (56)) | (((kc->u.wide[15])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (27)) | (((kc->u.wide[24])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (20)) | (((kc->u.wide[22])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (39)) | (((kc->u.wide[20])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (8)) | (((kc->u.wide[23])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (14)) | (((kc->u.wide[21])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[13])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[13])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[17])); (c1 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) & (kc->u.wide[21])); (c2 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[ 9])); (c4 = (kc->u.wide[21]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[ 9]) = c1); ((kc->u.wide[13]) = c2); ((kc->u.wide[17]) = c3); ((kc->u.wide[21]) = c4); (bnn = ((~(kc->u.wide[14])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[ 1])); (c0 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[ 5])); (c1 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | bnn); (c2 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[18])); (c3 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) & (kc->u.wide[22])); (c4 = (kc->u.wide[14]) ^ kt); } while (0); ((kc->u.wide[18]) = c0); ((kc->u.wide[22]) = c1); ((kc->u.wide[ 1]) = c2); ((kc->u.wide[ 5]) = c3); ((kc->u.wide[14]) = c4); (bnn = ((~(kc->u.wide[23])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[10]) | (kc->u.wide[19])); (c0 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) & (kc->u.wide[23])); (c1 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[ 2])); (c2 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[ 6])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[10])); (c4 = (kc->u.wide[ 2]) ^ kt); } while (0); ((kc->u.wide[ 6]) = c0); ((kc->u.wide[10]) = c1); ((kc->u.wide[19]) = c2); ((kc->u.wide[23]) = c3); ((kc->u.wide[ 2]) = c4); (bnn = ((~(kc->u.wide[11])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) & (kc->u.wide[ 7])); (c0 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) | (kc->u.wide[11])); (c1 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[15])); (c2 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[24])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) | (kc->u.wide[ 3])); (c4 = (kc->u.wide[15]) ^ kt); } while (0); ((kc->u.wide[24]) = c0); ((kc->u.wide[ 3]) = c1); ((kc->u.wide[ 7]) = c2); ((kc->u.wide[11]) = c3); ((kc->u.wide[15]) = c4); (bnn = ((~(kc->u.wide[16])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[20])); (c0 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 4])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[ 8])); (c2 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) | (kc->u.wide[12])); (c3 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) & (kc->u.wide[16])); (c4 = (kc->u.wide[ 8]) ^ kt); } while (0); ((kc->u.wide[12]) = c0); ((kc->u.wide[16]) = c1); ((kc->u.wide[20]) = c2); ((kc->u.wide[ 4]) = c3); ((kc->u.wide[ 8]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 1]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 9]) ^ (kc->u.wide[22])); (tt1 = (kc->u.wide[10]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[21]) ^ (kc->u.wide[14])); (tt3 = (kc->u.wide[ 2]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[13]) ^ (kc->u.wide[ 1])); (tt1 = (kc->u.wide[19]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[18])); (tt3 = (kc->u.wide[ 6]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[17]) ^ (kc->u.wide[ 5])); (tt1 = (kc->u.wide[23]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 9]) ^ (kc->u.wide[22])); (tt3 = (kc->u.wide[10]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[21]) ^ (kc->u.wide[14])); (tt1 = (kc->u.wide[ 2]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[13]) ^ (kc->u.wide[ 1])); (tt3 = (kc->u.wide[19]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[18])); (tt1 = (kc->u.wide[ 6]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[17]) ^ (kc->u.wide[ 5])); (tt3 = (kc->u.wide[23]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t0); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t0); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t0); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t0); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t1); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t1); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t1); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t1); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t1); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t2); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t2); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t2); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t2); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t2); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t3); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t3); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t3); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t3); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t3); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t4); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t4); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t4); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t4); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t4); } while (0); do { ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (36)) | (((kc->u.wide[18])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (3)) | (((kc->u.wide[ 6])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (41)) | (((kc->u.wide[24])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (18)) | (((kc->u.wide[12])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (1)) | (((kc->u.wide[ 9])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (44)) | (((kc->u.wide[22])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (10)) | (((kc->u.wide[10])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (45)) | (((kc->u.wide[ 3])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (2)) | (((kc->u.wide[16])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (62)) | (((kc->u.wide[13])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (6)) | (((kc->u.wide[ 1])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (43)) | (((kc->u.wide[19])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (15)) | (((kc->u.wide[ 7])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (61)) | (((kc->u.wide[20])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (28)) | (((kc->u.wide[17])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (55)) | (((kc->u.wide[ 5])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (25)) | (((kc->u.wide[23])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (21)) | (((kc->u.wide[11])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (56)) | (((kc->u.wide[ 4])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (27)) | (((kc->u.wide[21])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (20)) | (((kc->u.wide[14])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (39)) | (((kc->u.wide[ 2])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (8)) | (((kc->u.wide[15])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (14)) | (((kc->u.wide[ 8])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[19])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[19])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[11])); (c1 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) & (kc->u.wide[ 8])); (c2 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[22])); (c4 = (kc->u.wide[ 8]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[22]) = c1); ((kc->u.wide[19]) = c2); ((kc->u.wide[11]) = c3); ((kc->u.wide[ 8]) = c4); (bnn = ((~(kc->u.wide[20])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[ 6])); (c0 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[ 3])); (c1 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | bnn); (c2 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[17])); (c3 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) & (kc->u.wide[14])); (c4 = (kc->u.wide[20]) ^ kt); } while (0); ((kc->u.wide[17]) = c0); ((kc->u.wide[14]) = c1); ((kc->u.wide[ 6]) = c2); ((kc->u.wide[ 3]) = c3); ((kc->u.wide[20]) = c4); (bnn = ((~(kc->u.wide[15])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) | (kc->u.wide[23])); (c0 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) & (kc->u.wide[15])); (c1 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[12])); (c2 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[ 9])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) & (kc->u.wide[ 1])); (c4 = (kc->u.wide[12]) ^ kt); } while (0); ((kc->u.wide[ 9]) = c0); ((kc->u.wide[ 1]) = c1); ((kc->u.wide[23]) = c2); ((kc->u.wide[15]) = c3); ((kc->u.wide[12]) = c4); (bnn = ((~(kc->u.wide[ 7])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[18]) & (kc->u.wide[10])); (c0 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) | (kc->u.wide[ 7])); (c1 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 4])); (c2 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[21])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) | (kc->u.wide[18])); (c4 = (kc->u.wide[ 4]) ^ kt); } while (0); ((kc->u.wide[21]) = c0); ((kc->u.wide[18]) = c1); ((kc->u.wide[10]) = c2); ((kc->u.wide[ 7]) = c3); ((kc->u.wide[ 4]) = c4); (bnn = ((~(kc->u.wide[ 5])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[ 2])); (c0 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[24])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[16])); (c2 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | (kc->u.wide[13])); (c3 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) & (kc->u.wide[ 5])); (c4 = (kc->u.wide[16]) ^ kt); } while (0); ((kc->u.wide[13]) = c0); ((kc->u.wide[ 5]) = c1); ((kc->u.wide[ 2]) = c2); ((kc->u.wide[24]) = c3); ((kc->u.wide[16]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 2]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[22]) ^ (kc->u.wide[14])); (tt1 = (kc->u.wide[ 1]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 8]) ^ (kc->u.wide[20])); (tt3 = (kc->u.wide[12]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[19]) ^ (kc->u.wide[ 6])); (tt1 = (kc->u.wide[23]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[17])); (tt3 = (kc->u.wide[ 9]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[11]) ^ (kc->u.wide[ 3])); (tt1 = (kc->u.wide[15]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[22]) ^ (kc->u.wide[14])); (tt3 = (kc->u.wide[ 1]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 8]) ^ (kc->u.wide[20])); (tt1 = (kc->u.wide[12]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[19]) ^ (kc->u.wide[ 6])); (tt3 = (kc->u.wide[23]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[17])); (tt1 = (kc->u.wide[ 9]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[11]) ^ (kc->u.wide[ 3])); (tt3 = (kc->u.wide[15]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t0); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t0); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t0); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t0); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t1); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t1); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t1); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t1); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t1); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t2); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t2); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t2); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t2); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t2); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t3); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t3); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t3); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t3); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t4); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t4); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t4); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t4); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t4); } while (0); do { ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (36)) | (((kc->u.wide[17])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (3)) | (((kc->u.wide[ 9])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (41)) | (((kc->u.wide[21])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (18)) | (((kc->u.wide[13])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (1)) | (((kc->u.wide[22])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (44)) | (((kc->u.wide[14])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (10)) | (((kc->u.wide[ 1])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (45)) | (((kc->u.wide[18])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (2)) | (((kc->u.wide[ 5])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (62)) | (((kc->u.wide[19])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (6)) | (((kc->u.wide[ 6])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (43)) | (((kc->u.wide[23])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (15)) | (((kc->u.wide[10])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (61)) | (((kc->u.wide[ 2])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (28)) | (((kc->u.wide[11])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (55)) | (((kc->u.wide[ 3])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (25)) | (((kc->u.wide[15])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (21)) | (((kc->u.wide[ 7])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (56)) | (((kc->u.wide[24])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (27)) | (((kc->u.wide[ 8])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (20)) | (((kc->u.wide[20])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (39)) | (((kc->u.wide[12])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (8)) | (((kc->u.wide[ 4])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (14)) | (((kc->u.wide[16])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[23])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[23])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 7])); (c1 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) & (kc->u.wide[16])); (c2 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[14])); (c4 = (kc->u.wide[16]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[14]) = c1); ((kc->u.wide[23]) = c2); ((kc->u.wide[ 7]) = c3); ((kc->u.wide[16]) = c4); (bnn = ((~(kc->u.wide[ 2])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 9])); (c0 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) & (kc->u.wide[18])); (c1 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | bnn); (c2 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[11])); (c3 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) & (kc->u.wide[20])); (c4 = (kc->u.wide[ 2]) ^ kt); } while (0); ((kc->u.wide[11]) = c0); ((kc->u.wide[20]) = c1); ((kc->u.wide[ 9]) = c2); ((kc->u.wide[18]) = c3); ((kc->u.wide[ 2]) = c4); (bnn = ((~(kc->u.wide[ 4])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) | (kc->u.wide[15])); (c0 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[ 4])); (c1 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[13])); (c2 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[22])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) & (kc->u.wide[ 6])); (c4 = (kc->u.wide[13]) ^ kt); } while (0); ((kc->u.wide[22]) = c0); ((kc->u.wide[ 6]) = c1); ((kc->u.wide[15]) = c2); ((kc->u.wide[ 4]) = c3); ((kc->u.wide[13]) = c4); (bnn = ((~(kc->u.wide[10])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[17]) & (kc->u.wide[ 1])); (c0 = (kc->u.wide[ 8]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) | (kc->u.wide[10])); (c1 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[24])); (c2 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[ 8])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) | (kc->u.wide[17])); (c4 = (kc->u.wide[24]) ^ kt); } while (0); ((kc->u.wide[ 8]) = c0); ((kc->u.wide[17]) = c1); ((kc->u.wide[ 1]) = c2); ((kc->u.wide[10]) = c3); ((kc->u.wide[24]) = c4); (bnn = ((~(kc->u.wide[ 3])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[12])); (c0 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[21])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) & (kc->u.wide[ 5])); (c2 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | (kc->u.wide[19])); (c3 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) & (kc->u.wide[ 3])); (c4 = (kc->u.wide[ 5]) ^ kt); } while (0); ((kc->u.wide[19]) = c0); ((kc->u.wide[ 3]) = c1); ((kc->u.wide[12]) = c2); ((kc->u.wide[21]) = c3); ((kc->u.wide[ 5]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 3]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[14]) ^ (kc->u.wide[20])); (tt1 = (kc->u.wide[ 6]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[16]) ^ (kc->u.wide[ 2])); (tt3 = (kc->u.wide[13]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[23]) ^ (kc->u.wide[ 9])); (tt1 = (kc->u.wide[15]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[11])); (tt3 = (kc->u.wide[22]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 7]) ^ (kc->u.wide[18])); (tt1 = (kc->u.wide[ 4]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[14]) ^ (kc->u.wide[20])); (tt3 = (kc->u.wide[ 6]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[16]) ^ (kc->u.wide[ 2])); (tt1 = (kc->u.wide[13]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[23]) ^ (kc->u.wide[ 9])); (tt3 = (kc->u.wide[15]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[11])); (tt1 = (kc->u.wide[22]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 7]) ^ (kc->u.wide[18])); (tt3 = (kc->u.wide[ 4]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t0); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t0); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t0); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t0); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t1); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t1); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t1); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t1); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t1); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t2); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t2); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t2); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t2); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t2); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t3); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t3); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t3); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t3); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t3); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t4); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t4); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t4); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t4); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t4); } while (0); do { ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (36)) | (((kc->u.wide[11])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (3)) | (((kc->u.wide[22])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (41)) | (((kc->u.wide[ 8])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (18)) | (((kc->u.wide[19])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (1)) | (((kc->u.wide[14])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (44)) | (((kc->u.wide[20])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (10)) | (((kc->u.wide[ 6])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (45)) | (((kc->u.wide[17])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (2)) | (((kc->u.wide[ 3])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (62)) | (((kc->u.wide[23])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (6)) | (((kc->u.wide[ 9])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (43)) | (((kc->u.wide[15])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (15)) | (((kc->u.wide[ 1])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (61)) | (((kc->u.wide[12])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (28)) | (((kc->u.wide[ 7])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (55)) | (((kc->u.wide[18])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (25)) | (((kc->u.wide[ 4])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (21)) | (((kc->u.wide[10])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (56)) | (((kc->u.wide[21])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (27)) | (((kc->u.wide[16])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (20)) | (((kc->u.wide[ 2])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (39)) | (((kc->u.wide[13])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (8)) | (((kc->u.wide[24])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (14)) | (((kc->u.wide[ 5])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[15])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[15])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[10])); (c1 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[ 5])); (c2 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[20])); (c4 = (kc->u.wide[ 5]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[20]) = c1); ((kc->u.wide[15]) = c2); ((kc->u.wide[10]) = c3); ((kc->u.wide[ 5]) = c4); (bnn = ((~(kc->u.wide[12])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[22])); (c0 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) & (kc->u.wide[17])); (c1 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) | bnn); (c2 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[ 7])); (c3 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) & (kc->u.wide[ 2])); (c4 = (kc->u.wide[12]) ^ kt); } while (0); ((kc->u.wide[ 7]) = c0); ((kc->u.wide[ 2]) = c1); ((kc->u.wide[22]) = c2); ((kc->u.wide[17]) = c3); ((kc->u.wide[12]) = c4); (bnn = ((~(kc->u.wide[24])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[ 4])); (c0 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[24])); (c1 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[19])); (c2 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[14])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) & (kc->u.wide[ 9])); (c4 = (kc->u.wide[19]) ^ kt); } while (0); ((kc->u.wide[14]) = c0); ((kc->u.wide[ 9]) = c1); ((kc->u.wide[ 4]) = c2); ((kc->u.wide[24]) = c3); ((kc->u.wide[19]) = c4); (bnn = ((~(kc->u.wide[ 1])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[11]) & (kc->u.wide[ 6])); (c0 = (kc->u.wide[16]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) | (kc->u.wide[ 1])); (c1 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[21])); (c2 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) & (kc->u.wide[16])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | (kc->u.wide[11])); (c4 = (kc->u.wide[21]) ^ kt); } while (0); ((kc->u.wide[16]) = c0); ((kc->u.wide[11]) = c1); ((kc->u.wide[ 6]) = c2); ((kc->u.wide[ 1]) = c3); ((kc->u.wide[21]) = c4); (bnn = ((~(kc->u.wide[18])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[13])); (c0 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[ 8])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) & (kc->u.wide[ 3])); (c2 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | (kc->u.wide[23])); (c3 = (kc->u.wide[ 8]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) & (kc->u.wide[18])); (c4 = (kc->u.wide[ 3]) ^ kt); } while (0); ((kc->u.wide[23]) = c0); ((kc->u.wide[18]) = c1); ((kc->u.wide[13]) = c2); ((kc->u.wide[ 8]) = c3); ((kc->u.wide[ 3]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 4]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[20]) ^ (kc->u.wide[ 2])); (tt1 = (kc->u.wide[ 9]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 5]) ^ (kc->u.wide[12])); (tt3 = (kc->u.wide[19]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[15]) ^ (kc->u.wide[22])); (tt1 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 7])); (tt3 = (kc->u.wide[14]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[10]) ^ (kc->u.wide[17])); (tt1 = (kc->u.wide[24]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[20]) ^ (kc->u.wide[ 2])); (tt3 = (kc->u.wide[ 9]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 5]) ^ (kc->u.wide[12])); (tt1 = (kc->u.wide[19]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[15]) ^ (kc->u.wide[22])); (tt3 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 7])); (tt1 = (kc->u.wide[14]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[10]) ^ (kc->u.wide[17])); (tt3 = (kc->u.wide[24]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t0); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t0); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t0); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t0); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t1); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t1); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t1); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t1); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t1); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t2); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t2); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t2); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t2); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t2); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t3); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t3); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t3); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t3); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t4); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t4); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t4); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t4); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t4); } while (0); do { ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (36)) | (((kc->u.wide[ 7])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (3)) | (((kc->u.wide[14])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (41)) | (((kc->u.wide[16])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (18)) | (((kc->u.wide[23])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (1)) | (((kc->u.wide[20])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (44)) | (((kc->u.wide[ 2])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (10)) | (((kc->u.wide[ 9])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (45)) | (((kc->u.wide[11])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (2)) | (((kc->u.wide[18])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (62)) | (((kc->u.wide[15])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (6)) | (((kc->u.wide[22])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (43)) | (((kc->u.wide[ 4])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (15)) | (((kc->u.wide[ 6])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (61)) | (((kc->u.wide[13])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (28)) | (((kc->u.wide[10])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (55)) | (((kc->u.wide[17])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (25)) | (((kc->u.wide[24])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (21)) | (((kc->u.wide[ 1])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (56)) | (((kc->u.wide[ 8])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (27)) | (((kc->u.wide[ 5])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (20)) | (((kc->u.wide[12])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (39)) | (((kc->u.wide[19])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (8)) | (((kc->u.wide[21])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (14)) | (((kc->u.wide[ 3])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[ 4])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[ 4])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 1])); (c1 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[ 3])); (c2 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[ 2])); (c4 = (kc->u.wide[ 3]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[ 2]) = c1); ((kc->u.wide[ 4]) = c2); ((kc->u.wide[ 1]) = c3); ((kc->u.wide[ 3]) = c4); (bnn = ((~(kc->u.wide[13])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[14])); (c0 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) & (kc->u.wide[11])); (c1 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) | bnn); (c2 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[10])); (c3 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[12])); (c4 = (kc->u.wide[13]) ^ kt); } while (0); ((kc->u.wide[10]) = c0); ((kc->u.wide[12]) = c1); ((kc->u.wide[14]) = c2); ((kc->u.wide[11]) = c3); ((kc->u.wide[13]) = c4); (bnn = ((~(kc->u.wide[21])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[24])); (c0 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[21])); (c1 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[23])); (c2 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) | (kc->u.wide[20])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) & (kc->u.wide[22])); (c4 = (kc->u.wide[23]) ^ kt); } while (0); ((kc->u.wide[20]) = c0); ((kc->u.wide[22]) = c1); ((kc->u.wide[24]) = c2); ((kc->u.wide[21]) = c3); ((kc->u.wide[23]) = c4); (bnn = ((~(kc->u.wide[ 6])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) & (kc->u.wide[ 9])); (c0 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[ 6])); (c1 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 8])); (c2 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) & (kc->u.wide[ 5])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | (kc->u.wide[ 7])); (c4 = (kc->u.wide[ 8]) ^ kt); } while (0); ((kc->u.wide[ 5]) = c0); ((kc->u.wide[ 7]) = c1); ((kc->u.wide[ 9]) = c2); ((kc->u.wide[ 6]) = c3); ((kc->u.wide[ 8]) = c4); (bnn = ((~(kc->u.wide[17])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[19])); (c0 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[16])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) & (kc->u.wide[18])); (c2 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | (kc->u.wide[15])); (c3 = (kc->u.wide[16]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[17])); (c4 = (kc->u.wide[18]) ^ kt); } while (0); ((kc->u.wide[15]) = c0); ((kc->u.wide[17]) = c1); ((kc->u.wide[19]) = c2); ((kc->u.wide[16]) = c3); ((kc->u.wide[18]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 5]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 2]) ^ (kc->u.wide[12])); (tt1 = (kc->u.wide[22]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 3]) ^ (kc->u.wide[13])); (tt3 = (kc->u.wide[23]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 4]) ^ (kc->u.wide[14])); (tt1 = (kc->u.wide[24]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[10])); (tt3 = (kc->u.wide[20]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 1]) ^ (kc->u.wide[11])); (tt1 = (kc->u.wide[21]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 2]) ^ (kc->u.wide[12])); (tt3 = (kc->u.wide[22]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 3]) ^ (kc->u.wide[13])); (tt1 = (kc->u.wide[23]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 4]) ^ (kc->u.wide[14])); (tt3 = (kc->u.wide[24]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[10])); (tt1 = (kc->u.wide[20]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 1]) ^ (kc->u.wide[11])); (tt3 = (kc->u.wide[21]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t0); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t0); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t0); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t0); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t1); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t1); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t1); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t1); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t1); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t2); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t2); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t2); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t2); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t2); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t3); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t3); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t3); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t3); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t3); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t4); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t4); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t4); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t4); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t4); } while (0); do { ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (36)) | (((kc->u.wide[10])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (3)) | (((kc->u.wide[20])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (41)) | (((kc->u.wide[ 5])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (18)) | (((kc->u.wide[15])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (1)) | (((kc->u.wide[ 2])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (44)) | (((kc->u.wide[12])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (10)) | (((kc->u.wide[22])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (45)) | (((kc->u.wide[ 7])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (2)) | (((kc->u.wide[17])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (62)) | (((kc->u.wide[ 4])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (6)) | (((kc->u.wide[14])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (43)) | (((kc->u.wide[24])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (15)) | (((kc->u.wide[ 9])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (61)) | (((kc->u.wide[19])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (28)) | (((kc->u.wide[ 1])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (55)) | (((kc->u.wide[11])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (25)) | (((kc->u.wide[21])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (21)) | (((kc->u.wide[ 6])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (56)) | (((kc->u.wide[16])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (27)) | (((kc->u.wide[ 3])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (20)) | (((kc->u.wide[13])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (39)) | (((kc->u.wide[23])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (8)) | (((kc->u.wide[ 8])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (14)) | (((kc->u.wide[18])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[24])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[24])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 6])); (c1 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[18])); (c2 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[12])); (c4 = (kc->u.wide[18]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[12]) = c1); ((kc->u.wide[24]) = c2); ((kc->u.wide[ 6]) = c3); ((kc->u.wide[18]) = c4); (bnn = ((~(kc->u.wide[19])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[20])); (c0 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) & (kc->u.wide[ 7])); (c1 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) | bnn); (c2 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[ 1])); (c3 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[13])); (c4 = (kc->u.wide[19]) ^ kt); } while (0); ((kc->u.wide[ 1]) = c0); ((kc->u.wide[13]) = c1); ((kc->u.wide[20]) = c2); ((kc->u.wide[ 7]) = c3); ((kc->u.wide[19]) = c4); (bnn = ((~(kc->u.wide[ 8])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[21])); (c0 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) & (kc->u.wide[ 8])); (c1 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[15])); (c2 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) | (kc->u.wide[ 2])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) & (kc->u.wide[14])); (c4 = (kc->u.wide[15]) ^ kt); } while (0); ((kc->u.wide[ 2]) = c0); ((kc->u.wide[14]) = c1); ((kc->u.wide[21]) = c2); ((kc->u.wide[ 8]) = c3); ((kc->u.wide[15]) = c4); (bnn = ((~(kc->u.wide[ 9])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[22])); (c0 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[ 9])); (c1 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[16])); (c2 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) & (kc->u.wide[ 3])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | (kc->u.wide[10])); (c4 = (kc->u.wide[16]) ^ kt); } while (0); ((kc->u.wide[ 3]) = c0); ((kc->u.wide[10]) = c1); ((kc->u.wide[22]) = c2); ((kc->u.wide[ 9]) = c3); ((kc->u.wide[16]) = c4); (bnn = ((~(kc->u.wide[11])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[23])); (c0 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) | (kc->u.wide[ 5])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) & (kc->u.wide[17])); (c2 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) | (kc->u.wide[ 4])); (c3 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[11])); (c4 = (kc->u.wide[17]) ^ kt); } while (0); ((kc->u.wide[ 4]) = c0); ((kc->u.wide[11]) = c1); ((kc->u.wide[23]) = c2); ((kc->u.wide[ 5]) = c3); ((kc->u.wide[17]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 6]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[12]) ^ (kc->u.wide[13])); (tt1 = (kc->u.wide[14]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[11])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[18]) ^ (kc->u.wide[19])); (tt3 = (kc->u.wide[15]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[24]) ^ (kc->u.wide[20])); (tt1 = (kc->u.wide[21]) ^ (kc->u.wide[22])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 1])); (tt3 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 7])); (tt1 = (kc->u.wide[ 8]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[12]) ^ (kc->u.wide[13])); (tt3 = (kc->u.wide[14]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[11])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[18]) ^ (kc->u.wide[19])); (tt1 = (kc->u.wide[15]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[24]) ^ (kc->u.wide[20])); (tt3 = (kc->u.wide[21]) ^ (kc->u.wide[22])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 1])); (tt1 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 7])); (tt3 = (kc->u.wide[ 8]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t0); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t0); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t0); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t0); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t1); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t1); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t1); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t1); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t1); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t2); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t2); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t2); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t2); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t2); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t3); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t3); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t3); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t3); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t4); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t4); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t4); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t4); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t4); } while (0); do { ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (36)) | (((kc->u.wide[ 1])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (3)) | (((kc->u.wide[ 2])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (41)) | (((kc->u.wide[ 3])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (18)) | (((kc->u.wide[ 4])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (1)) | (((kc->u.wide[12])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (44)) | (((kc->u.wide[13])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (10)) | (((kc->u.wide[14])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (45)) | (((kc->u.wide[10])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (2)) | (((kc->u.wide[11])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (62)) | (((kc->u.wide[24])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (6)) | (((kc->u.wide[20])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (43)) | (((kc->u.wide[21])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (15)) | (((kc->u.wide[22])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (61)) | (((kc->u.wide[23])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (28)) | (((kc->u.wide[ 6])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (55)) | (((kc->u.wide[ 7])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (25)) | (((kc->u.wide[ 8])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (21)) | (((kc->u.wide[ 9])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (56)) | (((kc->u.wide[ 5])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (27)) | (((kc->u.wide[18])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (20)) | (((kc->u.wide[19])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (39)) | (((kc->u.wide[15])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (8)) | (((kc->u.wide[16])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (14)) | (((kc->u.wide[17])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[21])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[21])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 9])); (c1 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) & (kc->u.wide[17])); (c2 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[13])); (c4 = (kc->u.wide[17]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[13]) = c1); ((kc->u.wide[21]) = c2); ((kc->u.wide[ 9]) = c3); ((kc->u.wide[17]) = c4); (bnn = ((~(kc->u.wide[23])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[ 2])); (c0 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) & (kc->u.wide[10])); (c1 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) | bnn); (c2 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) | (kc->u.wide[ 6])); (c3 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[19])); (c4 = (kc->u.wide[23]) ^ kt); } while (0); ((kc->u.wide[ 6]) = c0); ((kc->u.wide[19]) = c1); ((kc->u.wide[ 2]) = c2); ((kc->u.wide[10]) = c3); ((kc->u.wide[23]) = c4); (bnn = ((~(kc->u.wide[16])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 8])); (c0 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) & (kc->u.wide[16])); (c1 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[ 4])); (c2 = (kc->u.wide[ 8]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) | (kc->u.wide[12])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) & (kc->u.wide[20])); (c4 = (kc->u.wide[ 4]) ^ kt); } while (0); ((kc->u.wide[12]) = c0); ((kc->u.wide[20]) = c1); ((kc->u.wide[ 8]) = c2); ((kc->u.wide[16]) = c3); ((kc->u.wide[ 4]) = c4); (bnn = ((~(kc->u.wide[22])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[14])); (c0 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[22])); (c1 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 5])); (c2 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) & (kc->u.wide[18])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | (kc->u.wide[ 1])); (c4 = (kc->u.wide[ 5]) ^ kt); } while (0); ((kc->u.wide[18]) = c0); ((kc->u.wide[ 1]) = c1); ((kc->u.wide[14]) = c2); ((kc->u.wide[22]) = c3); ((kc->u.wide[ 5]) = c4); (bnn = ((~(kc->u.wide[ 7])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[15])); (c0 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) | (kc->u.wide[ 3])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) & (kc->u.wide[11])); (c2 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) | (kc->u.wide[24])); (c3 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[ 7])); (c4 = (kc->u.wide[11]) ^ kt); } while (0); ((kc->u.wide[24]) = c0); ((kc->u.wide[ 7]) = c1); ((kc->u.wide[15]) = c2); ((kc->u.wide[ 3]) = c3); ((kc->u.wide[11]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 7]); } while (0); do { sph_u64 t; (t = (kc->u.wide[ 5])); ((kc->u.wide[ 5]) = (kc->u.wide[ 6])); ((kc->u.wide[ 6]) = (kc->u.wide[19])); ((kc->u.wide[19]) = t); (t = (kc->u.wide[10])); ((kc->u.wide[10]) = (kc->u.wide[12])); ((kc->u.wide[12]) = (kc->u.wide[ 8])); ((kc->u.wide[ 8]) = t); (t = (kc->u.wide[15])); ((kc->u.wide[15]) = (kc->u.wide[18])); ((kc->u.wide[18]) = (kc->u.wide[22])); ((kc->u.wide[22]) = t); (t = (kc->u.wide[20])); ((kc->u.wide[20]) = (kc->u.wide[24])); ((kc->u.wide[24]) = (kc->u.wide[11])); ((kc->u.wide[11]) = t); (t = (kc->u.wide[ 1])); ((kc->u.wide[ 1]) = (kc->u.wide[13])); ((kc->u.wide[13]) = (kc->u.wide[16])); ((kc->u.wide[16]) = t); (t = (kc->u.wide[21])); ((kc->u.wide[21]) = (kc->u.wide[ 7])); ((kc->u.wide[ 7]) = (kc->u.wide[ 2])); ((kc->u.wide[ 2]) = t); (t = (kc->u.wide[17])); ((kc->u.wide[17]) = (kc->u.wide[14])); ((kc->u.wide[14]) = (kc->u.wide[ 4])); ((kc->u.wide[ 4]) = t); (t = (kc->u.wide[ 3])); ((kc->u.wide[ 3]) = (kc->u.wide[ 9])); ((kc->u.wide[ 9]) = (kc->u.wide[23])); ((kc->u.wide[23]) = t); } while (0); } } while (0);
   ptr = 0;
  }
 }
 ;
 kc->ptr = ptr;
}

void keccak_core_prepare(sph_keccak512_context *kc, const void *data, unsigned long long *stateOut)
{
 unsigned char *buf;
 unsigned char *dataU8 = (unsigned char*)data;
 size_t ptr;

  int len = 80;
 size_t clen;

 unsigned eb;




 size_t j;
 int i;
 buf = kc->buf;

 (kc->u.wide[ 0]) = kc->u.wide[ 0];
 (kc->u.wide[ 1]) = kc->u.wide[ 1];
 (kc->u.wide[ 2]) = kc->u.wide[ 2];
 (kc->u.wide[ 3]) = kc->u.wide[ 3];
 (kc->u.wide[ 4]) = kc->u.wide[ 4];
 (kc->u.wide[ 5]) = kc->u.wide[ 5];
 (kc->u.wide[ 6]) = kc->u.wide[ 6];
 (kc->u.wide[ 7]) = kc->u.wide[ 7];
 (kc->u.wide[ 8]) = kc->u.wide[ 8];
 (kc->u.wide[ 9]) = kc->u.wide[ 9];
 (kc->u.wide[10]) = kc->u.wide[10];
 (kc->u.wide[11]) = kc->u.wide[11];
 (kc->u.wide[12]) = kc->u.wide[12];
 (kc->u.wide[13]) = kc->u.wide[13];
 (kc->u.wide[14]) = kc->u.wide[14];
 (kc->u.wide[15]) = kc->u.wide[15];
 (kc->u.wide[16]) = kc->u.wide[16];
 (kc->u.wide[17]) = kc->u.wide[17];
 (kc->u.wide[18]) = kc->u.wide[18];
 (kc->u.wide[19]) = kc->u.wide[19];
 (kc->u.wide[20]) = kc->u.wide[20];
 (kc->u.wide[21]) = kc->u.wide[21];
 (kc->u.wide[22]) = kc->u.wide[22];
 (kc->u.wide[23]) = kc->u.wide[23];
 (kc->u.wide[24]) = kc->u.wide[24];


 (kc->u.wide[ 0]) ^= sph_dec64le_aligned(dataU8 + 0);
 (kc->u.wide[ 1]) ^= sph_dec64le_aligned(dataU8 + 8);
 (kc->u.wide[ 2]) ^= sph_dec64le_aligned(dataU8 + 16);
 (kc->u.wide[ 3]) ^= sph_dec64le_aligned(dataU8 + 24);
 (kc->u.wide[ 4]) ^= sph_dec64le_aligned(dataU8 + 32);
 (kc->u.wide[ 5]) ^= sph_dec64le_aligned(dataU8 + 40);
 (kc->u.wide[ 6]) ^= sph_dec64le_aligned(dataU8 + 48);
 (kc->u.wide[ 7]) ^= sph_dec64le_aligned(dataU8 + 56);
 (kc->u.wide[ 8]) ^= sph_dec64le_aligned(dataU8 + 64);

 do { int j; for (j = 0; j < 24; j += 8) { do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 6])); (tt1 = (kc->u.wide[11]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 9])); (tt3 = (kc->u.wide[14]) ^ (kc->u.wide[19])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 7])); (tt1 = (kc->u.wide[12]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[22])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 5])); (tt3 = (kc->u.wide[10]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 3]) ^ (kc->u.wide[ 8])); (tt1 = (kc->u.wide[13]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 6])); (tt3 = (kc->u.wide[11]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 9])); (tt1 = (kc->u.wide[14]) ^ (kc->u.wide[19])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 7])); (tt3 = (kc->u.wide[12]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[22])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 5])); (tt1 = (kc->u.wide[10]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 3]) ^ (kc->u.wide[ 8])); (tt3 = (kc->u.wide[13]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t0); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t0); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t0); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t0); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t1); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t1); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t1); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t1); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t1); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t2); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t2); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t2); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t2); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t2); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t3); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t3); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t3); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t3); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t4); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t4); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t4); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t4); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t4); } while (0); do { ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (36)) | (((kc->u.wide[ 5])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (3)) | (((kc->u.wide[10])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (41)) | (((kc->u.wide[15])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (18)) | (((kc->u.wide[20])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (1)) | (((kc->u.wide[ 1])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (44)) | (((kc->u.wide[ 6])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (10)) | (((kc->u.wide[11])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (45)) | (((kc->u.wide[16])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (2)) | (((kc->u.wide[21])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (62)) | (((kc->u.wide[ 2])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (6)) | (((kc->u.wide[ 7])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (43)) | (((kc->u.wide[12])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (15)) | (((kc->u.wide[17])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (61)) | (((kc->u.wide[22])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (28)) | (((kc->u.wide[ 3])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (55)) | (((kc->u.wide[ 8])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (25)) | (((kc->u.wide[13])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (21)) | (((kc->u.wide[18])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (56)) | (((kc->u.wide[23])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (27)) | (((kc->u.wide[ 4])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (20)) | (((kc->u.wide[ 9])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (39)) | (((kc->u.wide[14])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (8)) | (((kc->u.wide[19])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (14)) | (((kc->u.wide[24])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[12])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) | (kc->u.wide[12])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[18])); (c1 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) & (kc->u.wide[24])); (c2 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[ 6])); (c4 = (kc->u.wide[24]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[ 6]) = c1); ((kc->u.wide[12]) = c2); ((kc->u.wide[18]) = c3); ((kc->u.wide[24]) = c4); (bnn = ((~(kc->u.wide[22])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[10])); (c0 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[16])); (c1 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | bnn); (c2 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[ 3])); (c3 = (kc->u.wide[16]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) & (kc->u.wide[ 9])); (c4 = (kc->u.wide[22]) ^ kt); } while (0); ((kc->u.wide[ 3]) = c0); ((kc->u.wide[ 9]) = c1); ((kc->u.wide[10]) = c2); ((kc->u.wide[16]) = c3); ((kc->u.wide[22]) = c4); (bnn = ((~(kc->u.wide[19])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) | (kc->u.wide[13])); (c0 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) & (kc->u.wide[19])); (c1 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[20])); (c2 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 1])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[ 7])); (c4 = (kc->u.wide[20]) ^ kt); } while (0); ((kc->u.wide[ 1]) = c0); ((kc->u.wide[ 7]) = c1); ((kc->u.wide[13]) = c2); ((kc->u.wide[19]) = c3); ((kc->u.wide[20]) = c4); (bnn = ((~(kc->u.wide[17])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) & (kc->u.wide[11])); (c0 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) | (kc->u.wide[17])); (c1 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[23])); (c2 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) & (kc->u.wide[ 4])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) | (kc->u.wide[ 5])); (c4 = (kc->u.wide[23]) ^ kt); } while (0); ((kc->u.wide[ 4]) = c0); ((kc->u.wide[ 5]) = c1); ((kc->u.wide[11]) = c2); ((kc->u.wide[17]) = c3); ((kc->u.wide[23]) = c4); (bnn = ((~(kc->u.wide[ 8])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[14])); (c0 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[15])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[21])); (c2 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) | (kc->u.wide[ 2])); (c3 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) & (kc->u.wide[ 8])); (c4 = (kc->u.wide[21]) ^ kt); } while (0); ((kc->u.wide[ 2]) = c0); ((kc->u.wide[ 8]) = c1); ((kc->u.wide[14]) = c2); ((kc->u.wide[15]) = c3); ((kc->u.wide[21]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 0]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 9])); (tt1 = (kc->u.wide[ 7]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[24]) ^ (kc->u.wide[22])); (tt3 = (kc->u.wide[20]) ^ (kc->u.wide[23])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[12]) ^ (kc->u.wide[10])); (tt1 = (kc->u.wide[13]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[14])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 3])); (tt3 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[18]) ^ (kc->u.wide[16])); (tt1 = (kc->u.wide[19]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 9])); (tt3 = (kc->u.wide[ 7]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[24]) ^ (kc->u.wide[22])); (tt1 = (kc->u.wide[20]) ^ (kc->u.wide[23])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[12]) ^ (kc->u.wide[10])); (tt3 = (kc->u.wide[13]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[14])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 3])); (tt1 = (kc->u.wide[ 1]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[18]) ^ (kc->u.wide[16])); (tt3 = (kc->u.wide[19]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t0); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t0); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t0); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t0); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t1); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t1); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t1); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t1); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t1); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t2); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t2); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t2); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t2); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t2); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t3); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t3); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t3); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t3); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t3); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t4); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t4); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t4); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t4); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t4); } while (0); do { ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (36)) | (((kc->u.wide[ 3])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (3)) | (((kc->u.wide[ 1])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (41)) | (((kc->u.wide[ 4])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (18)) | (((kc->u.wide[ 2])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (1)) | (((kc->u.wide[ 6])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (44)) | (((kc->u.wide[ 9])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (10)) | (((kc->u.wide[ 7])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (45)) | (((kc->u.wide[ 5])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (2)) | (((kc->u.wide[ 8])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (62)) | (((kc->u.wide[12])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (6)) | (((kc->u.wide[10])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (43)) | (((kc->u.wide[13])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (15)) | (((kc->u.wide[11])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (61)) | (((kc->u.wide[14])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (28)) | (((kc->u.wide[18])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (55)) | (((kc->u.wide[16])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (25)) | (((kc->u.wide[19])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (21)) | (((kc->u.wide[17])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (56)) | (((kc->u.wide[15])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (27)) | (((kc->u.wide[24])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (20)) | (((kc->u.wide[22])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (39)) | (((kc->u.wide[20])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (8)) | (((kc->u.wide[23])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (14)) | (((kc->u.wide[21])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[13])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[13])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[17])); (c1 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) & (kc->u.wide[21])); (c2 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[ 9])); (c4 = (kc->u.wide[21]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[ 9]) = c1); ((kc->u.wide[13]) = c2); ((kc->u.wide[17]) = c3); ((kc->u.wide[21]) = c4); (bnn = ((~(kc->u.wide[14])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[ 1])); (c0 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[ 5])); (c1 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | bnn); (c2 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[18])); (c3 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) & (kc->u.wide[22])); (c4 = (kc->u.wide[14]) ^ kt); } while (0); ((kc->u.wide[18]) = c0); ((kc->u.wide[22]) = c1); ((kc->u.wide[ 1]) = c2); ((kc->u.wide[ 5]) = c3); ((kc->u.wide[14]) = c4); (bnn = ((~(kc->u.wide[23])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[10]) | (kc->u.wide[19])); (c0 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) & (kc->u.wide[23])); (c1 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[ 2])); (c2 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[ 6])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[10])); (c4 = (kc->u.wide[ 2]) ^ kt); } while (0); ((kc->u.wide[ 6]) = c0); ((kc->u.wide[10]) = c1); ((kc->u.wide[19]) = c2); ((kc->u.wide[23]) = c3); ((kc->u.wide[ 2]) = c4); (bnn = ((~(kc->u.wide[11])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) & (kc->u.wide[ 7])); (c0 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) | (kc->u.wide[11])); (c1 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[15])); (c2 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[24])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) | (kc->u.wide[ 3])); (c4 = (kc->u.wide[15]) ^ kt); } while (0); ((kc->u.wide[24]) = c0); ((kc->u.wide[ 3]) = c1); ((kc->u.wide[ 7]) = c2); ((kc->u.wide[11]) = c3); ((kc->u.wide[15]) = c4); (bnn = ((~(kc->u.wide[16])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[20])); (c0 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 4])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[ 8])); (c2 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) | (kc->u.wide[12])); (c3 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) & (kc->u.wide[16])); (c4 = (kc->u.wide[ 8]) ^ kt); } while (0); ((kc->u.wide[12]) = c0); ((kc->u.wide[16]) = c1); ((kc->u.wide[20]) = c2); ((kc->u.wide[ 4]) = c3); ((kc->u.wide[ 8]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 1]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 9]) ^ (kc->u.wide[22])); (tt1 = (kc->u.wide[10]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[21]) ^ (kc->u.wide[14])); (tt3 = (kc->u.wide[ 2]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[13]) ^ (kc->u.wide[ 1])); (tt1 = (kc->u.wide[19]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[18])); (tt3 = (kc->u.wide[ 6]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[17]) ^ (kc->u.wide[ 5])); (tt1 = (kc->u.wide[23]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 9]) ^ (kc->u.wide[22])); (tt3 = (kc->u.wide[10]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[21]) ^ (kc->u.wide[14])); (tt1 = (kc->u.wide[ 2]) ^ (kc->u.wide[15])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[13]) ^ (kc->u.wide[ 1])); (tt3 = (kc->u.wide[19]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[20])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[18])); (tt1 = (kc->u.wide[ 6]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[17]) ^ (kc->u.wide[ 5])); (tt3 = (kc->u.wide[23]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t0); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t0); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t0); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t0); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t1); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t1); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t1); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t1); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t1); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t2); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t2); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t2); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t2); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t2); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t3); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t3); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t3); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t3); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t3); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t4); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t4); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t4); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t4); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t4); } while (0); do { ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (36)) | (((kc->u.wide[18])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (3)) | (((kc->u.wide[ 6])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (41)) | (((kc->u.wide[24])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (18)) | (((kc->u.wide[12])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (1)) | (((kc->u.wide[ 9])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (44)) | (((kc->u.wide[22])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (10)) | (((kc->u.wide[10])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (45)) | (((kc->u.wide[ 3])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (2)) | (((kc->u.wide[16])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (62)) | (((kc->u.wide[13])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (6)) | (((kc->u.wide[ 1])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (43)) | (((kc->u.wide[19])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (15)) | (((kc->u.wide[ 7])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (61)) | (((kc->u.wide[20])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (28)) | (((kc->u.wide[17])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (55)) | (((kc->u.wide[ 5])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (25)) | (((kc->u.wide[23])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (21)) | (((kc->u.wide[11])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (56)) | (((kc->u.wide[ 4])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (27)) | (((kc->u.wide[21])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (20)) | (((kc->u.wide[14])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (39)) | (((kc->u.wide[ 2])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (8)) | (((kc->u.wide[15])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (14)) | (((kc->u.wide[ 8])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[19])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[19])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[11])); (c1 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) & (kc->u.wide[ 8])); (c2 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[22])); (c4 = (kc->u.wide[ 8]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[22]) = c1); ((kc->u.wide[19]) = c2); ((kc->u.wide[11]) = c3); ((kc->u.wide[ 8]) = c4); (bnn = ((~(kc->u.wide[20])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[ 6])); (c0 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[ 3])); (c1 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | bnn); (c2 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[17])); (c3 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) & (kc->u.wide[14])); (c4 = (kc->u.wide[20]) ^ kt); } while (0); ((kc->u.wide[17]) = c0); ((kc->u.wide[14]) = c1); ((kc->u.wide[ 6]) = c2); ((kc->u.wide[ 3]) = c3); ((kc->u.wide[20]) = c4); (bnn = ((~(kc->u.wide[15])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) | (kc->u.wide[23])); (c0 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) & (kc->u.wide[15])); (c1 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[12])); (c2 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[ 9])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) & (kc->u.wide[ 1])); (c4 = (kc->u.wide[12]) ^ kt); } while (0); ((kc->u.wide[ 9]) = c0); ((kc->u.wide[ 1]) = c1); ((kc->u.wide[23]) = c2); ((kc->u.wide[15]) = c3); ((kc->u.wide[12]) = c4); (bnn = ((~(kc->u.wide[ 7])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[18]) & (kc->u.wide[10])); (c0 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) | (kc->u.wide[ 7])); (c1 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 4])); (c2 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[21])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) | (kc->u.wide[18])); (c4 = (kc->u.wide[ 4]) ^ kt); } while (0); ((kc->u.wide[21]) = c0); ((kc->u.wide[18]) = c1); ((kc->u.wide[10]) = c2); ((kc->u.wide[ 7]) = c3); ((kc->u.wide[ 4]) = c4); (bnn = ((~(kc->u.wide[ 5])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[ 2])); (c0 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[24])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[16])); (c2 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | (kc->u.wide[13])); (c3 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) & (kc->u.wide[ 5])); (c4 = (kc->u.wide[16]) ^ kt); } while (0); ((kc->u.wide[13]) = c0); ((kc->u.wide[ 5]) = c1); ((kc->u.wide[ 2]) = c2); ((kc->u.wide[24]) = c3); ((kc->u.wide[16]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 2]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[22]) ^ (kc->u.wide[14])); (tt1 = (kc->u.wide[ 1]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 8]) ^ (kc->u.wide[20])); (tt3 = (kc->u.wide[12]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[19]) ^ (kc->u.wide[ 6])); (tt1 = (kc->u.wide[23]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[17])); (tt3 = (kc->u.wide[ 9]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[11]) ^ (kc->u.wide[ 3])); (tt1 = (kc->u.wide[15]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[22]) ^ (kc->u.wide[14])); (tt3 = (kc->u.wide[ 1]) ^ (kc->u.wide[18])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 8]) ^ (kc->u.wide[20])); (tt1 = (kc->u.wide[12]) ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[19]) ^ (kc->u.wide[ 6])); (tt3 = (kc->u.wide[23]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[ 2])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[17])); (tt1 = (kc->u.wide[ 9]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[11]) ^ (kc->u.wide[ 3])); (tt3 = (kc->u.wide[15]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[24])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t0); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t0); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t0); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t0); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t1); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t1); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t1); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t1); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t1); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t2); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t2); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t2); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t2); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t2); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t3); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t3); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t3); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t3); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t4); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t4); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t4); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t4); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t4); } while (0); do { ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (36)) | (((kc->u.wide[17])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (3)) | (((kc->u.wide[ 9])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (41)) | (((kc->u.wide[21])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (18)) | (((kc->u.wide[13])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (1)) | (((kc->u.wide[22])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (44)) | (((kc->u.wide[14])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (10)) | (((kc->u.wide[ 1])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (45)) | (((kc->u.wide[18])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (2)) | (((kc->u.wide[ 5])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (62)) | (((kc->u.wide[19])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (6)) | (((kc->u.wide[ 6])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (43)) | (((kc->u.wide[23])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (15)) | (((kc->u.wide[10])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (61)) | (((kc->u.wide[ 2])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (28)) | (((kc->u.wide[11])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (55)) | (((kc->u.wide[ 3])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (25)) | (((kc->u.wide[15])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (21)) | (((kc->u.wide[ 7])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (56)) | (((kc->u.wide[24])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (27)) | (((kc->u.wide[ 8])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (20)) | (((kc->u.wide[20])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (39)) | (((kc->u.wide[12])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (8)) | (((kc->u.wide[ 4])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (14)) | (((kc->u.wide[16])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[23])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[23])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 7])); (c1 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) & (kc->u.wide[16])); (c2 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[14])); (c4 = (kc->u.wide[16]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[14]) = c1); ((kc->u.wide[23]) = c2); ((kc->u.wide[ 7]) = c3); ((kc->u.wide[16]) = c4); (bnn = ((~(kc->u.wide[ 2])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 9])); (c0 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) & (kc->u.wide[18])); (c1 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | bnn); (c2 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[11])); (c3 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) & (kc->u.wide[20])); (c4 = (kc->u.wide[ 2]) ^ kt); } while (0); ((kc->u.wide[11]) = c0); ((kc->u.wide[20]) = c1); ((kc->u.wide[ 9]) = c2); ((kc->u.wide[18]) = c3); ((kc->u.wide[ 2]) = c4); (bnn = ((~(kc->u.wide[ 4])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) | (kc->u.wide[15])); (c0 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[ 4])); (c1 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[13])); (c2 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[22])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) & (kc->u.wide[ 6])); (c4 = (kc->u.wide[13]) ^ kt); } while (0); ((kc->u.wide[22]) = c0); ((kc->u.wide[ 6]) = c1); ((kc->u.wide[15]) = c2); ((kc->u.wide[ 4]) = c3); ((kc->u.wide[13]) = c4); (bnn = ((~(kc->u.wide[10])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[17]) & (kc->u.wide[ 1])); (c0 = (kc->u.wide[ 8]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) | (kc->u.wide[10])); (c1 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[24])); (c2 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[ 8])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) | (kc->u.wide[17])); (c4 = (kc->u.wide[24]) ^ kt); } while (0); ((kc->u.wide[ 8]) = c0); ((kc->u.wide[17]) = c1); ((kc->u.wide[ 1]) = c2); ((kc->u.wide[10]) = c3); ((kc->u.wide[24]) = c4); (bnn = ((~(kc->u.wide[ 3])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[12])); (c0 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[21])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) & (kc->u.wide[ 5])); (c2 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | (kc->u.wide[19])); (c3 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) & (kc->u.wide[ 3])); (c4 = (kc->u.wide[ 5]) ^ kt); } while (0); ((kc->u.wide[19]) = c0); ((kc->u.wide[ 3]) = c1); ((kc->u.wide[12]) = c2); ((kc->u.wide[21]) = c3); ((kc->u.wide[ 5]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 3]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[14]) ^ (kc->u.wide[20])); (tt1 = (kc->u.wide[ 6]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[16]) ^ (kc->u.wide[ 2])); (tt3 = (kc->u.wide[13]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[23]) ^ (kc->u.wide[ 9])); (tt1 = (kc->u.wide[15]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[11])); (tt3 = (kc->u.wide[22]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 7]) ^ (kc->u.wide[18])); (tt1 = (kc->u.wide[ 4]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[14]) ^ (kc->u.wide[20])); (tt3 = (kc->u.wide[ 6]) ^ (kc->u.wide[17])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[16]) ^ (kc->u.wide[ 2])); (tt1 = (kc->u.wide[13]) ^ (kc->u.wide[24])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[23]) ^ (kc->u.wide[ 9])); (tt3 = (kc->u.wide[15]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[12])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[11])); (tt1 = (kc->u.wide[22]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 7]) ^ (kc->u.wide[18])); (tt3 = (kc->u.wide[ 4]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[21])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t0); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t0); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t0); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t0); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t1); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t1); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t1); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t1); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t1); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t2); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t2); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t2); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t2); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t2); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t3); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t3); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t3); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t3); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t3); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t4); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t4); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t4); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t4); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t4); } while (0); do { ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (36)) | (((kc->u.wide[11])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (3)) | (((kc->u.wide[22])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (41)) | (((kc->u.wide[ 8])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (18)) | (((kc->u.wide[19])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (1)) | (((kc->u.wide[14])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (44)) | (((kc->u.wide[20])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (10)) | (((kc->u.wide[ 6])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (45)) | (((kc->u.wide[17])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (2)) | (((kc->u.wide[ 3])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (62)) | (((kc->u.wide[23])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (6)) | (((kc->u.wide[ 9])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (43)) | (((kc->u.wide[15])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (15)) | (((kc->u.wide[ 1])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (61)) | (((kc->u.wide[12])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (28)) | (((kc->u.wide[ 7])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (55)) | (((kc->u.wide[18])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (25)) | (((kc->u.wide[ 4])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (21)) | (((kc->u.wide[10])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (56)) | (((kc->u.wide[21])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (27)) | (((kc->u.wide[16])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (20)) | (((kc->u.wide[ 2])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (39)) | (((kc->u.wide[13])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (8)) | (((kc->u.wide[24])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (14)) | (((kc->u.wide[ 5])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[15])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[15])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[10])); (c1 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[ 5])); (c2 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[20])); (c4 = (kc->u.wide[ 5]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[20]) = c1); ((kc->u.wide[15]) = c2); ((kc->u.wide[10]) = c3); ((kc->u.wide[ 5]) = c4); (bnn = ((~(kc->u.wide[12])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[22])); (c0 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) & (kc->u.wide[17])); (c1 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) | bnn); (c2 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[ 7])); (c3 = (kc->u.wide[17]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) & (kc->u.wide[ 2])); (c4 = (kc->u.wide[12]) ^ kt); } while (0); ((kc->u.wide[ 7]) = c0); ((kc->u.wide[ 2]) = c1); ((kc->u.wide[22]) = c2); ((kc->u.wide[17]) = c3); ((kc->u.wide[12]) = c4); (bnn = ((~(kc->u.wide[24])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[ 4])); (c0 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[24])); (c1 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[19])); (c2 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[14])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) & (kc->u.wide[ 9])); (c4 = (kc->u.wide[19]) ^ kt); } while (0); ((kc->u.wide[14]) = c0); ((kc->u.wide[ 9]) = c1); ((kc->u.wide[ 4]) = c2); ((kc->u.wide[24]) = c3); ((kc->u.wide[19]) = c4); (bnn = ((~(kc->u.wide[ 1])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[11]) & (kc->u.wide[ 6])); (c0 = (kc->u.wide[16]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) | (kc->u.wide[ 1])); (c1 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[21])); (c2 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) & (kc->u.wide[16])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) | (kc->u.wide[11])); (c4 = (kc->u.wide[21]) ^ kt); } while (0); ((kc->u.wide[16]) = c0); ((kc->u.wide[11]) = c1); ((kc->u.wide[ 6]) = c2); ((kc->u.wide[ 1]) = c3); ((kc->u.wide[21]) = c4); (bnn = ((~(kc->u.wide[18])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[13])); (c0 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[ 8])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) & (kc->u.wide[ 3])); (c2 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | (kc->u.wide[23])); (c3 = (kc->u.wide[ 8]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) & (kc->u.wide[18])); (c4 = (kc->u.wide[ 3]) ^ kt); } while (0); ((kc->u.wide[23]) = c0); ((kc->u.wide[18]) = c1); ((kc->u.wide[13]) = c2); ((kc->u.wide[ 8]) = c3); ((kc->u.wide[ 3]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 4]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[20]) ^ (kc->u.wide[ 2])); (tt1 = (kc->u.wide[ 9]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 5]) ^ (kc->u.wide[12])); (tt3 = (kc->u.wide[19]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[15]) ^ (kc->u.wide[22])); (tt1 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 7])); (tt3 = (kc->u.wide[14]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[10]) ^ (kc->u.wide[17])); (tt1 = (kc->u.wide[24]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[20]) ^ (kc->u.wide[ 2])); (tt3 = (kc->u.wide[ 9]) ^ (kc->u.wide[11])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 5]) ^ (kc->u.wide[12])); (tt1 = (kc->u.wide[19]) ^ (kc->u.wide[21])); (tt0 = tt0 ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[15]) ^ (kc->u.wide[22])); (tt3 = (kc->u.wide[ 4]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[13])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 7])); (tt1 = (kc->u.wide[14]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[10]) ^ (kc->u.wide[17])); (tt3 = (kc->u.wide[24]) ^ (kc->u.wide[ 1])); (tt0 = tt0 ^ (kc->u.wide[ 8])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t0); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t0); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t0); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t0); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t1); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t1); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t1); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t1); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t1); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t2); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t2); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t2); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t2); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t2); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t3); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t3); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t3); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t3); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t4); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t4); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t4); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t4); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t4); } while (0); do { ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (36)) | (((kc->u.wide[ 7])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (3)) | (((kc->u.wide[14])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (41)) | (((kc->u.wide[16])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (18)) | (((kc->u.wide[23])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (1)) | (((kc->u.wide[20])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (44)) | (((kc->u.wide[ 2])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (10)) | (((kc->u.wide[ 9])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (45)) | (((kc->u.wide[11])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (2)) | (((kc->u.wide[18])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (62)) | (((kc->u.wide[15])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (6)) | (((kc->u.wide[22])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (43)) | (((kc->u.wide[ 4])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (15)) | (((kc->u.wide[ 6])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (61)) | (((kc->u.wide[13])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (28)) | (((kc->u.wide[10])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (55)) | (((kc->u.wide[17])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (25)) | (((kc->u.wide[24])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (21)) | (((kc->u.wide[ 1])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (56)) | (((kc->u.wide[ 8])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (27)) | (((kc->u.wide[ 5])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (20)) | (((kc->u.wide[12])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (39)) | (((kc->u.wide[19])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (8)) | (((kc->u.wide[21])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (14)) | (((kc->u.wide[ 3])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[ 4])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) | (kc->u.wide[ 4])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 1])); (c1 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[ 3])); (c2 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[ 2])); (c4 = (kc->u.wide[ 3]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[ 2]) = c1); ((kc->u.wide[ 4]) = c2); ((kc->u.wide[ 1]) = c3); ((kc->u.wide[ 3]) = c4); (bnn = ((~(kc->u.wide[13])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[14])); (c0 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) & (kc->u.wide[11])); (c1 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) | bnn); (c2 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[10])); (c3 = (kc->u.wide[11]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[12])); (c4 = (kc->u.wide[13]) ^ kt); } while (0); ((kc->u.wide[10]) = c0); ((kc->u.wide[12]) = c1); ((kc->u.wide[14]) = c2); ((kc->u.wide[11]) = c3); ((kc->u.wide[13]) = c4); (bnn = ((~(kc->u.wide[21])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[24])); (c0 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[21])); (c1 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[23])); (c2 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) | (kc->u.wide[20])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) & (kc->u.wide[22])); (c4 = (kc->u.wide[23]) ^ kt); } while (0); ((kc->u.wide[20]) = c0); ((kc->u.wide[22]) = c1); ((kc->u.wide[24]) = c2); ((kc->u.wide[21]) = c3); ((kc->u.wide[23]) = c4); (bnn = ((~(kc->u.wide[ 6])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) & (kc->u.wide[ 9])); (c0 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) | (kc->u.wide[ 6])); (c1 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 8])); (c2 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) & (kc->u.wide[ 5])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) | (kc->u.wide[ 7])); (c4 = (kc->u.wide[ 8]) ^ kt); } while (0); ((kc->u.wide[ 5]) = c0); ((kc->u.wide[ 7]) = c1); ((kc->u.wide[ 9]) = c2); ((kc->u.wide[ 6]) = c3); ((kc->u.wide[ 8]) = c4); (bnn = ((~(kc->u.wide[17])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[19])); (c0 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[16])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) & (kc->u.wide[18])); (c2 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | (kc->u.wide[15])); (c3 = (kc->u.wide[16]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) & (kc->u.wide[17])); (c4 = (kc->u.wide[18]) ^ kt); } while (0); ((kc->u.wide[15]) = c0); ((kc->u.wide[17]) = c1); ((kc->u.wide[19]) = c2); ((kc->u.wide[16]) = c3); ((kc->u.wide[18]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 5]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 2]) ^ (kc->u.wide[12])); (tt1 = (kc->u.wide[22]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 3]) ^ (kc->u.wide[13])); (tt3 = (kc->u.wide[23]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 4]) ^ (kc->u.wide[14])); (tt1 = (kc->u.wide[24]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[10])); (tt3 = (kc->u.wide[20]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 1]) ^ (kc->u.wide[11])); (tt1 = (kc->u.wide[21]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 2]) ^ (kc->u.wide[12])); (tt3 = (kc->u.wide[22]) ^ (kc->u.wide[ 7])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 3]) ^ (kc->u.wide[13])); (tt1 = (kc->u.wide[23]) ^ (kc->u.wide[ 8])); (tt0 = tt0 ^ (kc->u.wide[18])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 4]) ^ (kc->u.wide[14])); (tt3 = (kc->u.wide[24]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[19])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[10])); (tt1 = (kc->u.wide[20]) ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ (kc->u.wide[15])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 1]) ^ (kc->u.wide[11])); (tt3 = (kc->u.wide[21]) ^ (kc->u.wide[ 6])); (tt0 = tt0 ^ (kc->u.wide[16])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t0); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t0); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t0); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t0); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t1); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t1); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t1); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t1); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t1); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t2); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t2); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t2); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t2); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t2); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t3); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t3); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t3); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t3); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t3); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t4); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t4); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t4); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t4); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t4); } while (0); do { ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (36)) | (((kc->u.wide[10])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (3)) | (((kc->u.wide[20])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (41)) | (((kc->u.wide[ 5])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (18)) | (((kc->u.wide[15])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (1)) | (((kc->u.wide[ 2])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (44)) | (((kc->u.wide[12])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (10)) | (((kc->u.wide[22])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (45)) | (((kc->u.wide[ 7])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (2)) | (((kc->u.wide[17])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (62)) | (((kc->u.wide[ 4])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (6)) | (((kc->u.wide[14])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (43)) | (((kc->u.wide[24])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (15)) | (((kc->u.wide[ 9])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (61)) | (((kc->u.wide[19])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (28)) | (((kc->u.wide[ 1])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (55)) | (((kc->u.wide[11])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (25)) | (((kc->u.wide[21])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (21)) | (((kc->u.wide[ 6])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (56)) | (((kc->u.wide[16])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (27)) | (((kc->u.wide[ 3])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (20)) | (((kc->u.wide[13])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (39)) | (((kc->u.wide[23])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (8)) | (((kc->u.wide[ 8])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (14)) | (((kc->u.wide[18])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[24])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[12]) | (kc->u.wide[24])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 6])); (c1 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[18])); (c2 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[12])); (c4 = (kc->u.wide[18]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[12]) = c1); ((kc->u.wide[24]) = c2); ((kc->u.wide[ 6]) = c3); ((kc->u.wide[18]) = c4); (bnn = ((~(kc->u.wide[19])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[20])); (c0 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[20]) & (kc->u.wide[ 7])); (c1 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 7]) | bnn); (c2 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[ 1])); (c3 = (kc->u.wide[ 7]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[13])); (c4 = (kc->u.wide[19]) ^ kt); } while (0); ((kc->u.wide[ 1]) = c0); ((kc->u.wide[13]) = c1); ((kc->u.wide[20]) = c2); ((kc->u.wide[ 7]) = c3); ((kc->u.wide[19]) = c4); (bnn = ((~(kc->u.wide[ 8])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[21])); (c0 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[21]) & (kc->u.wide[ 8])); (c1 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[15])); (c2 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) | (kc->u.wide[ 2])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) & (kc->u.wide[14])); (c4 = (kc->u.wide[15]) ^ kt); } while (0); ((kc->u.wide[ 2]) = c0); ((kc->u.wide[14]) = c1); ((kc->u.wide[21]) = c2); ((kc->u.wide[ 8]) = c3); ((kc->u.wide[15]) = c4); (bnn = ((~(kc->u.wide[ 9])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[10]) & (kc->u.wide[22])); (c0 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[22]) | (kc->u.wide[ 9])); (c1 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[16])); (c2 = (kc->u.wide[22]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[16]) & (kc->u.wide[ 3])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) | (kc->u.wide[10])); (c4 = (kc->u.wide[16]) ^ kt); } while (0); ((kc->u.wide[ 3]) = c0); ((kc->u.wide[10]) = c1); ((kc->u.wide[22]) = c2); ((kc->u.wide[ 9]) = c3); ((kc->u.wide[16]) = c4); (bnn = ((~(kc->u.wide[11])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[23])); (c0 = (kc->u.wide[ 4]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) | (kc->u.wide[ 5])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) & (kc->u.wide[17])); (c2 = (kc->u.wide[23]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) | (kc->u.wide[ 4])); (c3 = (kc->u.wide[ 5]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) & (kc->u.wide[11])); (c4 = (kc->u.wide[17]) ^ kt); } while (0); ((kc->u.wide[ 4]) = c0); ((kc->u.wide[11]) = c1); ((kc->u.wide[23]) = c2); ((kc->u.wide[ 5]) = c3); ((kc->u.wide[17]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 6]); } while (0); do { do { sph_u64 t0; sph_u64 t1; sph_u64 t2; sph_u64 t3; sph_u64 t4; do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[12]) ^ (kc->u.wide[13])); (tt1 = (kc->u.wide[14]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[11])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[18]) ^ (kc->u.wide[19])); (tt3 = (kc->u.wide[15]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt2 = tt2 ^ tt3); (t0 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[24]) ^ (kc->u.wide[20])); (tt1 = (kc->u.wide[21]) ^ (kc->u.wide[22])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 1])); (tt3 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt2 = tt2 ^ tt3); (t1 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 7])); (tt1 = (kc->u.wide[ 8]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[12]) ^ (kc->u.wide[13])); (tt3 = (kc->u.wide[14]) ^ (kc->u.wide[10])); (tt0 = tt0 ^ (kc->u.wide[11])); (tt2 = tt2 ^ tt3); (t2 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[18]) ^ (kc->u.wide[19])); (tt1 = (kc->u.wide[15]) ^ (kc->u.wide[16])); (tt0 = tt0 ^ (kc->u.wide[17])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[24]) ^ (kc->u.wide[20])); (tt3 = (kc->u.wide[21]) ^ (kc->u.wide[22])); (tt0 = tt0 ^ (kc->u.wide[23])); (tt2 = tt2 ^ tt3); (t3 = tt0 ^ tt2); } while (0); do { sph_u64 tt0; sph_u64 tt1; sph_u64 tt2; sph_u64 tt3; (tt0 = (kc->u.wide[ 0]) ^ (kc->u.wide[ 1])); (tt1 = (kc->u.wide[ 2]) ^ (kc->u.wide[ 3])); (tt0 = tt0 ^ (kc->u.wide[ 4])); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = (kc->u.wide[ 6]) ^ (kc->u.wide[ 7])); (tt3 = (kc->u.wide[ 8]) ^ (kc->u.wide[ 9])); (tt0 = tt0 ^ (kc->u.wide[ 5])); (tt2 = tt2 ^ tt3); (t4 = tt0 ^ tt2); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ t0); ((kc->u.wide[ 1]) = (kc->u.wide[ 1]) ^ t0); ((kc->u.wide[ 2]) = (kc->u.wide[ 2]) ^ t0); ((kc->u.wide[ 3]) = (kc->u.wide[ 3]) ^ t0); ((kc->u.wide[ 4]) = (kc->u.wide[ 4]) ^ t0); ((kc->u.wide[12]) = (kc->u.wide[12]) ^ t1); ((kc->u.wide[13]) = (kc->u.wide[13]) ^ t1); ((kc->u.wide[14]) = (kc->u.wide[14]) ^ t1); ((kc->u.wide[10]) = (kc->u.wide[10]) ^ t1); ((kc->u.wide[11]) = (kc->u.wide[11]) ^ t1); ((kc->u.wide[24]) = (kc->u.wide[24]) ^ t2); ((kc->u.wide[20]) = (kc->u.wide[20]) ^ t2); ((kc->u.wide[21]) = (kc->u.wide[21]) ^ t2); ((kc->u.wide[22]) = (kc->u.wide[22]) ^ t2); ((kc->u.wide[23]) = (kc->u.wide[23]) ^ t2); ((kc->u.wide[ 6]) = (kc->u.wide[ 6]) ^ t3); ((kc->u.wide[ 7]) = (kc->u.wide[ 7]) ^ t3); ((kc->u.wide[ 8]) = (kc->u.wide[ 8]) ^ t3); ((kc->u.wide[ 9]) = (kc->u.wide[ 9]) ^ t3); ((kc->u.wide[ 5]) = (kc->u.wide[ 5]) ^ t3); ((kc->u.wide[18]) = (kc->u.wide[18]) ^ t4); ((kc->u.wide[19]) = (kc->u.wide[19]) ^ t4); ((kc->u.wide[15]) = (kc->u.wide[15]) ^ t4); ((kc->u.wide[16]) = (kc->u.wide[16]) ^ t4); ((kc->u.wide[17]) = (kc->u.wide[17]) ^ t4); } while (0); do { ((kc->u.wide[ 1]) = (((((kc->u.wide[ 1])) << (36)) | (((kc->u.wide[ 1])) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 2]) = (((((kc->u.wide[ 2])) << (3)) | (((kc->u.wide[ 2])) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 3]) = (((((kc->u.wide[ 3])) << (41)) | (((kc->u.wide[ 3])) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 4]) = (((((kc->u.wide[ 4])) << (18)) | (((kc->u.wide[ 4])) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[12]) = (((((kc->u.wide[12])) << (1)) | (((kc->u.wide[12])) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[13]) = (((((kc->u.wide[13])) << (44)) | (((kc->u.wide[13])) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[14]) = (((((kc->u.wide[14])) << (10)) | (((kc->u.wide[14])) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[10]) = (((((kc->u.wide[10])) << (45)) | (((kc->u.wide[10])) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[11]) = (((((kc->u.wide[11])) << (2)) | (((kc->u.wide[11])) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[24]) = (((((kc->u.wide[24])) << (62)) | (((kc->u.wide[24])) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[20]) = (((((kc->u.wide[20])) << (6)) | (((kc->u.wide[20])) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[21]) = (((((kc->u.wide[21])) << (43)) | (((kc->u.wide[21])) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[22]) = (((((kc->u.wide[22])) << (15)) | (((kc->u.wide[22])) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[23]) = (((((kc->u.wide[23])) << (61)) | (((kc->u.wide[23])) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 6]) = (((((kc->u.wide[ 6])) << (28)) | (((kc->u.wide[ 6])) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 7]) = (((((kc->u.wide[ 7])) << (55)) | (((kc->u.wide[ 7])) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 8]) = (((((kc->u.wide[ 8])) << (25)) | (((kc->u.wide[ 8])) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 9]) = (((((kc->u.wide[ 9])) << (21)) | (((kc->u.wide[ 9])) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[ 5]) = (((((kc->u.wide[ 5])) << (56)) | (((kc->u.wide[ 5])) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[18]) = (((((kc->u.wide[18])) << (27)) | (((kc->u.wide[18])) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[19]) = (((((kc->u.wide[19])) << (20)) | (((kc->u.wide[19])) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[15]) = (((((kc->u.wide[15])) << (39)) | (((kc->u.wide[15])) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[16]) = (((((kc->u.wide[16])) << (8)) | (((kc->u.wide[16])) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); ((kc->u.wide[17]) = (((((kc->u.wide[17])) << (14)) | (((kc->u.wide[17])) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); } while (0); do { sph_u64 c0; sph_u64 c1; sph_u64 c2; sph_u64 c3; sph_u64 c4; sph_u64 bnn; (bnn = ((~(kc->u.wide[21])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[13]) | (kc->u.wide[21])); (c0 = (kc->u.wide[ 0]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 9])); (c1 = (kc->u.wide[13]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 9]) & (kc->u.wide[17])); (c2 = (kc->u.wide[21]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[17]) | (kc->u.wide[ 0])); (c3 = (kc->u.wide[ 9]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 0]) & (kc->u.wide[13])); (c4 = (kc->u.wide[17]) ^ kt); } while (0); ((kc->u.wide[ 0]) = c0); ((kc->u.wide[13]) = c1); ((kc->u.wide[21]) = c2); ((kc->u.wide[ 9]) = c3); ((kc->u.wide[17]) = c4); (bnn = ((~(kc->u.wide[23])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[19]) | (kc->u.wide[ 2])); (c0 = (kc->u.wide[ 6]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 2]) & (kc->u.wide[10])); (c1 = (kc->u.wide[19]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[10]) | bnn); (c2 = (kc->u.wide[ 2]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[23]) | (kc->u.wide[ 6])); (c3 = (kc->u.wide[10]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 6]) & (kc->u.wide[19])); (c4 = (kc->u.wide[23]) ^ kt); } while (0); ((kc->u.wide[ 6]) = c0); ((kc->u.wide[19]) = c1); ((kc->u.wide[ 2]) = c2); ((kc->u.wide[10]) = c3); ((kc->u.wide[23]) = c4); (bnn = ((~(kc->u.wide[16])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[20]) | (kc->u.wide[ 8])); (c0 = (kc->u.wide[12]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 8]) & (kc->u.wide[16])); (c1 = (kc->u.wide[20]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn & (kc->u.wide[ 4])); (c2 = (kc->u.wide[ 8]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 4]) | (kc->u.wide[12])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[12]) & (kc->u.wide[20])); (c4 = (kc->u.wide[ 4]) ^ kt); } while (0); ((kc->u.wide[12]) = c0); ((kc->u.wide[20]) = c1); ((kc->u.wide[ 8]) = c2); ((kc->u.wide[16]) = c3); ((kc->u.wide[ 4]) = c4); (bnn = ((~(kc->u.wide[22])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = (kc->u.wide[ 1]) & (kc->u.wide[14])); (c0 = (kc->u.wide[18]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[14]) | (kc->u.wide[22])); (c1 = (kc->u.wide[ 1]) ^ kt); } while (0); do { sph_u64 kt; (kt = bnn | (kc->u.wide[ 5])); (c2 = (kc->u.wide[14]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 5]) & (kc->u.wide[18])); (c3 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[18]) | (kc->u.wide[ 1])); (c4 = (kc->u.wide[ 5]) ^ kt); } while (0); ((kc->u.wide[18]) = c0); ((kc->u.wide[ 1]) = c1); ((kc->u.wide[14]) = c2); ((kc->u.wide[22]) = c3); ((kc->u.wide[ 5]) = c4); (bnn = ((~(kc->u.wide[ 7])) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); do { sph_u64 kt; (kt = bnn & (kc->u.wide[15])); (c0 = (kc->u.wide[24]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[15]) | (kc->u.wide[ 3])); (c1 = bnn ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[ 3]) & (kc->u.wide[11])); (c2 = (kc->u.wide[15]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[11]) | (kc->u.wide[24])); (c3 = (kc->u.wide[ 3]) ^ kt); } while (0); do { sph_u64 kt; (kt = (kc->u.wide[24]) & (kc->u.wide[ 7])); (c4 = (kc->u.wide[11]) ^ kt); } while (0); ((kc->u.wide[24]) = c0); ((kc->u.wide[ 7]) = c1); ((kc->u.wide[15]) = c2); ((kc->u.wide[ 3]) = c3); ((kc->u.wide[11]) = c4); } while (0); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 7]); } while (0); do { sph_u64 t; (t = (kc->u.wide[ 5])); ((kc->u.wide[ 5]) = (kc->u.wide[ 6])); ((kc->u.wide[ 6]) = (kc->u.wide[19])); ((kc->u.wide[19]) = t); (t = (kc->u.wide[10])); ((kc->u.wide[10]) = (kc->u.wide[12])); ((kc->u.wide[12]) = (kc->u.wide[ 8])); ((kc->u.wide[ 8]) = t); (t = (kc->u.wide[15])); ((kc->u.wide[15]) = (kc->u.wide[18])); ((kc->u.wide[18]) = (kc->u.wide[22])); ((kc->u.wide[22]) = t); (t = (kc->u.wide[20])); ((kc->u.wide[20]) = (kc->u.wide[24])); ((kc->u.wide[24]) = (kc->u.wide[11])); ((kc->u.wide[11]) = t); (t = (kc->u.wide[ 1])); ((kc->u.wide[ 1]) = (kc->u.wide[13])); ((kc->u.wide[13]) = (kc->u.wide[16])); ((kc->u.wide[16]) = t); (t = (kc->u.wide[21])); ((kc->u.wide[21]) = (kc->u.wide[ 7])); ((kc->u.wide[ 7]) = (kc->u.wide[ 2])); ((kc->u.wide[ 2]) = t); (t = (kc->u.wide[17])); ((kc->u.wide[17]) = (kc->u.wide[14])); ((kc->u.wide[14]) = (kc->u.wide[ 4])); ((kc->u.wide[ 4]) = t); (t = (kc->u.wide[ 3])); ((kc->u.wide[ 3]) = (kc->u.wide[ 9])); ((kc->u.wide[ 9]) = (kc->u.wide[23])); ((kc->u.wide[23]) = t); } while (0); } } while (0);

 (kc->u.wide[ 1]) ^= 0x1;
 (kc->u.wide[ 8]) ^= 0x8000000000000000ULL;

 stateOut[0] = (kc->u.wide[ 0]);
 stateOut[1] = (kc->u.wide[ 1]);
 stateOut[2] = (kc->u.wide[ 2]);
 stateOut[3] = (kc->u.wide[ 3]);
 stateOut[4] = (kc->u.wide[ 4]);
 stateOut[5] = (kc->u.wide[ 5]);
 stateOut[6] = (kc->u.wide[ 6]);
 stateOut[7] = (kc->u.wide[ 7]);
 stateOut[8] = (kc->u.wide[ 8]);
 stateOut[9] = (kc->u.wide[ 9]);
 stateOut[10] = (kc->u.wide[10]);
 stateOut[11] = (kc->u.wide[11]);
 stateOut[12] = (kc->u.wide[12]);
 stateOut[13] = (kc->u.wide[13]);
 stateOut[14] = (kc->u.wide[14]);
 stateOut[15] = (kc->u.wide[15]);
 stateOut[16] = (kc->u.wide[16]);
 stateOut[17] = (kc->u.wide[17]);
 stateOut[18] = (kc->u.wide[18]);
 stateOut[19] = (kc->u.wide[19]);
 stateOut[20] = (kc->u.wide[20]);
 stateOut[21] = (kc->u.wide[21]);
 stateOut[22] = (kc->u.wide[22]);
 stateOut[23] = (kc->u.wide[23]);
 stateOut[24] = (kc->u.wide[24]);
}
# 1778 "xptMiner/keccak.c"
void keccak_core_opt(sph_keccak512_context *kc, unsigned long long* keccakPre, unsigned long long w1, unsigned long long* dst)
{
 unsigned char *buf;

 size_t ptr;

 int len = 80;
 size_t clen;

 unsigned eb;
 int j;
 int i;
 unsigned long long t;

 buf = kc->buf;

 (kc->u.wide[ 0]) = keccakPre[ 0];
 (kc->u.wide[ 1]) = keccakPre[ 1];
 (kc->u.wide[ 2]) = keccakPre[ 2];
 (kc->u.wide[ 3]) = keccakPre[ 3];
 (kc->u.wide[ 4]) = keccakPre[ 4];
 (kc->u.wide[ 5]) = keccakPre[ 5];
 (kc->u.wide[ 6]) = keccakPre[ 6];
 (kc->u.wide[ 7]) = keccakPre[ 7];
 (kc->u.wide[ 8]) = keccakPre[ 8];
 (kc->u.wide[ 9]) = keccakPre[ 9];
 (kc->u.wide[10]) = keccakPre[10];
 (kc->u.wide[11]) = keccakPre[11];
 (kc->u.wide[12]) = keccakPre[12];
 (kc->u.wide[13]) = keccakPre[13];
 (kc->u.wide[14]) = keccakPre[14];
 (kc->u.wide[15]) = keccakPre[15];
 (kc->u.wide[16]) = keccakPre[16];
 (kc->u.wide[17]) = keccakPre[17];
 (kc->u.wide[18]) = keccakPre[18];
 (kc->u.wide[19]) = keccakPre[19];
 (kc->u.wide[20]) = keccakPre[20];
 (kc->u.wide[21]) = keccakPre[21];
 (kc->u.wide[22]) = keccakPre[22];
 (kc->u.wide[23]) = keccakPre[23];
 (kc->u.wide[24]) = keccakPre[24];


 (kc->u.wide[ 0]) ^= w1;


 for (j = 0; j < 24; j += 4)
 {
  do { THETA ( (kc->u.wide[ 0]), (kc->u.wide[ 5]), (kc->u.wide[10]), (kc->u.wide[15]), (kc->u.wide[20]), (kc->u.wide[ 1]), (kc->u.wide[ 6]), (kc->u.wide[11]), (kc->u.wide[16]), (kc->u.wide[21]), (kc->u.wide[ 2]), (kc->u.wide[ 7]), (kc->u.wide[12]), (kc->u.wide[17]), (kc->u.wide[22]), (kc->u.wide[ 3]), (kc->u.wide[ 8]), (kc->u.wide[13]), (kc->u.wide[18]), (kc->u.wide[23]), (kc->u.wide[ 4]), (kc->u.wide[ 9]), (kc->u.wide[14]), (kc->u.wide[19]), (kc->u.wide[24]) ); RHO ( (kc->u.wide[ 0]), (kc->u.wide[ 5]), (kc->u.wide[10]), (kc->u.wide[15]), (kc->u.wide[20]), (kc->u.wide[ 1]), (kc->u.wide[ 6]), (kc->u.wide[11]), (kc->u.wide[16]), (kc->u.wide[21]), (kc->u.wide[ 2]), (kc->u.wide[ 7]), (kc->u.wide[12]), (kc->u.wide[17]), (kc->u.wide[22]), (kc->u.wide[ 3]), (kc->u.wide[ 8]), (kc->u.wide[13]), (kc->u.wide[18]), (kc->u.wide[23]), (kc->u.wide[ 4]), (kc->u.wide[ 9]), (kc->u.wide[14]), (kc->u.wide[19]), (kc->u.wide[24]) ); KHI ( (kc->u.wide[ 0]), (kc->u.wide[ 3]), (kc->u.wide[ 1]), (kc->u.wide[ 4]), (kc->u.wide[ 2]), (kc->u.wide[ 6]), (kc->u.wide[ 9]), (kc->u.wide[ 7]), (kc->u.wide[ 5]), (kc->u.wide[ 8]), (kc->u.wide[12]), (kc->u.wide[10]), (kc->u.wide[13]), (kc->u.wide[11]), (kc->u.wide[14]), (kc->u.wide[18]), (kc->u.wide[16]), (kc->u.wide[19]), (kc->u.wide[17]), (kc->u.wide[15]), (kc->u.wide[24]), (kc->u.wide[22]), (kc->u.wide[20]), (kc->u.wide[23]), (kc->u.wide[21]) ); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 0]); } while (0);
  do { THETA ( (kc->u.wide[ 0]), (kc->u.wide[ 3]), (kc->u.wide[ 1]), (kc->u.wide[ 4]), (kc->u.wide[ 2]), (kc->u.wide[ 6]), (kc->u.wide[ 9]), (kc->u.wide[ 7]), (kc->u.wide[ 5]), (kc->u.wide[ 8]), (kc->u.wide[12]), (kc->u.wide[10]), (kc->u.wide[13]), (kc->u.wide[11]), (kc->u.wide[14]), (kc->u.wide[18]), (kc->u.wide[16]), (kc->u.wide[19]), (kc->u.wide[17]), (kc->u.wide[15]), (kc->u.wide[24]), (kc->u.wide[22]), (kc->u.wide[20]), (kc->u.wide[23]), (kc->u.wide[21]) ); RHO ( (kc->u.wide[ 0]), (kc->u.wide[ 3]), (kc->u.wide[ 1]), (kc->u.wide[ 4]), (kc->u.wide[ 2]), (kc->u.wide[ 6]), (kc->u.wide[ 9]), (kc->u.wide[ 7]), (kc->u.wide[ 5]), (kc->u.wide[ 8]), (kc->u.wide[12]), (kc->u.wide[10]), (kc->u.wide[13]), (kc->u.wide[11]), (kc->u.wide[14]), (kc->u.wide[18]), (kc->u.wide[16]), (kc->u.wide[19]), (kc->u.wide[17]), (kc->u.wide[15]), (kc->u.wide[24]), (kc->u.wide[22]), (kc->u.wide[20]), (kc->u.wide[23]), (kc->u.wide[21]) ); KHI ( (kc->u.wide[ 0]), (kc->u.wide[18]), (kc->u.wide[ 6]), (kc->u.wide[24]), (kc->u.wide[12]), (kc->u.wide[ 9]), (kc->u.wide[22]), (kc->u.wide[10]), (kc->u.wide[ 3]), (kc->u.wide[16]), (kc->u.wide[13]), (kc->u.wide[ 1]), (kc->u.wide[19]), (kc->u.wide[ 7]), (kc->u.wide[20]), (kc->u.wide[17]), (kc->u.wide[ 5]), (kc->u.wide[23]), (kc->u.wide[11]), (kc->u.wide[ 4]), (kc->u.wide[21]), (kc->u.wide[14]), (kc->u.wide[ 2]), (kc->u.wide[15]), (kc->u.wide[ 8]) ); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 1]); } while (0);
  do { THETA ( (kc->u.wide[ 0]), (kc->u.wide[18]), (kc->u.wide[ 6]), (kc->u.wide[24]), (kc->u.wide[12]), (kc->u.wide[ 9]), (kc->u.wide[22]), (kc->u.wide[10]), (kc->u.wide[ 3]), (kc->u.wide[16]), (kc->u.wide[13]), (kc->u.wide[ 1]), (kc->u.wide[19]), (kc->u.wide[ 7]), (kc->u.wide[20]), (kc->u.wide[17]), (kc->u.wide[ 5]), (kc->u.wide[23]), (kc->u.wide[11]), (kc->u.wide[ 4]), (kc->u.wide[21]), (kc->u.wide[14]), (kc->u.wide[ 2]), (kc->u.wide[15]), (kc->u.wide[ 8]) ); RHO ( (kc->u.wide[ 0]), (kc->u.wide[18]), (kc->u.wide[ 6]), (kc->u.wide[24]), (kc->u.wide[12]), (kc->u.wide[ 9]), (kc->u.wide[22]), (kc->u.wide[10]), (kc->u.wide[ 3]), (kc->u.wide[16]), (kc->u.wide[13]), (kc->u.wide[ 1]), (kc->u.wide[19]), (kc->u.wide[ 7]), (kc->u.wide[20]), (kc->u.wide[17]), (kc->u.wide[ 5]), (kc->u.wide[23]), (kc->u.wide[11]), (kc->u.wide[ 4]), (kc->u.wide[21]), (kc->u.wide[14]), (kc->u.wide[ 2]), (kc->u.wide[15]), (kc->u.wide[ 8]) ); KHI ( (kc->u.wide[ 0]), (kc->u.wide[17]), (kc->u.wide[ 9]), (kc->u.wide[21]), (kc->u.wide[13]), (kc->u.wide[22]), (kc->u.wide[14]), (kc->u.wide[ 1]), (kc->u.wide[18]), (kc->u.wide[ 5]), (kc->u.wide[19]), (kc->u.wide[ 6]), (kc->u.wide[23]), (kc->u.wide[10]), (kc->u.wide[ 2]), (kc->u.wide[11]), (kc->u.wide[ 3]), (kc->u.wide[15]), (kc->u.wide[ 7]), (kc->u.wide[24]), (kc->u.wide[ 8]), (kc->u.wide[20]), (kc->u.wide[12]), (kc->u.wide[ 4]), (kc->u.wide[16]) ); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 2]); } while (0);
  do { THETA ( (kc->u.wide[ 0]), (kc->u.wide[17]), (kc->u.wide[ 9]), (kc->u.wide[21]), (kc->u.wide[13]), (kc->u.wide[22]), (kc->u.wide[14]), (kc->u.wide[ 1]), (kc->u.wide[18]), (kc->u.wide[ 5]), (kc->u.wide[19]), (kc->u.wide[ 6]), (kc->u.wide[23]), (kc->u.wide[10]), (kc->u.wide[ 2]), (kc->u.wide[11]), (kc->u.wide[ 3]), (kc->u.wide[15]), (kc->u.wide[ 7]), (kc->u.wide[24]), (kc->u.wide[ 8]), (kc->u.wide[20]), (kc->u.wide[12]), (kc->u.wide[ 4]), (kc->u.wide[16]) ); RHO ( (kc->u.wide[ 0]), (kc->u.wide[17]), (kc->u.wide[ 9]), (kc->u.wide[21]), (kc->u.wide[13]), (kc->u.wide[22]), (kc->u.wide[14]), (kc->u.wide[ 1]), (kc->u.wide[18]), (kc->u.wide[ 5]), (kc->u.wide[19]), (kc->u.wide[ 6]), (kc->u.wide[23]), (kc->u.wide[10]), (kc->u.wide[ 2]), (kc->u.wide[11]), (kc->u.wide[ 3]), (kc->u.wide[15]), (kc->u.wide[ 7]), (kc->u.wide[24]), (kc->u.wide[ 8]), (kc->u.wide[20]), (kc->u.wide[12]), (kc->u.wide[ 4]), (kc->u.wide[16]) ); KHI ( (kc->u.wide[ 0]), (kc->u.wide[11]), (kc->u.wide[22]), (kc->u.wide[ 8]), (kc->u.wide[19]), (kc->u.wide[14]), (kc->u.wide[20]), (kc->u.wide[ 6]), (kc->u.wide[17]), (kc->u.wide[ 3]), (kc->u.wide[23]), (kc->u.wide[ 9]), (kc->u.wide[15]), (kc->u.wide[ 1]), (kc->u.wide[12]), (kc->u.wide[ 7]), (kc->u.wide[18]), (kc->u.wide[ 4]), (kc->u.wide[10]), (kc->u.wide[21]), (kc->u.wide[16]), (kc->u.wide[ 2]), (kc->u.wide[13]), (kc->u.wide[24]), (kc->u.wide[ 5]) ); ((kc->u.wide[ 0]) = (kc->u.wide[ 0]) ^ RC[j + 3]); } while (0);
# 1843 "xptMiner/keccak.c"
  (t = (kc->u.wide[ 5]));
  ((kc->u.wide[ 5]) = (kc->u.wide[11]));
  ((kc->u.wide[11]) = (kc->u.wide[ 6]));
  ((kc->u.wide[ 6]) = (kc->u.wide[20]));
  ((kc->u.wide[20]) = (kc->u.wide[19]));
  ((kc->u.wide[19]) = (kc->u.wide[24]));
  ((kc->u.wide[24]) = t);
  (t = (kc->u.wide[10]));
  ((kc->u.wide[10]) = (kc->u.wide[22]));
  ((kc->u.wide[22]) = (kc->u.wide[12]));
  ((kc->u.wide[12]) = (kc->u.wide[15]));
  ((kc->u.wide[15]) = (kc->u.wide[ 8]));
  ((kc->u.wide[ 8]) = (kc->u.wide[18]));
  ((kc->u.wide[18]) = t);
  (t = (kc->u.wide[ 1]));
  ((kc->u.wide[ 1]) = (kc->u.wide[14]));
  ((kc->u.wide[14]) = (kc->u.wide[13]));
  ((kc->u.wide[13]) = (kc->u.wide[ 4]));
  ((kc->u.wide[ 4]) = (kc->u.wide[16]));
  ((kc->u.wide[16]) = (kc->u.wide[17]));
  ((kc->u.wide[17]) = t);
  (t = (kc->u.wide[21]));
  ((kc->u.wide[21]) = (kc->u.wide[ 3]));
  ((kc->u.wide[ 3]) = (kc->u.wide[ 7]));
  ((kc->u.wide[ 7]) = (kc->u.wide[ 9]));
  ((kc->u.wide[ 9]) = (kc->u.wide[ 2]));
  ((kc->u.wide[ 2]) = (kc->u.wide[23]));
  ((kc->u.wide[23]) = t);
 }



 dst[0] = (kc->u.wide[ 0]);
 dst[1] = ~(kc->u.wide[ 1]);
 dst[2] = ~(kc->u.wide[ 2]);
 dst[3] = (kc->u.wide[ 3]);
 dst[4] = (kc->u.wide[ 4]);
 dst[5] = (kc->u.wide[ 5]);
 dst[6] = (kc->u.wide[ 6]);
 dst[7] = (kc->u.wide[ 7]);
# 1917 "xptMiner/keccak.c"
}
# 2018 "xptMiner/keccak.c"
static void keccak_close28( sph_keccak_context *kc, unsigned ub, unsigned n, void *dst) { unsigned eb; union { unsigned char tmp[144 + 1]; sph_u64 dummy; } u; size_t j; eb = (0x100 | (ub & 0xFF)) >> (8 - n); if (kc->ptr == (144 - 1)) { if (n == 7) { u.tmp[0] = eb; memset(u.tmp + 1, 0, 144 - 1); u.tmp[144] = 0x80; j = 1 + 144; } else { u.tmp[0] = eb | 0x80; j = 1; } } else { j = 144 - kc->ptr; u.tmp[0] = eb; memset(u.tmp + 1, 0, j - 2); u.tmp[j - 1] = 0x80; } keccak_core(kc, u.tmp, j, 144); kc->u.wide[ 1] = ~kc->u.wide[ 1]; kc->u.wide[ 2] = ~kc->u.wide[ 2]; kc->u.wide[ 8] = ~kc->u.wide[ 8]; kc->u.wide[12] = ~kc->u.wide[12]; kc->u.wide[17] = ~kc->u.wide[17]; kc->u.wide[20] = ~kc->u.wide[20]; for (j = 0; j < 28; j += 8) sph_enc64le_aligned(u.tmp + j, kc->u.wide[j >> 3]); memcpy(dst, u.tmp, 28); keccak_init(kc, (unsigned)28 << 3); }
static void keccak_close32( sph_keccak_context *kc, unsigned ub, unsigned n, void *dst) { unsigned eb; union { unsigned char tmp[136 + 1]; sph_u64 dummy; } u; size_t j; eb = (0x100 | (ub & 0xFF)) >> (8 - n); if (kc->ptr == (136 - 1)) { if (n == 7) { u.tmp[0] = eb; memset(u.tmp + 1, 0, 136 - 1); u.tmp[136] = 0x80; j = 1 + 136; } else { u.tmp[0] = eb | 0x80; j = 1; } } else { j = 136 - kc->ptr; u.tmp[0] = eb; memset(u.tmp + 1, 0, j - 2); u.tmp[j - 1] = 0x80; } keccak_core(kc, u.tmp, j, 136); kc->u.wide[ 1] = ~kc->u.wide[ 1]; kc->u.wide[ 2] = ~kc->u.wide[ 2]; kc->u.wide[ 8] = ~kc->u.wide[ 8]; kc->u.wide[12] = ~kc->u.wide[12]; kc->u.wide[17] = ~kc->u.wide[17]; kc->u.wide[20] = ~kc->u.wide[20]; for (j = 0; j < 32; j += 8) sph_enc64le_aligned(u.tmp + j, kc->u.wide[j >> 3]); memcpy(dst, u.tmp, 32); keccak_init(kc, (unsigned)32 << 3); }
static void keccak_close48( sph_keccak_context *kc, unsigned ub, unsigned n, void *dst) { unsigned eb; union { unsigned char tmp[104 + 1]; sph_u64 dummy; } u; size_t j; eb = (0x100 | (ub & 0xFF)) >> (8 - n); if (kc->ptr == (104 - 1)) { if (n == 7) { u.tmp[0] = eb; memset(u.tmp + 1, 0, 104 - 1); u.tmp[104] = 0x80; j = 1 + 104; } else { u.tmp[0] = eb | 0x80; j = 1; } } else { j = 104 - kc->ptr; u.tmp[0] = eb; memset(u.tmp + 1, 0, j - 2); u.tmp[j - 1] = 0x80; } keccak_core(kc, u.tmp, j, 104); kc->u.wide[ 1] = ~kc->u.wide[ 1]; kc->u.wide[ 2] = ~kc->u.wide[ 2]; kc->u.wide[ 8] = ~kc->u.wide[ 8]; kc->u.wide[12] = ~kc->u.wide[12]; kc->u.wide[17] = ~kc->u.wide[17]; kc->u.wide[20] = ~kc->u.wide[20]; for (j = 0; j < 48; j += 8) sph_enc64le_aligned(u.tmp + j, kc->u.wide[j >> 3]); memcpy(dst, u.tmp, 48); keccak_init(kc, (unsigned)48 << 3); }
static void keccak_close64( sph_keccak_context *kc, unsigned ub, unsigned n, void *dst) { unsigned eb; union { unsigned char tmp[72 + 1]; sph_u64 dummy; } u; size_t j; eb = (0x100 | (ub & 0xFF)) >> (8 - n); if (kc->ptr == (72 - 1)) { if (n == 7) { u.tmp[0] = eb; memset(u.tmp + 1, 0, 72 - 1); u.tmp[72] = 0x80; j = 1 + 72; } else { u.tmp[0] = eb | 0x80; j = 1; } } else { j = 72 - kc->ptr; u.tmp[0] = eb; memset(u.tmp + 1, 0, j - 2); u.tmp[j - 1] = 0x80; } keccak_core(kc, u.tmp, j, 72); kc->u.wide[ 1] = ~kc->u.wide[ 1]; kc->u.wide[ 2] = ~kc->u.wide[ 2]; kc->u.wide[ 8] = ~kc->u.wide[ 8]; kc->u.wide[12] = ~kc->u.wide[12]; kc->u.wide[17] = ~kc->u.wide[17]; kc->u.wide[20] = ~kc->u.wide[20]; for (j = 0; j < 64; j += 8) sph_enc64le_aligned(u.tmp + j, kc->u.wide[j >> 3]); memcpy(dst, u.tmp, 64); keccak_init(kc, (unsigned)64 << 3); }


void
sph_keccak224_init(void *cc)
{
 keccak_init(cc, 224);
}


void
sph_keccak224(void *cc, const void *data, size_t len)
{
 keccak_core(cc, data, len, 144);
}


void
sph_keccak224_close(void *cc, void *dst)
{
 sph_keccak224_addbits_and_close(cc, 0, 0, dst);
}


void
sph_keccak224_addbits_and_close(void *cc, unsigned ub, unsigned n, void *dst)
{
 keccak_close28(cc, ub, n, dst);
}


void
sph_keccak256_init(void *cc)
{
 keccak_init(cc, 256);
}


void
sph_keccak256(void *cc, const void *data, size_t len)
{
 keccak_core(cc, data, len, 136);
}


void
sph_keccak256_close(void *cc, void *dst)
{
 sph_keccak256_addbits_and_close(cc, 0, 0, dst);
}


void
sph_keccak256_addbits_and_close(void *cc, unsigned ub, unsigned n, void *dst)
{
 keccak_close32(cc, ub, n, dst);
}


void
sph_keccak384_init(void *cc)
{
 keccak_init(cc, 384);
}


void
sph_keccak384(void *cc, const void *data, size_t len)
{
 keccak_core(cc, data, len, 104);
}


void
sph_keccak384_close(void *cc, void *dst)
{
 sph_keccak384_addbits_and_close(cc, 0, 0, dst);
}


void
sph_keccak384_addbits_and_close(void *cc, unsigned ub, unsigned n, void *dst)
{
 keccak_close48(cc, ub, n, dst);
}


void
sph_keccak512_init(void *cc)
{
 keccak_init(cc, 512);
}


void
sph_keccak512(void *cc, const void *data, size_t len)
{
 keccak_core(cc, data, len, 72);
}


void
sph_keccak512_close(void *cc, void *dst)
{
 sph_keccak512_addbits_and_close(cc, 0, 0, dst);
}


void
sph_keccak512_addbits_and_close(void *cc, unsigned ub, unsigned n, void *dst)
{
 keccak_close64(cc, ub, n, dst);
}
# 2392 "xptMiner/keccak.c"
unsigned long long keccak256_maxcoin_opt_v(const unsigned long long *data)
{
 int j;
 sph_u64 t;
 sph_u64 c0;
 sph_u64 c1;
 sph_u64 c2;
 sph_u64 c3;
 sph_u64 c4;
 sph_u64 tt0;
 sph_u64 tt1;
 sph_u64 tt2;
 sph_u64 tt3;
 sph_u64 ca00, ca01, ca02, ca03, ca04;
 sph_u64 ca10, ca11, ca12, ca13, ca14;
 sph_u64 ca20, ca21, ca22, ca23, ca24;
 sph_u64 ca30, ca31, ca32, ca33, ca34;
 sph_u64 ca40, ca41, ca42, ca43, ca44;
 ca00 = data[0];
 ca10 = ~data[1];
 ca20 = ~data[2];
 ca30 = data[3];
 ca40 = data[4];
 ca01 = data[5];
 ca11 = data[6];
 ca21 = data[7];
 ca31 = ~data[8];
 ca41 = data[9];
 ca02 = 1;

 ca12 = 0;
 ca22 = 0xFFFFFFFFFFFFFFFF;
 ca32 = 0;
 ca42 = 0;
 ca03 = 0;
 ca13 = 0x8000000000000000ULL;
 ca23 = 0xFFFFFFFFFFFFFFFF;
 ca33 = 0;
 ca43 = 0;
 ca04 = 0xFFFFFFFFFFFFFFFF;
 ca14 = 0;
 ca24 = 0;
 ca34 = 0;
 ca44 = 0;

 for (j = 0; j < 24-1; j++)
 {
  (tt0 = ca10 ^ ca11); (tt1 = ca12 ^ ca13); (tt0 = tt0 ^ ca14); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca40 ^ ca41); (tt3 = ca42 ^ ca43); (tt0 = tt0 ^ ca44); (tt2 = tt2 ^ tt3); (c0 = tt0 ^ tt2);;
  (tt0 = ca20 ^ ca21); (tt1 = ca22 ^ ca23); (tt0 = tt0 ^ ca24); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca00 ^ ca01); (tt3 = ca02 ^ ca03); (tt0 = tt0 ^ ca04); (tt2 = tt2 ^ tt3); (c1 = tt0 ^ tt2);;
  (tt0 = ca30 ^ ca31); (tt1 = ca32 ^ ca33); (tt0 = tt0 ^ ca34); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca10 ^ ca11); (tt3 = ca12 ^ ca13); (tt0 = tt0 ^ ca14); (tt2 = tt2 ^ tt3); (c2 = tt0 ^ tt2);;
  (tt0 = ca40 ^ ca41); (tt1 = ca42 ^ ca43); (tt0 = tt0 ^ ca44); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca20 ^ ca21); (tt3 = ca22 ^ ca23); (tt0 = tt0 ^ ca24); (tt2 = tt2 ^ tt3); (c3 = tt0 ^ tt2);;
  (tt0 = ca00 ^ ca01); (tt1 = ca02 ^ ca03); (tt0 = tt0 ^ ca04); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca30 ^ ca31); (tt3 = ca32 ^ ca33); (tt0 = tt0 ^ ca34); (tt2 = tt2 ^ tt3); (c4 = tt0 ^ tt2);;
  ca00 = ca00 ^ c0;
  ca01 = ca01 ^ c0;
  ca02 = ca02 ^ c0;
  ca03 = ca03 ^ c0;
  ca04 = ca04 ^ c0;
  ca10 = ca10 ^ c1;
  ca11 = ca11 ^ c1;
  ca12 = ca12 ^ c1;
  ca13 = ca13 ^ c1;
  ca14 = ca14 ^ c1;
  ca20 = ca20 ^ c2;
  ca21 = ca21 ^ c2;
  ca22 = ca22 ^ c2;
  ca23 = ca23 ^ c2;
  ca24 = ca24 ^ c2;
  ca30 = ca30 ^ c3;
  ca31 = ca31 ^ c3;
  ca32 = ca32 ^ c3;
  ca33 = ca33 ^ c3;
  ca34 = ca34 ^ c3;
  ca40 = ca40 ^ c4;
  ca41 = ca41 ^ c4;
  ca42 = ca42 ^ c4;
  ca43 = ca43 ^ c4;
  ca44 = ca44 ^ c4;

  (ca01 = ((((ca01) << (36)) | ((ca01) >> (64 - (36)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca02 = ((((ca02) << (3)) | ((ca02) >> (64 - (3)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca03 = ((((ca03) << (41)) | ((ca03) >> (64 - (41)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca04 = ((((ca04) << (18)) | ((ca04) >> (64 - (18)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca10 = ((((ca10) << (1)) | ((ca10) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca11 = ((((ca11) << (44)) | ((ca11) >> (64 - (44)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca12 = ((((ca12) << (10)) | ((ca12) >> (64 - (10)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca13 = ((((ca13) << (45)) | ((ca13) >> (64 - (45)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca14 = ((((ca14) << (2)) | ((ca14) >> (64 - (2)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca20 = ((((ca20) << (62)) | ((ca20) >> (64 - (62)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca21 = ((((ca21) << (6)) | ((ca21) >> (64 - (6)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca22 = ((((ca22) << (43)) | ((ca22) >> (64 - (43)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca23 = ((((ca23) << (15)) | ((ca23) >> (64 - (15)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca24 = ((((ca24) << (61)) | ((ca24) >> (64 - (61)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca30 = ((((ca30) << (28)) | ((ca30) >> (64 - (28)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca31 = ((((ca31) << (55)) | ((ca31) >> (64 - (55)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca32 = ((((ca32) << (25)) | ((ca32) >> (64 - (25)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca33 = ((((ca33) << (21)) | ((ca33) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca34 = ((((ca34) << (56)) | ((ca34) >> (64 - (56)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca40 = ((((ca40) << (27)) | ((ca40) >> (64 - (27)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca41 = ((((ca41) << (20)) | ((ca41) >> (64 - (20)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca42 = ((((ca42) << (39)) | ((ca42) >> (64 - (39)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca43 = ((((ca43) << (8)) | ((ca43) >> (64 - (8)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  (ca44 = ((((ca44) << (14)) | ((ca44) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
  t = ~ca22;
  c0 = ca00 ^ (ca11|ca22);
  c1 = ca11 ^ (t|ca33);
  c2 = ca22 ^ (ca33&ca44);
  c3 = ca33 ^ (ca44|ca00);
  c4 = ca44 ^ (ca00&ca11);
  ca00 = c0;
  ca11 = c1;
  ca22 = c2;
  ca33 = c3;
  ca44 = c4;
  t = ~ca24;
  c0 = ca30 ^ (ca41|ca02);
  c1 = ca41 ^ (ca02&ca13);
  c2 = ca02 ^ (ca13|t);
  c3 = ca13 ^ (ca24|ca30);
  c4 = ca24 ^ (ca30&ca41);
  ca30 = c0;
  ca41 = c1;
  ca02 = c2;
  ca13 = c3;
  ca24 = c4;
  t = ~ca43;
  c0 = ca10 ^ (ca21|ca32);
  c1 = ca21 ^ (ca32&ca43);
  c2 = ca32 ^ (t&ca04);
  c3 = t ^ (ca04|ca10);
  c4 = ca04 ^ (ca10&ca21);
  ca10 = c0;
  ca21 = c1;
  ca32 = c2;
  ca43 = c3;
  ca04 = c4;
  t = ~ca23;
  c0 = ca40 ^ (ca01&ca12);
  c1 = ca01 ^ (ca12|ca23);
  c2 = ca12 ^ (t|ca34);
  c3 = t ^ (ca34&ca40);
  c4 = ca34 ^ (ca40|ca01);
  ca40 = c0;
  ca01 = c1;
  ca12 = c2;
  ca23 = c3;
  ca34 = c4;
  t = ~ca31;
  c0 = ca20 ^ (t&ca42);
  c1 = t ^ (ca42|ca03);
  c2 = ca42 ^ (ca03&ca14);
  c3 = ca03 ^ (ca14|ca20);
  c4 = ca14 ^ (ca20&ca31);
  ca20 = c0;
  ca31 = c1;
  ca42 = c2;
  ca03 = c3;
  ca14 = c4;
  ca00 ^= RC[j];
  t = ca01;
  ca01 = ca30;
  ca30 = ca33;
  ca33 = ca23;
  ca23 = ca12;
  ca12 = ca21;
  ca21 = ca02;
  ca02 = ca10;
  ca10 = ca11;
  ca11 = ca41;
  ca41 = ca24;
  ca24 = ca42;
  ca42 = ca04;
  ca04 = ca20;
  ca20 = ca22;
  ca22 = ca32;
  ca32 = ca43;
  ca43 = ca34;
  ca34 = ca03;
  ca03 = ca40;
  ca40 = ca44;
  ca44 = ca14;
  ca14 = ca31;
  ca31 = ca13;
  ca13 = t;
 }

 (tt0 = ca10 ^ ca11); (tt1 = ca12 ^ ca13); (tt0 = tt0 ^ ca14); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca40 ^ ca41); (tt3 = ca42 ^ ca43); (tt0 = tt0 ^ ca44); (tt2 = tt2 ^ tt3); (c0 = tt0 ^ tt2);;
 (tt0 = ca40 ^ ca41); (tt1 = ca42 ^ ca43); (tt0 = tt0 ^ ca44); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca20 ^ ca21); (tt3 = ca22 ^ ca23); (tt0 = tt0 ^ ca24); (tt2 = tt2 ^ tt3); (c3 = tt0 ^ tt2);;
 (tt0 = ca00 ^ ca01); (tt1 = ca02 ^ ca03); (tt0 = tt0 ^ ca04); (tt0 = tt0 ^ tt1); (tt0 = ((((tt0) << (1)) | ((tt0) >> (64 - (1)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL)))); (tt2 = ca30 ^ ca31); (tt3 = ca32 ^ ca33); (tt0 = tt0 ^ ca34); (tt2 = tt2 ^ tt3); (c4 = tt0 ^ tt2);;
 ca00 = ca00 ^ c0;
 ca33 = ca33 ^ c3;
 ca44 = ca44 ^ c4;
 (ca33 = ((((ca33) << (21)) | ((ca33) >> (64 - (21)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
 (ca44 = ((((ca44) << (14)) | ((ca44) >> (64 - (14)))) & ((sph_u64)(0xFFFFFFFFFFFFFFFFUL))));
 return ca33 ^ (ca44|ca00);
}
