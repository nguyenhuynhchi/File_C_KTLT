#include<stdio.h>
float luyThua(int a, int n);
int main()
{
	float a;
	int n;
	
	printf("\nNhap so thuc a:  ");
	scanf("%f", &a);
	printf("\nNhap so luy thua n:  ");
	scanf("%d", &n);
	
	printf("\nKet qua luy thua cua a= %.2f", luyThua(a, n));
	
	return 0;
}

float luyThua(int a, int n)
{
	float lt=1;
	for(int i=1; i<=n; i++)
	{
		lt=lt*a;	
	}
	return lt;
}
