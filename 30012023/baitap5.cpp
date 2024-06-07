#include <stdio.h>
void nhapM2C(int A[][10], int m, int n);
void xuatM2C(int A[][10], int m, int n);
void xuatDongK(int A[][10], int m, int n, int l);
int demTong5K(int A[][10], int m, int n, int l);
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
		printf("Nhap vao dong can in cac gia tri: ");
		scanf("%d", &k);
	}while(k<0||k>sd);
	
	printf("\nCac gia tri tren dong %d: ", k);
	xuatDongK(mang2, sd, sc, k);
	
	printf("\nSo phan tu co tong cac chu bang 5 tren dong %d la: %d", k, demTong5K(mang2, sd, sc, k));
	
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

//dem so co tong cac chu so bang 5
int demTong5K(int A[][10], int m, int n, int l)
{
	int i, j;
	int dem=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==l)
			{
				int du=0;
				int n=A[i][j];
				while(n>0)
				{
					du=du+n%10;
					n=n/10;
				}
				if(du==5)
				{
					dem++;
				}	
			}
		}
	}
	return dem;
}













