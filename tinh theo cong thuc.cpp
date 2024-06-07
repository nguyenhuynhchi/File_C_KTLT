#include <stdio.h>
#include <math.h>

float tinhTheoCongThuc(float x, float n);
long tinhGiaiThua(int dt);

int main()
{
	float x, n;
	printf("Moi ban nhap x= ");
	scanf("%f", &x);
	
	printf("Moi ban nhap n= ");
	scanf("%f", &n);
	
	printf("\nKet qua cua cong thuc la: %.2f", tinhTheoCongThuc(x, n));
//	printf("\nTinh giai thua: %.2f", pow(x, n));
	
	return 0;	
}

float tinhTheoCongThuc(float x, float n)
{
	float ketqua=0;
	float congthuc;
	for(int i=0; i<=n; i++)
	{
		congthuc=(pow(x, 2*i+1))/(tinhGiaiThua(2*i+1));
		ketqua+=congthuc;
	}
	return ketqua;
}

long tinhGiaiThua(int dt)
{
	if(dt==0)
	{
		return 1;
	}
	else
	{
		return(dt*tinhGiaiThua(dt-1));
	}
}

