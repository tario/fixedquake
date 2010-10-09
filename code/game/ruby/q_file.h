#ifndef __Q_FILE_H
#define __Q_FILE_H

#define BUFSIZ 512

typedef struct st_File {
	int __dummy;
} FILE;

extern FILE* stderr;
extern FILE* stdout;

int fwrite(void* buf, int blocks, int len, FILE* file);

#endif

