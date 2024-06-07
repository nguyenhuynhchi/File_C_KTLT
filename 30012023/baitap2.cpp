#include <stdio.h>
void nhapM2C(int A[][10], int m, int n);
void xuatM2C(int A[][10], int m, int n);
void xuatCotK(int A[][10], int m, int n, int l);
int main()
{
	int mang2[10][10];
	int sd, sc, k;
	
//	nhap so dong, so cot (m=dong(sd), n=cot(sc)
	printf("Nhap so dong cua mang: ");
	scanf("%d", &sd);
	printf("Nhap so cot  cua mang: ");
	scanf("%d", &sc);
	
	
	nhapM2C(mang2, sd, sc);
	
	printf("\nMang 2 chieu vua nhap la:\n");
	xuatM2C(mang2, sd, sc);
	
//	nhap va kiem tra k
	do
	{
		printf("Nhap vao cot can in cac gia tri: ");
		scanf("%d", &k);
	}while(k<0||k>=sc);
	
	printf("\nCac gia tri tren cot %d: ", k);
	xuatCotK(mang2, sd, sc, k);
	
	
	
	return 0;
}

void nhapM2C(int A[][10], int m, int n)
{
//	i= vi tri dong, j vi tri cot
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("\nNhap gia tri tai vi tri A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
}

void xuatM2C(int A[][10], int m, int n)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%5d", A[i][j]);
		}
		printf("\n");
	}
}

void xuatCotK(int A[][10], int m, int n, int l)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(j==l)
			{
				printf("%5d", A[i][j]);
			}
		}
	}
}









