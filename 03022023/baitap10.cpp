#include<stdio.h>
#include<stdlib.h>
void nhapSoNguyen(int n, int *A);
void xuatGiaTri(int n, int *A);
void xuat4ChuSo(int n, int *A);
int main()
{
	int n;
	int *mang;
	
//	nhap va kiem tra n
	printf("Nhap vao so nguyen n(0 < n < 100): ");
	scanf("%d", &n);
	if(n<=0||n>=100)
	{
		do
		{
			printf("Nhap lai n(0 < n < 100): ");
			scanf("%d", &n);
		}while(n<=0||n>=100);
	}
	
//	cap phat vung nho cho mang
	mang=(int*)malloc(n*sizeof(int));
	
//	nhap gia tri
	printf("\nNhap vao cac gia tri : \n");
	nhapSoNguyen(n, mang);
	
//	xuat gia tri
	printf("\nCac gia tri vua nhap la: ");
	xuatGiaTri(n, mang);
	
//	xuat gia tri 4 chu so
	printf("\nCac gia tri co 4 chu so: ");
	xuat4ChuSo(n, mang);
	return 0;
}

void nhapSoNguyen(int n, int *A)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Gia tri tai vi tri %d: ", i);
		scanf("%d", &A[i]);
	}	
}

void xuatGiaTri(int n, int *A)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\t%d", A[i]);
	}	
}

void xuat4ChuSo(int n, int *A)
{
	int i;
	for(i=0; i<n; i++)
	{
		int m=0;
		int f=A[i];
		while(f>0)
		{
			f=f/10;
			m++;
		}
		if(m==4)
		{
			printf("\t%d", A[i]);
		}
	}
}






