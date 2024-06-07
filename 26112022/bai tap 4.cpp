#include <stdio.h>
int main()
{
	float s;
	int i, n;
	
	//nhap n va kiem tra hop le
	do
	{
		printf("Nhap vao so nguyen duong n:");
		scanf("%d", &n);
	}while(n<=0 || n>10);
	
	//xu ly tinh tong
	for(s=0, i=1; i<=n; i++)
	{
	    s=s+(1.0/(float)i);
	}
	printf("Ket qua = %.2f", s);
	
	return 0;
}
