#include <stdio.h>
int main()
{
 unsigned  x = 0x89ABCDEF;
 unsigned  y = 0x76543210;
 unsigned  num = (x & 0xFF) | (y & ~0xFF);
 printf("%X", num);
}