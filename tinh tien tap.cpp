#include <stdio.h>
float tinhGiaTien(int n);
int main()
{
	int sq;
	printf("\nNhap so quyen tap can mua: ");
	scanf("%d", &sq);
	if(sq<0)
	{
		do
		{
			printf("\nNhap lai so quyen ( >0 ):");
			scanf("%d", &sq);
		}while(sq<=0);
	}
	printf("\nTong gia tien: %.0fvnd", tinhGiaTien(sq));
	
	return 0;
}

float tinhGiaTien(int n)
{
	float sum, gia;
	
	//1 quyen 15000
	if(n<=30)
	{
		sum=n*15000;
	}
	//tren 30quyen giam 10%
	else if(n>30)
	{
		printf("\nBan duoc giam 10 phan tram vi mua tren 30 quyen tap.");
		gia=n*15000;
		sum=gia-(gia*0.1);
	}
	return sum;
}
