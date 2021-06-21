int main(int a[][])
{
	int i,j,sum=0;
	int M,N;
	for (i=0;i<M;i++)
		for (j=0;j<N;j++)
			sum+=a[i][j];
		return sum;
}