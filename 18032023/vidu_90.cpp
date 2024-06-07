#include<stdio.h>
void inLe(int n);
int main()
{
	int n;
	printf("\nNhap so nguyen n(>0):  ");
	scanf("%d", &n);
	
	if(n%2==0)
	{
		inLe(n);
	}
	else
	{
		printf("\n %d la so le.", n);
	}
	
	return 0;
}

void inLe(int n)
{
	printf("\n %d la so chan.", n);
}
