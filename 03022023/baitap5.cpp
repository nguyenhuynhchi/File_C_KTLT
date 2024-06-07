#include<stdio.h>
#include<stdlib.h>
void nhapSoNguyen(int *A[], int n);
void xuatGiaTri(int *A[], int n);
int demSNT(int *A[], int n);
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
	
	printf("\nTrong n so nguyen co %d so nguyen to", demSNT(&mang, n));
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

int demSNT(int *A[], int n)
{
	int i;
	int snt;
	for(i=0; i<n; i++)
	{
		int dem=0;
		for(int k=1; k<=A[i]; k++)
		{
			if(A[i]%k==0)
			{
				dem++;
			}
		}
		if(dem==2)
		{
			snt++;
		}
	}
	return snt;
}










