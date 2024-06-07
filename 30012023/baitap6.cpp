#include <stdio.h>
void nhapM2C(int A[][10], int m, int n);
void xuatM2C(int A[][10], int m, int n);
void xuatDongK(int A[][10], int m, int n, int l);
int  kiemTraSNT(int A[][10], int m, int n, int l);
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
		printf("Nhap vao dong can in cac gia tri: ");
		scanf("%d", &k);
	}while(k<0||k>sd);
	xuatDongK(mang2, sd, sc, k);
	
	kq=kiemTraSNT(mang2, sd, sc, k);
	if(kq==1)
	{
		printf("\nTren dong k CO ton tai so nguyen to");
	}
	else
	{
		printf("\nTren dong k KHONG ton tai so nguyen to");
	}
	
	
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

int kiemTraSNT(int A[][10], int m, int n, int l)
{
	int i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==l)
			{
				int dem=0;
				for(int t=1; t<=A[i][j]; t++)
				{
					if(A[i][j]%t==0)
					{
						dem++;
					}
				}
				if(dem==2)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}











