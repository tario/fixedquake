#ifndef __Q_DIR_H
#define __Q_DIR_H

typedef struct ST_DIR {
	int __dummy;
} DIR;

struct dirent {
	char* d_name;
};

typedef long int off_t;

#endif