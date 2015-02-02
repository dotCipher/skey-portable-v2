# -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.59])
AC_INIT([skey], [2.0], [cjmoore@cs.sunysb.edu])
AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([config.h])

# Init automake
AM_INIT_AUTOMAKE([1.9.6 no-define])
CFLAGS="$CFLAGS -Wall -Werror -lcrypt -ggdb"
AC_CONFIG_FILES([Makefile src/Makefile])

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL

# Clean up output
AC_CONFIG_MACRO_DIR([m4])

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h sgtty.h shadow.h stdlib.h stdio.h string.h strings.h sys/file.h sys/ioctl.h sys/param.h sys/systeminfo.h sys/time.h sys/timeb.h sys/quota.h sys/resource.h termio.h termios.h unistd.h signal.h pwd.h stdarg.h time.h crypt.h ctype.h errno.h])


# Checks for typedefs, structures, and compiler characteristics.
#AC_CHECK_LIB([crypt, main])
#AC_DEFINE([HAVE_LIBCRYPT], [], [Description])

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([gethostname getpass isascii memset setenv strchr strdup sysinfo])

AC_OUTPUT
