#include <stdio.h>
#include <math.h>
int main()
{
	int n, s=0, i=1;
	
	//nhap n va kiem tra
	do
	{
	printf("Nhap vao so nguyen duong n:");
	scanf("%d", &n);
	}
	while(n<0 || n>9);
	
	//xu ly
	for(s, i; i<=n; i++)
	s=s+pow(i,2);
	printf("Ket qua = %d", s);
	
	return 0;
}
	
