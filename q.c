#include <stdio.h>
unsigned main(unsigned x, int k)
{
	unsigned xsra = (int)x >> k;
	unsigned cmp = ~(-1 << (32 - k));
	return xsra & cmp;
}
int sra(int x, int k)
{
	unsigned xsra = (unsigned)x >> k;
	unsigned cmp = (-1 << (32 - k));
	return xsra | cmp;
}