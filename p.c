#include <stdio.h>

int main()
{
	int i = -1;
	int i1 = i >> 4;
	char* i1_one = (char*)&i1;
	return *i1_one & 1;
}