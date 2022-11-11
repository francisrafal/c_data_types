#include <stdio.h>
#define U_1B_MIN 0x00
#define U_1B_MAX 0xFF
#define S_1B_MIN 0x80
#define S_1B_MAX 0x7F
#define U_2B_MIN 0x0000
#define U_2B_MAX 0xFFFF
#define S_2B_MIN 0x8000
#define S_2B_MAX 0x7FFF
#define U_4B_MIN 0x00000000
#define U_4B_MAX 0xFFFFFFFF
#define S_4B_MIN 0x80000000
#define S_4B_MAX 0x7FFFFFFF
#define U_8B_MIN 0x0000000000000000
#define U_8B_MAX 0xFFFFFFFFFFFFFFFF
#define S_8B_MIN 0x8000000000000000
#define S_8B_MAX 0x7FFFFFFFFFFFFFFF

int	main(void)
{
	printf("Data Type Sizes (Bytes):\n\n");
	printf("char:\t\t%lu\n", sizeof(char));
	printf("short:\t\t%lu\n", sizeof(short));
	printf("int:\t\t%lu\n", sizeof(int));
	printf("long:\t\t%lu\n", sizeof(long));
	printf("long long:\t%lu\n", sizeof(long long));
	printf("size_t:\t\t%lu\n", sizeof(size_t));
	printf("void *:\t\t%lu\n", sizeof(void *));

	printf("\nMin/Max Values:\n\n");
	printf("CHAR_MIN:\t%25hhd\t(0x%X)\n", (char)S_1B_MIN, S_1B_MIN);
	printf("CHAR_MAX:\t%25hhd\t(0x%X)\n", (char)S_1B_MAX, S_1B_MAX);
	printf("SCHAR_MIN:\t%25hhd\t(0x%X)\n", (signed char)S_1B_MIN, S_1B_MIN);
	printf("SCHAR_MAX:\t%25hhd\t(0x%X)\n", (signed char)S_1B_MAX, S_1B_MAX);
	printf("UCHAR_MIN:\t%25hhu\t(0x%X)\n", (unsigned char)U_1B_MIN, U_1B_MIN);
	printf("UCHAR_MAX:\t%25hhu\t(0x%X)\n", (unsigned char)U_1B_MAX, U_1B_MAX);
	printf("SHRT_MIN:\t%25hd\t(0x%X)\n", (short)S_2B_MIN, S_2B_MIN);
	printf("SHRT_MAX:\t%25hd\t(0x%X)\n", (short)S_2B_MAX, S_2B_MAX);
	printf("USHRT_MIN:\t%25hu\t(0x%X)\n", (unsigned short)U_2B_MIN, U_2B_MIN);
	printf("USHRT_MAX:\t%25hu\t(0x%X)\n", (unsigned short)U_2B_MAX, U_2B_MAX);
	printf("INT_MIN:\t%25d\t(0x%X)\n", (int)S_4B_MIN, S_4B_MIN);
	printf("INT_MAX:\t%25d\t(0x%X)\n", (int)S_4B_MAX, S_4B_MAX);
	printf("UINT_MIN:\t%25u\t(0x%X)\n", (unsigned int)U_4B_MIN, U_4B_MIN);
	printf("UINT_MAX:\t%25u\t(0x%X)\n", (unsigned int)U_4B_MAX, U_4B_MAX);
	printf("LONG_MIN:\t%25ld\t(0x%lX)\n", (long)S_8B_MIN, S_8B_MIN);
	printf("LONG_MAX:\t%25ld\t(0x%lX)\n", (long)S_8B_MAX, S_8B_MAX);
	printf("ULONG_MIN:\t%25lu\t(0x%X)\n", (unsigned long)U_8B_MIN, U_8B_MIN);
	printf("ULONG_MAX:\t%25lu\t(0x%lX)\n", (unsigned long)U_8B_MAX, U_8B_MAX);
	printf("LLONG_MIN:\t%25lld\t(0x%lX)\n", (long long)S_8B_MIN, S_8B_MIN);
	printf("LLONG_MAX:\t%25lld\t(0x%lX)\n", (long long)S_8B_MAX, S_8B_MAX);
	printf("ULLONG_MIN:\t%25llu\t(0x%X)\n", (unsigned long long)U_8B_MIN, U_8B_MIN);
	printf("ULLONG_MAX:\t%25llu\t(0x%lX)\n", (unsigned long long)U_8B_MAX, U_8B_MAX);
	printf("SSIZE_MIN:\t%25zd\t(0x%lX)\n", (ssize_t)S_8B_MIN, S_8B_MIN);
	printf("SSIZE_MAX:\t%25zd\t(0x%lX)\n", (ssize_t)S_8B_MAX, S_8B_MAX);
	printf("SIZE_MIN:\t%25zu\t(0x%X)\n", (size_t)U_8B_MIN, U_8B_MIN);
	printf("SIZE_MAX:\t%25zu\t(0x%lX)\n", (size_t)U_8B_MAX, U_8B_MAX);
	return (0);
}
