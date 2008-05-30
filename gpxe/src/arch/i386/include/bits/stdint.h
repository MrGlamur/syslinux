#ifndef _BITS_STDINT_H
#define _BITS_STDINT_H

typedef typeof(sizeof(int))	size_t;
typedef signed long		ssize_t;
typedef signed long		off_t;

typedef unsigned char		uint8_t;
typedef unsigned short		uint16_t;
typedef unsigned long		uint32_t;
typedef unsigned long long	uint64_t;

typedef signed char		int8_t;
typedef signed short		int16_t;
typedef signed long		int32_t;
typedef signed long long	int64_t;

typedef unsigned long		physaddr_t;
typedef unsigned long		intptr_t;

#endif /* _BITS_STDINT_H */