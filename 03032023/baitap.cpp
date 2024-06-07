#include<stdio.h>
#include<stdlib.h>
typedef struct SINHVIEN
{
	char mssv[10], hoten[30], gioitinh[6], noisinh[40];
	int somonhoc;
	float *diem;
}SV;

struct LOP
{
	char malop[10], tencv[30], nienkhoa[20];
	int siso; 
};

void nhapSV(SV *sv);
void xuatSV(SV sv[], int n);

int main()
{
	int n;
	SV sv[n];
	
	printf("\nNhap so luong sinh vien: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d", i+1);
		nhapSV(sv+i);
		printf("\n====================================\n");
	}
	
	for(int i=0; i<n; i++)
	{
		printf("\nThong tin sinh vien thu %d", i+1);
		xuatSV(sv+i, n);
		printf("\n--~~--~~--~~--~~--~~--~~--~~--~~--~~\n");
	}			
	
	return 0;
}

void nhapSV(SV *sv)
{
	
	printf("\nNhap ma so: ");
	fflush(stdin);
	scanf("%s", sv->mssv);
	
	printf("\nNhap ho ten: ");
	fflush(stdin);
	gets(sv->hoten);
	
	printf("\nNhap gioi tinh: ");
	fflush(stdin);
	scanf("%s", sv->gioitinh);
	
	printf("\nNhap noi sinh: ");
	fflush(stdin);
	gets(sv->noisinh);
	
	printf("\nNhap so mon hoc: ");
	scanf("%d", &sv->somonhoc);
	
	sv->diem = (float*)malloc(sizeof(float)*(sv->somonhoc));
	for(int i = 0; i< sv->somonhoc; i++)
	{
		printf("\nNhap diem mon %d: ", i+1);
		scanf("%f", sv->diem+i);
	}
}

void xuatSV(SV sv[], int n)
{
	int i;
	printf("\nMSSV: %s \tHo ten: %s \tGioi tinh: %s \tNoi sinh: %s", sv[i].mssv, sv[i].hoten, sv[i].gioitinh, sv[i].noisinh);
	printf("\nDiem so %d mon hoc da dang ki: ", sv[i].somonhoc);
	for(i = 0; i<sv[i].somonhoc; i++)
	{
		printf("\nDiem mon %d: %.1f ", i+1, *(sv[i].diem+i));
	}
}

