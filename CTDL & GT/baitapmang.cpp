#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

typedef struct SINHVIEN
{
	char hoten[20];
	int mssv, namsinh;
}SV;

void nhapTT(SV sv[], int n);
void xuatTT(SV sv[], int n);
//void swap(SV *a, SV *b);
void selectionSort(SV sv[], int n);
void Gan(SV &a, SV b);
void insertionSort(SV sv[], int n);
void interchangeSort(SV sv[], int n);
void bubleSort(SV sv[], int n);
void quickSort(SV sv[], int l, int r);
void shift(SV sv[], int l, int r);
void createHeap(SV sv[], int n);
void heapSort(SV sv[], int n);



int main()
{
	int n, i;
	SV sv[100];
	do
	{
		printf("\nNhap so luong sinh vien: ");
		scanf("%d", &n);
	}while(n<=0);
	
	printf("\nNhap thong tin cac sinh vien:");
	nhapTT(sv, n);
	printf("\nDanh sach thong tin cac sinh vien:");
	xuatTT(sv, n);
	
	printf("\n=====================================\n");
	printf("\nSap xep sinh vien theo MSSV: ");
	
	printf("\n\nSelection Sort: ");
	selectionSort(sv, n);
	xuatTT(sv, n);
	
	printf("\n\nInsertion Sort: ");
	insertionSort(sv, n);
	xuatTT(sv, n);
	
	printf("\n\nInterchange Sort: ");
	interchangeSort(sv, n);
	xuatTT(sv, n);
	
	printf("\n\nBuble Sort:");
	bubleSort(sv, n);
	xuatTT(sv, n);
	
	printf("\n\nQuick Sort:");
	quickSort(sv, 1, n);
	xuatTT(sv, n);
	
	printf("\n\nHeap Sort: ");
	heapSort(sv, n);
	xuatTT(sv, n);
	
	printf("\n=====================================\n");
	printf("\nSap xep sinh vien theo nam sinh: ");
	
	
	return 0;
}

void nhapTT(SV sv[], int n)
{
	for(int i=1; i<=n; i++)
	{
		printf("\n\nNhap thong tin sinh vien thu %d:\n ", i);
		printf("\n\tHo ten: ");
		fflush(stdin);
		gets(sv[i].hoten);
		
		printf("\n\tMSSV: ");
		scanf("%d", &sv[i].mssv);
		
		printf("\n\tNam sinh: ");
		scanf("%d", &sv[i].namsinh); 
		
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	}
}

void xuatTT(SV sv[], int n)
{
	printf("\n\tHo ten:\t\t\tMSSV:\t\t\tNam sinh:");
	for(int i=1; i<=n; i++)
	{
		printf("\n\t%s\t\t%d\t\t\t%d", sv[i].hoten, sv[i].mssv, sv[i].namsinh);  
	}
}

void Gan(SV &a, SV b)
{
	a.mssv=b.mssv;
	strcpy(a.hoten, b.hoten);
	a.namsinh=b.namsinh;
}

void selectionSort(SV sv[], int n)
{
	int min;
	for(int i=1; i<=n-1; i++)
	{
		min=i;
		for(int j=i+1; j<=n; j++)
		{
			if(sv[j].mssv < sv[min].mssv)
			{
				min=j;
			}
		}
		swap(sv[i], sv[min]);
	}
}


void insertionSort(SV sv[], int n)
{
	int pos, i;
	SV x;
	for (int i=2 ; i<=n; i++)
	{
		//x=sv[i]
		Gan(x, sv[i]);
		pos=i-1;	//tim vi tri chen x
		while((pos>=0)&&(sv[pos].mssv>x.mssv))
		{
			//sv[pos+1]=sv[pos]
			Gan(sv[pos+1], sv[pos]);
			pos--;
		}
		//sv[pos+1]=x	//chen x vao day
		Gan(sv[pos+1], x);
	}
}


void interchangeSort(SV sv[], int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		for(j=i+1; j<=n; j++)
		{
			if(sv[j].mssv<sv[i].mssv)
			{
				swap(sv[i], sv[j]);
			}
		}
	}
}

void bubleSort(SV sv[], int n)
{
	int i, j;
	for(i=1; i<n; i++)
	{
		for(j=n-1; j>=i; j--)
		{
			if(sv[j].mssv<sv[j-1].mssv)
			{
				swap(sv[j], sv[j-1]);
			}
		}
	}
}

void quickSort(SV sv[], int l, int r)
{
	int i, j;
	SV x;
//	x=sv[(l+r)/2]
	Gan(x, sv[(l+r)/2]);
	i=l;
	j=r;
	do
	{
		while(sv[i].mssv< x.mssv) i++;
		while(sv[j].mssv> x.mssv) j--;
		if(i<=j)
		{
			swap(sv[i], sv[j]);
			i++;
			j--;
		}
	}while(i<j);
	if(l<j)
	{
		quickSort(sv, l, j);
	}
	if(i<r)
	{
		quickSort(sv, i, r);
	}
}

void shift(SV sv[], int l, int r)
{
	int i, j;
	SV x;
	i=l;
	j=2*i;	//(a.i, a.j), (a.i, a.j+1) la cac phan tu lien doi 	
//	x=a[i]
	Gan(x, sv[i]);
	while(j<=r)
	{
		if(j<r)	//neu co du 2 phan tu lien doi
			if(sv[j].mssv<sv[j+1].mssv)	//xac dinh phan tu lien doi max
				j=j+1;
			if(sv[j].mssv<x.mssv)
				break;	//thoa quan he lien doi, stop
			else
			{
				//sv[i].mssv=sv[j].mssv
				Gan(sv[i], sv[j]);
				i=j;		//xet tiep kha nang hieu chinh lan truyen
				j=2*i;
				sv[i].mssv=x.mssv;
			}
	}
}

void createHeap(SV sv[], int n)
{
	int l;
	l=n/2;	//a[l] la phan tu ghep
	while(l>0)
	{
		shift(sv, l, n);
		l=l-1;	
	}	
}

void heapSort(SV sv[], int n)
{
	int r; 
	createHeap(sv, n);
	r=n;		//r la vi tri dung cho phan tu nho nhat
	while(r>0)
	{
		swap(sv[1], sv[r]);
		r=r-1;
		shift(sv, 1, r);	
	}
}








