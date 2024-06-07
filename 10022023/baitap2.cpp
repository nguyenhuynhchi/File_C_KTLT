#include<stdio.h>
#include<stdlib.h>
#include<cstring>
typedef struct SINHVIEN
{
	char mssv[10], hoten[30], gioitinh[4];
	int namsinh, somonhoc;
	float*diem;
}SV;

void nhap(SV *sv);
void nhapds(SV sv[], int n);
void xuat(SV sv[], int n);
void xuatTheoMS(SV sv[], int n, char ms[]);

int main()
{
	int n, i;
	SV a[n];
	
//	nhap so luong sinh vien
	printf("\nNhap so luong sinh vien (0 < n < 10): ");
	scanf("%d", &n);
	if(n<0||n>10)
	{
		do
		{
			printf("\nNhap lai (0 < n < 10): ");
			scanf("%d", &n);
		}while(n<0||n>=10);
	}
	
//	nhap thong tin sinh vien
	for(int i=1; i<=n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d:", i);
		nhapds(&a[i], n);
		printf("\n------------------------------------\n");
	}
	
	for(int i=1; i<=n; i++)
	{
		printf("\nThong tin sinh vien thu %d:", i);
		xuat(&a[i], n);
		printf("\n====================================\n");
	}
	
	char ms[10];
	
	printf("\nNhap ma so sinh vien can tim kiem: ");
	fflush(stdin);
	scanf("%s", ms);
	
	for(int i=1; i<=n; i++)
	{
		xuatTheoMS(&a[i], n, ms);
	}
	
	return 0;
}

void nhap(SV *sv)
{
	printf("\nNhap ma so sinh vien: ");
	fflush(stdin);
	scanf("%s", sv->mssv);
	
	printf("\nNhap ho ten sinh vien: ");
	fflush(stdin);
	gets(sv->hoten);
	
	printf("\nNhap nam sinh: ");
	scanf("%d", &sv->namsinh);
	
	printf("\nNhap gioi tinh: ");
	fflush(stdin);
	scanf("%s", sv->gioitinh);
	
	printf("\nNhap so mon hoc: ");
	scanf("%d", &sv->somonhoc);
	
	//Cap phat vung nho cho thanh phan diem
	sv->diem = (float*)malloc(sizeof(float)*sv->somonhoc);
	
	for(int i=1; i<=sv->somonhoc; i++)
	{
		printf("\nNhap diem mon thu %d: ", i);
		scanf("%f", sv->diem+i);
	}
}

void nhapds(SV sv[], int n)
{
	nhap(sv);
}

void xuat(SV sv[], int n)
{
	int i;
	printf("\nMSSV: %s \tHo ten: %s \tGioi tinh: %s", sv[i].mssv, sv[i].hoten, sv[i].gioitinh);
	printf("\nNam sinh: %d \tSo mon hoc: %d", sv[i].namsinh, sv[i].somonhoc);
	printf("\nDiem so cac mon hoc:");
	for(int m=1; m<=sv[i].somonhoc; m++ )
	{
		printf("\n -Diem so mon hoc thu %d: %.1f", m, *(sv[i].diem+m));
	}
}

void xuatTheoMS(SV sv[], int n, char ms[])
{
	int i;
	if(strcmp(sv[i].mssv, ms)==0)
	{
		xuat(&sv[i], n);
	}
}






