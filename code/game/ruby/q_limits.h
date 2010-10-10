#ifndef __LIMITS_H
#define __LIMITS_H

#ifdef Q3_VM
#include "bg_lib.h"

#define PATH_MAX        4096
#define MAXPATHLEN	PATH_MAX

struct rlimit {
	int rlim_cur;
};

#else
#include <limits.h>
#endif

#endif
