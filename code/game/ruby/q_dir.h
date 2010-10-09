#ifndef __Q_DIR_H
#define __Q_DIR_H

typedef struct ST_DIR {
	int __dummy;
} DIR;

struct stat {
	int st_mode;
	
	int st_mtime;
	int st_dev;
	int st_ino;
	int st_nlink;
	int st_uid;
	int st_gid;
	int st_rdev;
	int st_size;
	int st_blksize;
	int st_blocks;
	int st_atime;
	int st_ctime;
	
};

struct dirent {
	char* d_name;
};

typedef long int off_t;

#define S_IFMT 64
#define S_IFDIR 65

// directories
extern DIR *opendir (const char *__name);
extern struct dirent* readdir(DIR* dir);
extern char* my_getcwd();
// strings
extern char *strdup(const char* p);

// env

extern char* getenv(const char* envname);

extern char* CharNext(const char* s);

#endif