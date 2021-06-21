int main()
{
unsigned long double2bits(double d);
{
	union{
		double d;
		unsigned long u;
	}temp;
	double d;
	temp.d=d;
	return temp.u;
};
}
