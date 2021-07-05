#include <stdio.h>
int main(unsigned x)
{
	return !~(x | 0xAAAAAAAA);
}