#include <stdio.h>
#include <stdlib.h>

float sum_elements(float a[],unsigned length)
{
	int i;
	float result=0;
	for(i=0;i <length;i++)
		result += a[i];
	return result;
}
int main()
{
	float a[]={1,2,3,4,5,6,7,8,9};
	printf("%f",sum_elements(a,0));
		return 0;
}