#include<stdio.h>

int main()
{
	long gt=1;
	int n;
	printf("\nNhap so nguyen n(>0):  ");
	scanf("%d", &n);
	
	while(n>0)
	{
		gt=gt*(n);
		n--;
	}
	printf("\nKet qua n!= %d", gt);
	
	return 0;
}
