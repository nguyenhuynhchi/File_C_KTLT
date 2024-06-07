#include <stdio.h>
float tinhTBCong(int TN[], int n);
int max(int TN[], int n);
int demMax(int TN[], int n);
int main()
{
	int sonv;
	int a[sonv];
	printf("\nNhap so luong nhan vien cua cong ty ABC: ");
	scanf("%d", &sonv);
	
	for(int i=0; i<sonv; i++)
	{
		printf("\nSo nam tham nien cua nhan vien thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\nTrung binh cong tham nien cua cac nhan vien tren 10 nam la: %.1f", tinhTBCong(a, sonv));
	
	printf("\nSo nam tham nien cao nhat la: %d",  max(a, sonv));
	
	printf("\nCo %d nhan vien co so nam tham nien cao nhat", demMax(a, sonv));
	return 0;
}

float tinhTBCong(int TN[], int n)
{
	float s=0;
	float dem=0;
	float tb;
	for(int i=0; i<n; i++)
	{
		if(TN[i]>10)
		{
			s+=TN[i];
			dem++;
		}
	}
	tb=s/dem;
	return tb;
}

int max(int TN[], int n)
{
  	int max=TN[0];
	for(int i=0; i<n; i++)
	{
		if(max<TN[i])
		{
			max=TN[i];
		}
	}
	
	return max;
}

int demMax(int TN[], int n)
{
	int dem =0;
  	int max=TN[0];
	for(int i=0; i<n; i++)
	{
		if(max<TN[i])
		{
			max=TN[i];
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(max==TN[i])
		{
			dem++;
		}
	}
	
	return dem;
}






