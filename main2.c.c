#include <stdio.h>


int x[2]={1,2};
int y[2]={3,4};
int z[2];

int main()
{void addvec(int *x,int*y,
			int *z,int n);
	addvec(x,y,z,2);
	printf("z=[%d %d]\n",z[0],z[1]);
	return 0;
}

void addvec(int *x,int*y,
			int *z,int n)
{
	int i;
    int addcnt=0;
	addcnt++;

	for (i=0;i<n;i++)
		z[i]=x[i]+y[i];
}