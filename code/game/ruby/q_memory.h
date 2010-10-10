#ifndef __Q_MEMORY_H
#define __Q_MEMORY_H

void free(void* p);
void *realloc(void *ptr, size_t size);

void *malloc(size_t size);

void *alloca(size_t size);

void *memchr(const void *s, int c, size_t n);
 
#endif
