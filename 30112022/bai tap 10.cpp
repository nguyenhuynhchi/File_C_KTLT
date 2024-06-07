#include <stdio.h>
float tinhTong (int n);

int main()
{
	int n;
	printf("Ket qua = %.2f", tinhTong (n));
	
	return 0;
}

    //xay dung ham
float tinhTong (int n)
{
	float s;
	int i;
	
	//nhap n va kiem tra
	do
	{
    	printf("Nhap vao so nguyen duong n ( 0<= n <= 10):");
    	scanf("%d", &n);
	}while(n<0 || n>10);
    
	//xu ly
	for(s=0, i=0; i<=n; i+=2)
	{
	    s=s+(2*(float)i+1)/(2*(float)i+2);
	}
	
	return s;
}
