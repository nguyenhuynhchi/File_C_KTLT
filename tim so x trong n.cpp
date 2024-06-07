#include <stdio.h>
int main()
{
	int n, x ;
	
	// nhap n va kiem tra
	printf("Nhap vao so nguyen duong n (100 < n <= 9999)");
	do
	{
		printf("\nn= ");
		scanf("%d", &n);
	}while(n<100 || n>9999);
	printf("\nNhap vao so x can tim (0<= x < 10)");
	do
	{
		printf("\nx= ");
		scanf("%d", &x);
	}while(x<0 || x>=10);
	
	//xu ly
	int du, k=0;
	
	while(n>0)
	{
	     du= n%10;
	     if(du == x)
	     {
		    k++;
	     }
	     n= n/10;
	}
	printf("  ==> So %d xuat hien %d lan ", x, k);
	
	return 0;
}









