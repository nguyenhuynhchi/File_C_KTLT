#include <stdio.h>
int main()
{
	int n, du, s=0;
	//nhap n va kiem tra
	do
	{
	    printf("Nhap vao so nguyen n:\n");
	    scanf("%d", &n);
	}while(n<=100 && n>9999);
	
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
	printf("Tong cac chu so chia het cho 3 = %d", s);
	
	return 0;
}
	
