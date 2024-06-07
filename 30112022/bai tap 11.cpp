#include <stdio.h>
int tinhTong (int n);
int main()
{
	int n;
	printf("\nKet qua tong cac chu so chia het cho 3 = %d", tinhTong (n));
	return 0;
}


int tinhTong (int n)
{
	int du, s=0;
	
	//nhap n va kiem tra
	do
	{
	    printf("Nhap vao so nguyen n (100 <= n <= 9999):");
	    scanf("%d", &n);
	}while(n<100 || n>9999);
	
	//xu ly
	while (n>0)
	{
	    du = n%10;
	    if( du%3 == 0)
	    {
			s = s+du;
	    }
	    n = n/10;
	}
	
	return s;
}
	
