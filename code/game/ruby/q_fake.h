#ifndef __Q_FAKE_H
#define  __Q_FAKE_H

#ifdef Q3_VM
typedef int fd_set;
#endif

#ifdef Q3_VM
#define Q_STATIC
#define Q_INLINE
#else
#define Q_STATIC static
#define Q_INLINE inline
#endif


#endif
