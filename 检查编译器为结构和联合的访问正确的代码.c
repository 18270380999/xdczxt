int main()
{
typedef union {
	struct{
		long u;
		long v;
		char w;
	}t1;
	struct{
		int a[2];
		char *p;
	}t2;
}u_type;
}