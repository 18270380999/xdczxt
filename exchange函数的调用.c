#include <stdio.h>
int main()
{
long exchange(long *xp,long y);
long a=4;
long b=exchange(&a,3);
printf("a=%ld,b=%ld\n",a,b);
}
long exchange(long *xp,long y)
{
	long x=*xp;
	*xp=y;
	return x;
}