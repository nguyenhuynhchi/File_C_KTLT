#include<stdio.h>
 
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void swap(int *a, int *b);

//cac ham sap xep
void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void interchangeSort(int a[], int n);
void bubleSort(int a[], int n);
void quickSort(int a[], int l, int r);
void shift(int a[], int l, int r);
void createHeap(int a[], int n);
void heapSort(int a[], int n);


int main()
{
	int n, lish[100];
	//nhap so luong phan tu va gia tri cac phan tu
	printf("\nNhap so phan tu trong mang: ");
	scanf("%d", &n);
	printf("\nNhap cac gia tri trong mang:\n");
	nhapMang(lish, n);
	printf("\nCac gia tri vua nhap: ");
	xuatMang(lish, n);
	
	//xuat mang sau khi sap xep
	printf("\n\nSelection Sort: ");
	selectionSort(lish, n); 
	xuatMang(lish, n);

	printf("\n\nInsertion Sort: ");
	insertionSort(lish, n);
	xuatMang(lish, n);
	
	printf("\n\nInterchange Sort: ");
	interchangeSort(lish, n);
	xuatMang(lish, n);
	
	printf("\n\nBubble Sort:\t ");
	bubleSort(lish, n);
	xuatMang(lish, n);
	
	printf("\n\nQuick Sort:\t ");
	quickSort(lish, 1, n);
	xuatMang(lish, n);
	
	printf("\n\nHeap Sort:\t");
	heapSort(lish, n);
	xuatMang(lish, n);
	
	return 0;
}

void nhapMang(int a[], int n)
{
	for(int i=1; i<=n; i++)
	{
		printf("\nNhap gia tri tai a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n)
{
	for(int i=1; i<=n; i++)
	{
		printf("\t%d", a[i]);
	}
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int a[], int n)
{
	int max;
	for(int i=1; i<=n-1; i++)
	{
		max=i;
		for(int j=i+1; j<=n; j++)
		{
			if(a[j] > a[max])
			{
				max=j;
			}
		}
		swap(&a[i], &a[max]);
	}
}

void insertionSort(int a[], int n)
{
	int pos, i;
	int x;
	for (int i=1 ; i<=n; i++)
	{
		x=a[i];
		pos=i-1;	//tim vi tri chen x
		while((pos>=1)&&(a[pos]<x))
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;	//chen x vao day
	}
}

void interchangeSort(int a[], int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(a[j]>a[i])
			{
				swap(&a[i], &a[j]);
			}
		}
	}
}

void bubleSort(int a[], int n)
{
	int i, j;
	for(i=1; i<n; i++)
	{
		for(j=n-1; j>i; j--)
		{
			if(a[j]>a[j-1])
			{
				swap(&a[j], &a[j-1]);
			}
		}
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
		while(a[i]> x) i++;
		while(a[j]< x) j--;
		if(i<=j)
		{
			swap(&a[i], &a[j]);
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

void shift(int a[], int l, int r)
{
	int x, i, j;
	i=l;
	j=2*i;	//(a.i, a.j), (a.i, a.j+1) la cac phan tu lien doi 
	x=a[i];
	while(j<=r)
	{
		if(j<r)	//neu co du 2 phan tu lien doi
			if(a[j]>a[j+1])	//xac dinh phan tu lien doi max
				j=j+1;
			if(a[j]>x)
				break;	//thoa quan he lien doi, stop
			else
			{
				a[i]=a[j];
				i=j;		//xet tiep kha nang hieu chinh lan truyen
				j=2*i;
				a[i]=x;
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
		swap(&a[1], &a[r]);
		r=r-1;
		shift(a, 1, r);	
	}
}





