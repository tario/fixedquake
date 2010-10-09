#ifndef Q_SETJMP_H
#define Q_SETJMP_H

typedef struct __jmp_buf {
	int __dummy;
} jmp_buf;

extern int _setjmp(jmp_buf  env);
extern int _longjmp(jmp_buf  env, int val);

#endif
