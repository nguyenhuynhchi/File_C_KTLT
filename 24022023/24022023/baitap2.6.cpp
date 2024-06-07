#include<stdio.h>
typedef struct CONGNHAN{
	char 	ms[10], hoten[30];
	int 	tuoi;
	int 	sogio;
	float luong;
}CN;

void nhap(CN *cn);
void xuat(CN cn[], int n);
void tienThuong(CN cn[], int n);

int main()
{
	int n, i;
	CN cn[n];
	
	printf("\nNhap so luong cong nhan: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("\nNhap thong tin cua cong nhan thu %d: ", i);
		nhap(&cn[i]);
	}
	
	for(i=1; i<=n; i++)
	{
		printf("\nThong tin cua cong nhan thu %d: ", i);
		xuat(&cn[i], n);
		printf("\n================================\n");
	}
	
	printf("\nTien thuong cho cac cong nhan:\n");
	for(i=1; i<=n; i++)
	{
		tienThuong(&cn[i], n);
	}
	
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
	
	printf("\n\tNhap tuoi: ");
	scanf("%d", &cn->tuoi);
	
	printf("\n\tNhap luong: ");
	scanf("%f", &cn->luong);
	
	printf("\n\tNhap so gio: ");
	scanf("%d", &cn->sogio);
}

void xuat(CN cn[], int n)
{
	int i;
	printf("\n\tMa so: %s\tHo ten: %s\tTuoi:%d ", cn[i].ms, cn[i].hoten, cn[i].tuoi);
	printf("\n\tLuong: %.0f.VND\tGio lam: %d", cn[i].luong, cn[i].sogio);
}

void tienThuong(CN cn[], int n)
{
	int i;
	float thuong;
	if(cn[i].sogio>=200)
	{
		thuong=cn[i].luong*0.2;
		cn[i].luong+=thuong;
		printf("\n-Cong nhan %s(ms:%s) co hon 200 gio lam nen duoc thuong: %.0f \nTong luong: %.0f", cn[i].hoten, cn[i].ms, thuong, cn[i].luong);
	}
	else if(cn[i].sogio>=100&&cn[i].sogio<200)
	{
		thuong=cn[i].luong*0.1;
		cn[i].luong+=thuong;
		printf("\n-Cong nhan %s(ms:%s) co hon 100 gio lam nen duoc thuong: %.0f \nTong luong: %.0f", cn[i].hoten, cn[i].ms, thuong, cn[i].luong);
	}
	else
	{
		printf("\nCong nhan %s(ms:%s) qua luoi bieng nen khong duoc thuong", cn[i].hoten, cn[i].ms);
	}
	printf("\n======\n");
}













