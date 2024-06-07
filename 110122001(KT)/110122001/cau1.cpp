#include <stdio.h>
int main()
{
	int x, y;
	printf("\nNhap vao so nguyen [x,y]:");
	
	printf("\nx=");
	scanf("%d", &x);
	printf("\ny=");
	scanf("%d", &y);
	
	int m=0;
	int du;
	
//	kiem tra x
	while(x>0)
	{
		int dem=0;
		du=x%10;
		for(int k=1; k<=du; k++ )
		{
			if(du%k==0)
			{
				dem++;
			}
		}
		if(dem!=2)
		{
			printf("\nSo nguyen x KHONG co toan chu so nguyen to");
			m++;
		}
		x=x/10;
	}
	
	if(m==0)
	{
		printf("\nSo nguyen x CO toan chu so nguyen to");
	}
	
//	kiem tra y
	while(y>0)
	{
		int dem=0;
		du=y%10;
		for(int k=1; k<=du; k++ )
		{
			if(du%k==0)
			{
				dem++;
			}
		}
		if(dem!=2)
		{
			printf("\nSo nguyen y KHONG co toan chu so nguyen to");
			m++;
		}
		y=y/10;
	}
	
	if(m==0)
	{
		printf("\nSo nguyen y CO toan chu so nguyen to");
	}
	
	return 0;
}
	

	







