#include<stdio.h>
#include<stdlib.h>
#include<cstring>
typedef struct SINHVIEN
{
	char mssv[10], hoten[30], gioitinh[6];
	int namsinh, somon;
	float *diem;
}SV;

void nhap(SV *sv);
void xuat(SV sv[], int n);
void xuatTheoMSSV(SV sv[], int n, char ms[]);

int main()
{
	int n;
	SV sv[n];
	printf("\nNhap so luong sinh vien: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d: ", i);
		nhap(&sv[i]);
		printf("\n==================================\n");
	}
	
	printf("\n||||||||||||||||||||||||||||||||||||||||||\n");
	
	for(int i=1; i<=n; i++)
	{
		printf("\nThong tin sinh vien thu %d: ", i);
		xuat(&sv[i], n);
		printf("\n**********************************\n");
	}
	
	char ms[10];
	printf("\nNhap MSSV can tim: ");
	fflush(stdin);
	scanf("%s", ms);
	
	for(int i=1; i<=n; i++)
	{
		xuatTheoMSSV(&sv[i], n, ms);
	}
	
	return 0;
}

void nhap(SV *sv)
{
	printf("\n\tNhap MSSV: ");
	fflush(stdin);
	scanf("%s", sv->mssv);
	
	printf("\n\tNhap ho ten: ");
	fflush(stdin);
	gets(sv->hoten);
	
	printf("\n\tGioi tinh: ");
	fflush(stdin);
	scanf("%s", sv->gioitinh);
	
	printf("\n\tNhap nam sinh: ");
	scanf("%d", &sv->namsinh);
	
	printf("\n\tSo mon hoc: ");
	scanf("%d", &sv->somon);
	
//	cap phat vung nho cho diem
	sv->diem=(float*)malloc(sizeof(float)*sv->somon);
	
	for(int i=1; i<=sv->somon; i++)
	{
		printf("\n\tMon %d: ", i);
		scanf("%f", sv->diem+i);
	}
}

void xuat(SV sv[], int n)
{
	int i;
	printf("\n\tMSSV: %s \tHo ten: %s", sv[i].mssv, sv[i].hoten);
	printf("\n\tGioi tinh: %s \tNam sinh: %d", sv[i].gioitinh, sv[i].namsinh);
	printf("\n\tSo mon hoc: %d", sv[i].somon);
	for(int m=1; m<=sv[i].somon; m++)
	{
		printf("\n\t-Mon %d: %.1f", m, *(sv[i].diem+m));
	}
}
void xuatTheoMSSV(SV sv[], int n, char ms[])
{
 	int i;
 	if(strcmp(ms, sv[i].mssv)==0)
 	{
 		xuat(&sv[i], n);	
	}
}

