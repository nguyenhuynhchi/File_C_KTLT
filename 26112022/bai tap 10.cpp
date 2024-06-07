#include <stdio.h>
int main()
{
	float s;
	int i, n;
	
	//nhap n va kiem tra
	do
	{
	printf("Nhap vao so nguyen duong n:");
	scanf("%d", &n);
	}while(n<0 || n>10);
    
	//xu ly
	for(s=0, i=0; i<=n; i+=1)
	{
	    s=s+(2*(float)i+1)/(2*(float)i+2);
	}
	printf("Ket qua = %.2f", s);
	
	return 0;
}
