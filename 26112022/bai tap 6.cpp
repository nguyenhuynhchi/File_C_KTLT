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
	}while(n<=0 || n>10);
    // xu ly
	for(s=0, i=2; i<=n; i+=2)             
	{
	    s=s+(1.0/(float)i);
	}
	printf("Ket qua = %.2f", s);
	
	return 0;
}
