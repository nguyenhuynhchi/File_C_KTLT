#include <stdio.h>
int baoNhieuSo0(int n);
int main()
{
	int n, kq;
	//nhap n va kiem tra
	do
	{
	    printf("Nhap vao so nguyen n (100 <= n <= 9999):");
	    scanf("%d", &n);
	}while(n<100 || n>9999);
	
	//in ket qua
	if(baoNhieuSo0(n)==0)
	{
     	printf("%d khong co chu so 0 nao", n);
     }
     else 
     {
	    printf("%d co %d chu so 0", n, baoNhieuSo0(n));
     }
	return 0;
}

int baoNhieuSo0(int n)
{
	int du, dem;
	
	//xu ly
	for(du, dem=0; n>0; n/10)
	{
		du=n%10;
		if(du==0)
		{
			dem++;
		}
	     n=n/10;	
	}
     return dem;
	return 0;
}




