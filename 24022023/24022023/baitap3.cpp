#include<stdio.h>
#include<stdlib.h>
#include<cstring>

typedef struct SINHVIEN{
	char mssv[10], hoten[30];
	int tuoi, somonhoc;
	float *diem, dtb;
}SV;

void nhap(SV *sv);
void	xuat(SV sv[], int n);
float diemTBmax(SV sv[], int n);
void xuatSVdtbMax(SV sv[], int n);

int main()
{
	int n, i;
	SV sv[n];
	
	do
	{
		printf("\nNhap so luong sinh vien ( 0< , <5000 ): ");
		scanf("%d", &n);
	}while(n<=0||n>=5000);
	
	for( i=1; i<=n; i++)
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
	
	for(i=1; i<=n; i++)
	{
		xuatSVdtbMax(&sv[i], n);
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
	sv->diem=(float*)malloc(sizeof(float)*sv->somonhoc);

	printf("\n\tNhap diem cac mon hoc:");
	for(int i=1; i<=sv->somonhoc; i++)
	{
		printf("\n\tMon %d: ", i);
		scanf("%f", sv->diem+i);
	}
}

void xuat(SV sv[], int n)
{
	int i;
	float sum;
	printf("\n\tMSSV: %s \tHo ten: %s", sv[i].mssv, sv[i].hoten);
	printf("\n\tSo tuoi: %d", sv[i].tuoi);
	printf("\n\tDiem cac mon hoc: ");
	for(int m=1; m<=sv[i].somonhoc; m++)
	{
		printf("\n\tMon %d: %.1f", m, *(sv[i].diem+m));
		sum=sum + (*(sv[i].diem+m));
	}
	sv[i].dtb=sum / (float)sv[i].somonhoc;
	printf("\n\tDiem trung binh: %.1f", sv[i].dtb);
}

float diemTBmax(SV sv[], int n)
{
	int i;
	float max;
	max=sv[1].dtb;
	for(i=1; i<=n; i++)
	{
		if(max<sv[i].dtb)
		{
			max=sv[i].dtb;
		}
	}
	return max;
}

void xuatSVdtbMax(SV sv[], int n)
{
	int i;
	if(sv[i].dtb==diemTBmax(&sv[i], n))
	{
		xuat(&sv[i], n);
	}
}











