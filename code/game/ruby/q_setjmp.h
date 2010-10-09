#ifndef Q_SETJMP_H
#define Q_SETJMP_H

#ifdef Q3_VM

typedef struct __jmp_buf {
	int __dummy;
} jmp_buf;

extern int _setjmp(jmp_buf  env);
extern int _longjmp(jmp_buf  env, int val);

#else

#include "setjmp.h"

#endif

#endif
