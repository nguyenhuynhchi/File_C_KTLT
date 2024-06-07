#include<stdio.h>
#include<stdlib.h>
typedef struct SINHVIEN
{
	char hoten[30], gioitinh[4];
	int mssv, namsinh, somonhoc;
	float*diem;
}SV;

void nhap(SV *sv);
void nhapds(SV sv[], int n);
void xuat(SV sv[], int n);
//int xuatTheoMS(SV sv[], int n, int ms;

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
	scanf("%d", &ms);
	
	return 0;
}

void nhap(SV *sv)
{
	printf("\nNhap ma so sinh vien: ");
	scanf("%d", &sv->mssv);
	
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
	int i = 0;
	while(i<sv->somonhoc)
	{
		printf("\nNhap diem mon thu %d: ", i+1);
		scanf("%f", sv->diem+i);
		i++;
	}
}

void nhapds(SV sv[], int n)
{
	nhap(sv);
}

void xuat(SV sv[], int n)
{
	int i;
	printf("\nMSSV: %d \tHo ten: %s \tGioi tinh: %s", sv[i].mssv, sv[i].hoten, sv[i].gioitinh);
	printf("\nNam sinh: %d \tSo mon hoc: %d", sv[i].namsinh, sv[i].somonhoc);
	printf("\nDiem so cac mon hoc:");
	for(int m=0; m<sv->somonhoc; m++ )
	{
		printf("\n -Diem so mon hoc thu %d: %.1f", m+1, *(sv[i].diem+m));
	}
}

int xuatTheoMS(SV sv[], int n, int ms)
{
	int i;
	for(int i=1; i<=n; i++)
	{
		if(sv[i].mssv==ms)
		{
			printf("\nMSSV: %d \tHo ten: %s \tGioi tinh: %s", sv[i].mssv, sv[i].hoten, sv[i].gioitinh);
			printf("\nNam sinh: %d \tSo mon hoc: %d", sv[i].namsinh, sv[i].somonhoc);
			printf("\nDiem so cac mon hoc:");
			for(int m=0; m<sv->somonhoc; m++ )
			{
				printf("\n -Diem so mon hoc thu %d: %.1f", m+1, *(sv[i].diem+m));
			}	
		}
	}	
}





