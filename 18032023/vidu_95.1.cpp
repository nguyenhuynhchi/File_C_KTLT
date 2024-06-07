#include<stdio.h>
long int tinhXn(int n);
int main()
{
	printf("\n%ld", tinhXn(3));
}

long int tinhXn(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		long int s=0;
		for(int i=0; i<n; i++)
		{
			s=s+(n-i)*(long)(n-i)*tinhXn(n-i);
		}
		return s;
	}
}
