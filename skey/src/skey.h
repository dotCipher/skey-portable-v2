/*
 * S/KEY v1.1b (skey.h)
 *
 * Authors:
 *          Neil M. Haller <nmh@thumper.bellcore.com>
 *          Philip R. Karn <karn@chicago.qualcomm.com>
 *          John S. Walden <jsw@thumper.bellcore.com>
 *
 * Modifications:
 *          Scott Chasin <chasin@crimelab.com>
 *          Cody Moore <cjmoore@cs.sunysb.edu>
 *
 * Main client header
 */

// Config include
#include "config.h"

// Dynamic libs
#include <stdio.h>
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#ifdef HAVE_FCNTL_H
#include <fcntl.h>
#endif
#ifdef HAVE_SGTTY_H
#include <sgtty.h>
#endif
#ifdef HAVE_STDARG_H
#include <stdarg.h>
#endif

#include "sysv_shadow.h"

/*
#ifdef SOLARIS
#define setpriority(x,y,z)      z
#endif
*/

/* Server-side data structure for reading keys file during login */
struct skey{
  FILE *keyfile;
  char buf[256];
  char *logname;
  int n;
  char *seed;
  char *val;
  long recstart;		/* needed so reread of buffer is efficient */
};

/* Client-side structure for scanning data stream for challenge */
struct mc{
  char buf[256];
  int skip;
  int cnt;
};

void sevenbit(char* s);
char* readpass(char* buf, int n);
void f(char *x);
int keycrunch(char *result, char *seed, char *passwd);
char *btoe (char *engout, char *c);
char *put8(char *out, char *s);
int etob(char *out, char *e);
void rip(char *buf);
void backspace(char* buf);
char* skipspace(char* cp);
int atob8(char* out, char* in);
int btoa8(char* out, char* in);
int skeychallenge(struct skey * mp, char *name, char *ss);
int skeylookup(struct skey * mp, char *name);
int skeyverify(struct skey * mp, char *response);
int skey_haskey(char* username);
int skey_keyinfo(char* str, char* username);
int skey_passcheck(char* username, char* passwd);
int skey_authenticate(char* username);
