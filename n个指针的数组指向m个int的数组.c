int **makeArray(int n,int m)
{
	int i;
    int **A = (int **)Malloc(n * sizeof(int));
    
    for (i = 0; i < n; i++)
        A[i] = (int *)Malloc(m * sizeof(int));
    return A;
}