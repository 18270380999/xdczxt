#include <stdio.h>
long main(long *xp,long y)
{
	long x=*xp;
	*xp=y;
	return x;
}