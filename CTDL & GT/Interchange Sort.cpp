#include <stdio.h>

void hoanVi(int *a, int *b);
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void interchangeSort(int a[], int n);

int main()
{
	int n, list[n];
	
	printf("\nNhap so phan tu trong mang: ");
	scanf("%d", &n);
	
	printf("\nNhap cac gia tri trong mang: \n");
	nhapMang(list, n);
	
	printf("\nCac gia tri vua nhap la: ");
	xuatMang(list, n);
	
	printf("\nSap xep: \n");
	interchangeSort(list, n);
	
	printf("\nSau khi sap xep Interchange Sort: ");
	xuatMang(list, n);
	
	return 0;
}



void hoanVi(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void nhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Vi tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("%d \t", a[i]);
	}
	printf("\n");
}



void interchangeSort(int a[], int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<=n-1; j++)
		{
			if(a[j]<a[i])
			{
				hoanVi(&a[i], &a[j]);
			}
			xuatMang(a, n);
		}
	}
}






