#include<stdio.h>
#include<stdlib.h>
typedef struct SINHVIEN
{
	char mssv[10], hoten[30], gioitinh[4];
	int namsinh, somonhoc;
	float*diem;
}SV;

void nhap(SV *sv);
void xuat(SV sv);

int main()
{
	int n, i=0;
	SINHVIEN a;
	
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
	for(i=1; i<=n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d:", i);
		nhap(&a);
		printf("\n_Thong tin sinh vien thu %d", i);
		xuat(a);
		printf("\n");
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
	
	
	printf("\nNhap gioi tinh: ");
	fflush(stdin);
	scanf("%s", sv->gioitinh);
	
	printf("\nNhap nam sinh: ");
	scanf("%d", &sv->namsinh);
	
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


void xuat(SV sv)
{
	printf("\n\tMSSV: %s\n\tHo ten: %s\n\tGioi tinh: %s\n\tNam sinh: %d", sv.mssv, sv.hoten, sv.gioitinh, sv.namsinh);
	printf("\n\tDiem so cac mon hoc: ");
	int i = 0;
	while(i<sv.somonhoc)
	{
		printf("%5.1f", *(sv.diem+i));
		i++;
	}
}

int namsinh10(SV sv)
{
	if(sv.namsinh>2000)
	{
		return 1;
	}
	return 0; 
}





































































































