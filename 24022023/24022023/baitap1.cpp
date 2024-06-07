#include<stdio.h>
#include<stdlib.h>
#include<cstring>

typedef struct{
	char 	mssv[10], hoten[30];
	int 	tuoi, somonhoc;
	float 	*diem;
}SV;

void nhap(SV *sv);
void xuat(SV sv[], int n);
void xuatTheoMSSV(SV sv[], int n, char ms[10]);

int main()
{
	int n;
	int i;
	SV sv[n];
	
	do
	{
		printf("\nNhap so luong sinh vien ( 0< , <5000 ): ");
		scanf("%d", &n);
	}while(n<=0||n>=5000);
	
	for(i=1; i<=n; i++)
	{
		printf("\nNhap thong tin cho sinh vien thu %d: ", i);
		nhap(&sv[i]);
	}
	
	printf("\n//////////////////~~~//////////////////\n");
	
	for(i=1; i<=n; i++)
	{
		printf("\nThong tin sinh vien thu %d: ", i);
		xuat(&sv[i], n);
		printf("\n=======================================\n");
	}
	
	char ms[10];
	printf("\nNhap ma so sinh vien can tim: ");
	fflush(stdin);
	scanf("%s", ms);
	for(i=1; i<=n; i++)
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
	
	do
	{
		printf("\n\tNhap so tuoi: ");
		scanf("%d", &sv->tuoi);
	}while(sv->tuoi<18);
	
	printf("\n\tSo mon hoc: ");
	scanf("%d", &sv->somonhoc);
	
//	cap phat vung nho cho thanh phan diem
	printf("\n\tNhap diem cac mon hoc:");
	sv->diem=(float*)malloc(sizeof(float)*sv->somonhoc);
	for(int i=1; i<=sv->somonhoc; i++)
	{
			printf("\n\tMon %d: ", i);
			scanf("%f", sv->diem+i);
	}
}

void xuat(SV sv[], int n)
{
	int i;
	printf("\n\tMSSV: %s\tHo ten: %s", sv[i].mssv, sv[i].hoten);
	printf("\n\tSo tuoi: %d", sv[i].tuoi);
	printf("\n\tDiem cac mon hoc: ");
	for(int m=1; m<=sv[i].somonhoc; m++)
	{
		printf("\n\tMon %d: %.1f", m, *(sv[i].diem+m));
	}
}

void xuatTheoMSSV(SV sv[], int n, char ms[10])
{
	int i;
	if(strcmp(sv[i].mssv, ms)==0)
	{
		xuat(&sv[i], n);
	}
}







