void main(long a[],long b[],long n){
	long i;
	for (i=0;i<n;i++){
		if(a[i]>b[i]){
			long t=a[i];
			a[i]=b[i];
			b[i]=t;
		}
	}
}