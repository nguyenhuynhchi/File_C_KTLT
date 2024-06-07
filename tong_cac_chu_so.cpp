#include <stdio.h>
int tongCacChuSo(int n );
int n;
int main()
{
	do
	{printf("nhap vao 1 so nguyen (4 chu so, >0):");
	scanf("%d",&n);}while(n<1000||n>9999);
	printf("ket qua tong cac chu so la: %d", tongCacChuSo (n));
	return 0;}
int tongCacChuSo (int n)
    {
    int s=0, du;
   	while (n>0)
	{
	du=n%10;
    s=s+du;
	n=n/10;
	}
	return s;
	}


