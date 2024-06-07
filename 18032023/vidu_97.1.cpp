#include<stdio.h>
long int tinhXn(unsigned int n);
long int tinhYn(unsigned int n);

int main ()
{
	printf("\n%ld", tinhXn(4));
}

long int tinhXn(unsigned int n)
{
	if(n==0)
	{
		return 1;
	}
	else 
	{
		return (tinhXn(n-1)+tinhYn(n-1));
	}
}

long int tinhYn(unsigned int n)
{
	if(n==0)
	{
		return 0;
	}
	else 
	{
		return (n*n*tinhXn(n-1)+tinhYn(n-1));
	}
}
