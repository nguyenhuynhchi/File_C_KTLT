#include <stdio.h>

void hoanVi(int *a, int *b);
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
//void xuatMangSapXep(int a[], int n);
void shift(int a[], int l, int r);
void createHeap(int a[], int n);
void heapSort(int a[], int n);


int main()
{
	int n, list[n];
	
	printf("\nNhap so phan tu trong mang: ");
	scanf("%d", &n);
	
	printf("\nNhap cac gia tri trong mang: \n");
	nhapMang(list, n);
	
	printf("\nCac gia tri vua nhap la: ");
	xuatMang(list, n);
	
	heapSort(list, n);
	
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

void shift(int a[], int l, int r)
{
	int x, i, j;
	i=l;
	j=2*i;	//(a.i, a.j), (a.i, a.j+1) la cac phan tu lien doi 
	x=a[i];
	while(j<=r)
	{
		if(j<r)	//neu co du 2 phan tu lien doi
		{
			if(a[j]<a[j+1])	//xac dinh phan tu lien doi max
			{
				j=j+1;
			}
			if(a[j]<x)
			{
				break;	//thoa quan he lien doi, stop
			}
			else
			{
				a[i]=a[j];
				i=j;		//xet tiep kha nang hieu chinh lan truyen
				j=2*i;
				a[i]=x;
			}
		}
	}
}

void createHeap(int a[], int n)
{
	int l;
	l=n/2;	//a[l] la phan tu ghep
	while(l>0)
	{
		shift(a, l, n);
		l=l-1;	
	}	
}

void heapSort(int a[], int n)
{
	int r; 
	createHeap(a, n);
	r=n;		//r la vi tri dung cho phan tu nho nhat
	while(r>0)
	{
		hoanVi(&a[l], &a[r]);
		r=r-l;
		shift(a, l, n);	
	}
}









