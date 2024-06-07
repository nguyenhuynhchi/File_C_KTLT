#include<stdio.h>
#include<stdlib.h>
void nhapSoNguyen(int *A[], int n);
void xuatGiaTri(int *A[], int n);
int giaTriMax(int *A[], int n);
int demMax(int *A[], int n);
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
	nhapSoNguyen(&mang, n);
	
//	xuat gia tri
	printf("\nCac gia tri vua nhap la: ");
	xuatGiaTri(&mang, n);
	
	printf("\nGia tri lon nhat la: %d", giaTriMax(&mang, n));
	
	printf("\nCo %d gia tri lon nhat", demMax(&mang, n));
	
	return 0;
}

void nhapSoNguyen(int *A[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Gia tri tai vi tri %d: ", i);
		scanf("%d", &A[i]);
	}	
}

void xuatGiaTri(int *A[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%4d", A[i]);
	}	
}

int giaTriMax(int *A[], int n)
{
	int max=A[0];
	for(int i=0; i<n; i++)
	{
		if(max>A[i]))
		{
			max=A[i];
		}
	}
	return max;
}

int demMax(int *A[], int n)
{
	int demmax=0;
	for(int i=0; i<n; i++)
	{
		if(A[i]==giaTriMax(&mang, n))
		{
			demmax++;
		}
	}
	return demmax;
}










