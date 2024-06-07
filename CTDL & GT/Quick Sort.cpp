#include <stdio.h>

void hoanVi(int *a, int *b);
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void xuatMangSapXep(int a[], int n);
void quickSort(int a[], int l, int r);


int main()
{
	int n, list[50];
	
	printf("\nNhap so phan tu trong mang: ");
	scanf("%d", &n);
	
	printf("\nNhap cac gia tri trong mang: \n");
	nhapMang(list, n);
	
	printf("\nCac gia tri vua nhap la: ");
	xuatMang(list, n);
	
	printf("\nSap xep theo phuong phap Quick Sort:\n ");
	quickSort(list, 0, n-1);
	
	printf("\nSau khi sap xep: ");
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
		printf("\nVi tri a[%d]: %d", i, a[i]);
	}
}

void quickSort(int a[], int l, int r)
{
	int i, j;
	int x;
	x=a[(l+r)/2];
	i=l;
	j=r;
	do
	{
		while(a[i]< x) i++;
		while(a[j]> x) j--;
		if(i<=j)
		{
			hoanVi(&a[i], &a[j]);
			i++;
			j--;
		}
	}while(i<j);
	if(l<j)
	{
		quickSort(a, l, j);
	}
	if(i<r)
	{
		quickSort(a, i, r);
	}
}










