#include <stdio.h>
unsigned main(unsigned x, int i, unsigned char b)
{
	char* x_char = (char*)&x;
	*(x_char + i) = b;
	return x;
}