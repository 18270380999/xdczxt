#include <stdio.h>
int main(unsigned x, int i, unsigned char b)
{
	char* x_char = (char*)&x;
	*(x_char + i) = b;
	return x;
}