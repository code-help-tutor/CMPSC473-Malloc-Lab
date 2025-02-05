WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <unistd.h>
#include <stdint.h>
#include <stdbool.h>

/* Support routines */

void *mm_sbrk(intptr_t incr);
void *mm_heap_lo(void);
void *mm_heap_hi(void);
size_t mm_heapsize(void);
size_t mm_pagesize(void);
void *mm_memcpy(void *dst, const void *src, size_t n);
void *mm_memset(void *dst, int c, size_t n);

/* Functions used for memory emulation */
/* You should not be calling these functions */

void mem_init();               
void mem_deinit(void);
void *mem_sbrk(intptr_t incr);
void mem_reset_brk(void); 
void *mem_heap_lo(void);
void *mem_heap_hi(void);
size_t mem_heapsize(void);
size_t mem_pagesize(void);

/* Read len bytes and return value zero-extended to 64 bits */
/* Require 0 <= len <= 8 */
uint64_t mem_read(const void *addr, size_t len);

/* Write lower order len bytes of val to address */
/* Require 0 <= len <= 8 */
void mem_write(void *addr, uint64_t val, size_t len);

/* Emulation of memcpy */
void *mem_memcpy(void *dst, const void *src, size_t n);

/* Emulation of memset */
void *mem_memset(void *dst, int c, size_t n);

/* Debugging function to view region of heap */
void hprobe(void *ptr, int offset, size_t count);
