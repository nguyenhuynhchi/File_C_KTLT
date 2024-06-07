#include <stdio.h>
int main()
{
	int i=1, s=0, n;
	
	//nhap n va kiem tra
	do
	{
	printf("Nhap vao so nguyen duong n:");
	scanf("%d", &n);
	}
	while(n<0 || n>9);
	
	// xu ly 
	for(i,s; i<=n; i++)
	s=s+i;
	printf("Tong cac so nguyen tu 1 toi n = %d", s);
	
	return 0;
}
