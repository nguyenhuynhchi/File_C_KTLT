#include <stdio.h>
void nhapM2C(float A[][10], int m, int n);
float tongAm(float A[][10], int m, int n);
int main()
{
	float mang2[10][10];
	int sd, sc;
//	nhap so dong, so cot (m=dong, n=cot)
	printf("Nhap so dong cua mang: "); scanf("%d", &sd);
	printf("Nhap so cot  cua mang: "); scanf("%d", &sc);
	
	nhapM2C(mang2, sd, sc);
	
	printf("\nKet qua tinh tong mang la: %.1f", tongAm(mang2, sd, sc));

	
	return 0;
}

void nhapM2C(float A[][10], int m, int n)
{
//	i= vi tri dong, j vi tri cot
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\nNhap gia tri tai vi tri A[%d][%d]: ", i, j);
			scanf("%f", &A[i][j]);
		}
	}
}

float tongAm(float A[][10], int m, int n)
{
	int i, j, s=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(A[i][j]<0)
			{
				s+=A[i][j];	
			}
		}
	}	
	return s;
}







