#include <stdio.h>

void hoanVi(int *a, int *b);
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void xuatMangSapXep(int a[], int n);
void selectionSort(int a[], int n);


int main()
{
	int n, list[100];
	
	printf("\nNhap so phan tu trong mang: ");
	scanf("%d", &n);
	
	printf("\nNhap cac gia tri trong mang: \n");
	nhapMang(list, n);
	
	printf("\nCac gia tri vua nhap la: ");
	xuatMang(list, n);
	
	printf("\nSap xep theo phuong phap Selection Sort:\n ");
	for(int stt=1; stt<=n; stt++)
	{
		printf("\t%-5d", stt);
	}
	printf("\n");
	selectionSort(list, n);
	
	printf("\nSau khi sap xep chon truc tiep: ");
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
	for(int i=1; i<=n; i++)
	{
		printf("Vi tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n)
{
	for(int i=1; i<=n; i++)
	{
		printf("\nVi tri a[%d]: %d", i, a[i]);
	}
}

void xuatMangSapXep(int a[], int n)
{

	for(int i=1; i<=n; i++)
	{
		printf("%-5d\t", a[i]);
	}
	printf("\n");
}

void selectionSort(int a[], int n)
{
	int min;
	for(int i=1; i<=n-1; i++)
	{
		min=i;
		for(int j=i+1; j<=n; j++)
		{
			if(a[j] < a[min])
			{
				min=j;
			}
		}
		hoanVi(&a[i], &a[min]);
		printf("\ni=%d\t", i);
		xuatMangSapXep(a, n);
	}
}
