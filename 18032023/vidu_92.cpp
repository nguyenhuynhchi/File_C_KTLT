#include<stdio.h>
unsigned int UCLN(unsigned int a, unsigned int b);
int main()
{
	unsigned int a, b;	
	printf("\nNhap a, b:");
	printf("\na:");
	scanf("%d", &a);
	printf("\nb:");
	scanf("%d", &b);
	printf("%d", UCLN(a, b));
	return 0;	
}

unsigned int UCLN(unsigned int a, unsigned int b)
{
	if(a>b)
	{
		return UCLN(a-b, b);
	}

	if(a<b)
	{
		return UCLN(b-a, a);
	}
	else
	{
		return a;
	}
} 
