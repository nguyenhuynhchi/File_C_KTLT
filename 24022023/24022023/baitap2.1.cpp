#include<stdio.h>
typedef struct CONGNHAN{
	char ms[10], hoten[30];
	int 	tuoi;
	int 	luong, sogio;
}CN;

void nhap(CN *cn);
void xuat(CN cn);

int main()
{
	CN cn;
	printf("\nNhap thong tin cua cong nhan: ");
	nhap(&cn);
	
	printf("\nThong tin cua cong nhan: ");
	xuat(cn);
	
	return 0;
}

void nhap(CN *cn)
{
	printf("\n\tNhap ma so: ");
	fflush(stdin);
	scanf("%s", cn->ms);
	
	printf("\n\tNhap ho ten: ");
	fflush(stdin);
	gets(cn->hoten);
	
	do
	{
		printf("\n\tNhap tuoi (tuoi>18): ");
		scanf("%d", &cn->tuoi);
	}while(cn->tuoi<18);
	
	printf("\n\tNhap luong: ");
	scanf("%d", &cn->luong);
	
	printf("\n\tNhap so gio: ");
	scanf("%d", &cn->sogio);
}

void xuat(CN cn)
{
	printf("\nMa so: %s\tHo ten: %s\tTuoi:%d ", cn.ms, cn.hoten, cn.tuoi);
	printf("\nLuong: %dVND\tSo gio lam: %d", cn.luong, cn.sogio);
}













