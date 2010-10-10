#ifndef __Q_FILE_H
#define __Q_FILE_H

#define BUFSIZ 512

typedef struct st_File {
	int __dummy;
	
	char *_IO_read_ptr;
	char *_IO_read_end;
} FILE;

extern FILE* stderr;
extern FILE* stdout;
extern FILE* stdin;

int fwrite(void* buf, int blocks, int len, FILE* file);

FILE* fopen(const char* fname, const char* mode);

FILE* fdopen(int fd, const char* mode);

/* Values for the second argument to access.
   These may be OR'd together.  */
#define	R_OK	4		/* Test for read permission.  */
#define	W_OK	2		/* Test for write permission.  */
#define	X_OK	1		/* Test for execute permission.  */
#define	F_OK	0		/* Test for existence.  */

#define S_IFMT  00170000
#define S_IFSOCK 0140000
#define S_IFLNK	 0120000
#define S_IFREG  0100000
#define S_IFBLK  0060000
#define S_IFDIR  0040000
#define S_IFCHR  0020000
#define S_IFIFO  0010000
#define S_ISUID  0004000
#define S_ISGID  0002000
#define S_ISVTX  0001000

#define SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2
#define EOF (-1)

#define O_ACCMODE	   0003
#define O_RDONLY	     00
#define O_WRONLY	     01
#define O_RDWR		     02
#define O_CREAT		   0100	/* not fcntl */
#define O_EXCL		   0200	/* not fcntl */
#define O_NOCTTY	   0400	/* not fcntl */
#define O_TRUNC		  01000	/* not fcntl */
#define O_APPEND	  02000
#define O_NONBLOCK	  04000
#define O_NDELAY	O_NONBLOCK
#define O_SYNC		 010000
#define O_FSYNC		 O_SYNC
#define O_ASYNC		 020000

#define PIPE_BUF        4096	/* # bytes in atomic write to a pipe */

#define F_SETFL		4

#endif

