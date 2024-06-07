#include <stdio.h>
void nhapM2C(int A[][10], int m, int n);
void xuatM2C(int A[][10], int m, int n);
void xuatDongK(int A[][10], int m, int n, int l);
int tinhTongDongK(int A[][10], int m, int n, int l);
int main()
{
	int mang2[10][10];
	int sd, sc, k, kq;
	
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
		printf("\nNhap vao dong can in cac gia tri: ");
		scanf("%d", &k);
	}while(k<0||k>sd);
	
	printf("\nCac gia tri tren dong %d: ", k);
	xuatDongK(mang2, sd, sc, k);
	
	kq=tinhTongDongK(mang2, sd, sc, k);
	printf("\nKet qua tinh tong cua dong %d: %d", k, kq);
	
	
	
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

void xuatDongK(int A[][10], int m, int n, int l)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==l)
			{
				printf("%5d", A[i][j]);
			}
		}
	}
}

int tinhTongDongK(int A[][10], int m, int n, int l)
{
	int i, j;
	int s=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==l)
			{
				s=s+A[i][j];
			}
		}
	}
	return s;
}









