#include <stdio.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void timDSAm(int a[], int n, int B[], int *m);
int tongMang(int a[], int n);
int main()
{
	int a[100], list[100];
	int n, k;
	
	printf("\nNhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	nhapMang(a, n);
	
	printf("\nMang vua nhap la: ");
	xuatMang(a, n);
	
	timDSAm(a,n,list,&k);
	
	printf("\nCac phan tu am trong mang: ");
	xuatMang(list,k);
	
	printf("\nTong cac gia tri am: %d", tongMang(list,k));

	return 0;
}
int tongMang(int a[], int n)
{
	int s = 0;
	int i = 0;
	while(i<n)
	{
		s = s + a[i];
		i++;
	}
	return s;
}

void timDSAm(int a[], int n, int B[], int *m)
{
	int i =0, j =0;
	while(i<n)
	{
		if(a[i]<0)
		{
			B[j]=a[i];
			j++;
		}
		i++;
	}
	*m = j;
}
void nhapMang(int a[], int n)
{
	int i = 0;
	while(i<n)
	{
		printf("\nNhap gia tri tai vi tri %d: ", i);
		scanf("%d", &a[i]);
		i++;
	}
}
void xuatMang(int a[], int n)
{
	int i = 0;
	while(i<n)
	{
		printf("%d\t", a[i]);
		i++;
	}
}

