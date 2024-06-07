#include <stdio.h>
int main()
{
	float a, b, x;
	
	//nhap he so cho phuong trinh va kiem tra
	printf("Nhap vao 2 he so cua phuong trinh bac nhat ( ax+b = 0)\n");
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	
	//xu ly
	x = -b/a;
	
	if( b==0 && a==0 ) 
	printf("\nVi a=0 va b=0 \n  ==> Phuong trinh co vo so nghiem");
	
	else if ( a==0 )
	printf("Vi a=0 \n  ==> Phuong trinh vo nghiem");
	
	else
	{
	printf("-%.0f / %.0f = %.2f\n", b, a, x);
	printf("Ngiem cua phuong trinh = %.2f", x);
	}
	
    return 0;	
}
