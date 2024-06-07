#include <stdio.h>
int soChuSoCuaN(int n);
int main()
{
	int n, kq;
	do
	{
	    printf("Nhap vao so nguyen n (10 <= n <= 99999):");
	    scanf("%d", &n);
	}while(n<0 || n>99999);
	printf("so chu so cua n la:%d ", soChuSoCuaN(n));
	return 0;
}

int soChuSoCuaN(int n)
{
	int du, dem;
	for(du, dem=0; n>0; dem++)
	{
		
		n=n/10;
	}
	return dem;
}
	

