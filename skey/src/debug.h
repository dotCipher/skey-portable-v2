#ifndef _DEBUG_LIB
#define _DEBUG_LIB

//BEGIN_DEBUG_MACROS
#define _dbg_enter(dbgfile, func, num, ...)\
 if(dbgLevel >= 1) dbgL1_Enter(dbgfile, func);\
 if(dbgLevel >= 3) dbgL3_Enter(dbgfile, num, __VA_ARGS__);
#define _dbg_exit(dbgfile, func, ret)\
 if(dbgLevel >= 1) dbgL1_Exit(dbgfile, func);\
 if(dbgLevel >= 2) dbgL2_Exit(dbgfile, ret);
#define _dbg_file (dbgToFile==1) ? dbgFile : NULL
//END_DEBUG_MACROS

void debug(char* fName, int level, char* msg, char* msg2);

// Debug wrapper
void dbgL1_Enter(char* fName, char* funcName);

// Debug wrapper
void dbgL1_Exit(char* fName, char* funcName);

// Debug wrapper
void dbgL2_Exit(char* fName, char* arg);

// Debug wrapper
void dbgL3_Enter(char* fName, int num, char* arg, ...);

#endif