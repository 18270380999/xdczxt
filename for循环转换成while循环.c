long main(long n)
{
	long i=2;
	long result=1;
	while (i<=n){
		result *=i;
		i++;
	}
	return result;
}