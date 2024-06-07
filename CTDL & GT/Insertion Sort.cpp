#include <stdio.h>

void hoanVi(int *a, int *b);
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void insertionSort(int a[], int n);

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
	insertionSort(list, n);
	
	printf("\nSau khi sap xep Insertion Sort: ");
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
		printf(" %d\t", a[i]);
	}
	printf("\n");
}

void insertionSort(int a[], int n)
{
	int pos, i;
	int x;
	for (int i=1 ; i<n; i++)
	{
		x=a[i];
		pos=i-1;	//tim vi tri chen x
		while((pos>=0)&&(a[pos]>x))
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;	//chen x vao day		
		xuatMang(a, n);
	}
}











