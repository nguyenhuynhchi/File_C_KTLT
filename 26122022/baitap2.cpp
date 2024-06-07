#include <stdio.h>
int soToanChuSoLe(int n);
int main()
{
	int n;
	int kq;
	//nhap n va kiem tra
	do
	{
	    printf("Nhap vao so nguyen n (100 <= n <= 9999):");
	    scanf("%d", &n);
	}while(n<100 || n>9999);
	
    kq=soToanChuSoLe( n);
    
	if(kq==1)
	{
		printf("\n%d toan chu so le", n);
	}
	else
	{
		printf("\n%d khong toan chu so le", n);
	}
	
	return 0;
} 


int  soToanChuSoLe(int n)
{
	int du ;
	
	//xu ly
	while (n>0)
	{
		du=n%10;
		if(du%2==0)
		{
			return 0;
		}
		n=n/10;
	}
	return 1;
}



		
