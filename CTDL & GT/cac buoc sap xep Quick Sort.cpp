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
	
	printf("\n%-5s%-5s%-5s", "i", "j", "x");
	for(int stt=1; stt<=n; stt++)
	{
		printf("\t%-5d", stt);
	}
	printf("\n");
	
	quickSort(list, 0, n);
	
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
	for(int i=1; i<=n; i++)
	{
		printf("\nVi tri a[%d]: %d", i, a[i]);
	}
}

void xuatMangSapXep(int a[], int n)
{
	printf("\t");
	for(int i=1; i<=n; i++)
	{
		printf("%-5d\t", a[i]);
	}
	printf("\n");
}

void quickSort(int a[], int l, int r)
{
	int i, j=r;
	int x;
	x=a[(l+r)/2];
	i=l;
	j=r;
	
	if(l<j)
		printf("%-5d%-5d%-5d", l, j, x);
	else if(i<r)
		printf("%-5d%-5d%-5d", i, r, x);
	
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
		xuatMangSapXep(a, r);
	}
	if(i<r)
	{
		quickSort(a, i, r);
		xuatMangSapXep(a, r);
	}
}










