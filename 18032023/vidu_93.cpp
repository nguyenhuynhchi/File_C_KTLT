#include<stdio.h>
unsigned int tinhFn(unsigned int n);

int main()
{
	unsigned int n;
	printf("\nNhap so nguyen n(>0):  ");
	scanf("%d", &n);
	printf("\nKet qua la: %d", tinhFn(n));
	return 0;
}

unsigned int tinhFn(unsigned int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return (tinhFn(n-1)+tinhFn(n-2));
	}
}
