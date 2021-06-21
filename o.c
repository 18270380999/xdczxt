#include <stdio.h>
int main()
{int x;
printf("%d", !~x  || !x || !~(x | 0x00ffffff) || !(x & 0x000000ff));
}