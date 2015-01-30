/* src/config.h.  Generated from config.h.in by configure.  */
/* src/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* define if fstream::open() accepts third parameter. */
/* #undef FSTREAM_OPEN_PROT */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* define if bool is a built-in type */
#define HAVE_BOOL /**/

/* define if the Boost library is available */
#define HAVE_BOOST 1

/* define if the Boost::System library is available */
#define HAVE_BOOST_SYSTEM 1

/* define if the Boost::Thread library is available */
#define HAVE_BOOST_THREAD 1

/* Define to 1 if you have the <cmath> header file. */
#define HAVE_CMATH 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* define if we have fstream::attach(). */
/* #undef HAVE_FSTREAM_ATTACH */

/* define if we have fstream::open(). */
#define HAVE_FSTREAM_OPEN 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <iomanip> header file. */
#define HAVE_IOMANIP 1

/* Define to 1 if you have the <iomanip.h> header file. */
/* #undef HAVE_IOMANIP_H */

/* Define to 1 if you have the <iostream> header file. */
#define HAVE_IOSTREAM 1

/* Define to 1 if you have the <iostream.h> header file. */
/* #undef HAVE_IOSTREAM_H */

/* Define to 1 if you have the <libc.h> header file. */
/* #undef HAVE_LIBC_H */

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* define if the compiler implements namespaces */
#define HAVE_NAMESPACES /**/

/* "define if omniORB3 is available." */
/* #undef HAVE_OMNIORB3 */

/* "define if omniORB4 is available." */
#define HAVE_OMNIORB4 1

/* Define to 1 if you have the `on_exit' function. */
#define HAVE_ON_EXIT 1

/* Define to 1 if you have the <process.h> header file. */
/* #undef HAVE_PROCESS_H */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigset' function. */
/* #undef HAVE_SIGSET */

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_STAT_EMPTY_STRING_BUG */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* define if C++ iostream is in namespace std. */
#define HAVE_STD_IOSTREAM 1

/* define if C++ Standard Template Library is in namespace std */
#define HAVE_STD_STL 1

/* define if the compiler supports Standard Template Library */
#define HAVE_STL /**/

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "alex.omnievents@firetree.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "omniEvents"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "omniEvents 2.6.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "omnievents"

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.6.2"

/* Define to the necessary symbol if this constant uses a non-standard name
   on your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* for omniORB */
#define __OSVERSION__ 2

/* needed by DEC/Compaq/HP cxx to activate ANSI standard iostream. */
#define __USE_STD_IOSTREAM 1

/* for OmniORB on AIX */
/* #undef __aix__ */

/* for OmniORB on AlphaProcessor */
/* #undef __alpha__ */

/* for OmniORB on ArmProcessor */
/* #undef __arm__ */

/* for OmniORB on Darwin */
/* #undef __darwin__ */

/* for OmniORB on FreeBSD */
/* #undef __freebsd__ */

/* for OmniORB on HppaProcessor */
/* #undef __hppa__ */

/* for OmniORB on HPUX */
/* #undef __hpux__ */

/* for OmniORB on ia64Processor */
/* #undef __ia64__ */

/* for OmniORB on IRIX */
/* #undef __irix__ */

/* for OmniORB on Linux, Cygwin */
#define __linux__ 1

/* for OmniORB on m68kProcessor */
/* #undef __m68k__ */

/* for OmniORB on IndigoProcessor */
/* #undef __mips__ */

/* for OmniORB on NextStep */
/* #undef __nextstep__ */

/* for OmniORB on OSF1 (Tru64) */
/* #undef __osf1__ */

/* for OmniORB on OSR5 */
/* #undef __osr5__ */

/* for OmniORB on PowerPCProcessor */
/* #undef __powerpc__ */

/* for OmniORB on s390Processor */
/* #undef __s390__ */

/* for OmniORB on SparcProcessor */
/* #undef __sparc__ */

/* for OmniORB on SunOS (Solaris) */
/* #undef __sunos__ */

/* for OmniORB on x86Processor */
/* #undef __x86__ */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */


/* Clean away the PACKAGE_* macros unless they are needed. */
#include "scour.h"

