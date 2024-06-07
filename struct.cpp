#include <stdio.h>
#include<stdlib.h>
typedef struct SINHVIEN
{
	char hoten[30], mssv[10], gioitinh[4], noisinh[40];
	int somonhoc;
	float*diem;
}SV;

struct LOP
{
	char malop[15], covan[30], nienkhoa[20];
	int siso;
	SV*list;
};

//sinh vien
void nhapSV(SV *sv);//nhap 1 sinh vien
void xuatSV(SV sv);
void nhapMangSV(SV *sv, int n);//nhap nhieu sinh vien
void xuatMangSV(SV sv[], int n);

//lop hoc
void nhapLop(LOP *a);
void xuatLop(LOP a);

int main()
{
	int n, i;
	SV sv[n];
	printf("\nNhap so luong sinh vien: ");
	scanf("%d", &n);
	
//		printf("\nNhap thong tin sinh vien: ");
//		nhapSV(&sv);
//
//		printf("\nThong tin sinh vien: ");
//		xuatSV(&sv);
	printf("\nNhap thong tin cac sinh vien:\n ");
	nhapMangSV(&sv[i], n);
	
	printf("\nThong tin cac sinh vien:\n ");
	xuatMangSV(&sv[i], n);
	
	return 0;
}


void nhapMangSV(SV sv[], int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d: ", i+1);
		nhapSV(&sv[i]);
	}
}
void xuatMangSV(SV sv[], int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("\nThong tin sinh vien thu %d: \n", i+1);
		xuatSV(&sv[i]);
	}
}


void nhapSV(SV *sv)
{
	printf("\nNhap ho ten: ");
	fflush(stdin);
	gets(sv->hoten);
	
	printf("Nhap ma so: ");
	fflush(stdin);
	scanf("%s", sv->mssv);
	
	printf("Nhap so mon hoc: ");
	scanf("%d", &sv->somonhoc);
	
	sv->diem = (float*)malloc(sizeof(float)*(sv->somonhoc));
	for(int i = 0; i< sv->somonhoc; i++)
	{
		printf("Diem  mon thu %d: ", i+1);
		scanf("%f", sv->diem+i);
	}
	
}
void xuatSV(SV sv)
{
	printf("MSSV: %s\tHo ten: %s\n", sv.mssv, sv.hoten);
	printf("Diem so %d mon hoc : \n", sv.somonhoc);
	for(int i = 0; i< sv.somonhoc; i++)
	{
		printf("\t-Mon %d: %.1f\t", i, *(sv.diem+i));
	}
}


void nhapLop(LOP *a)
{
	printf("\nNhap co van: ");
	fflush(stdin);
	gets(a->covan);
	
	printf("\nNhap ma lop: ");
	fflush(stdin);
	scanf("%s", a->malop);
	
	printf("\nNhap si so: ");
	scanf("%d", &a->siso);
	
	a->list = (SV*)malloc(sizeof(SV)*(a->siso));
	
}
void xuatLop(LOP a)
{
	printf("");
}
