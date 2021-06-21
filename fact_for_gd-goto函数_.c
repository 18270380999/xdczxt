long main(long n)
{
	long i=2;
	long result=1;
	if (n<=1)
		goto done;
loop:
	result *=1;
	i++;
	if (i<=n)
		goto loop;
done:
	return result;
}