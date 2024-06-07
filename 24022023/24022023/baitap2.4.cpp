#include<stdio.h>
#include<cstring>
typedef struct CONGNHAN{
	char ms[10], hoten[30];
	int 	tuoi;
	int 	sogio;
	float luong;
}CN;

void nhap(CN *cn);
void xuat(CN cn[], int n);
void timCNTheoTen(CN cn[], int n, char tencn[]);

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
	
	char tencn[30];
	printf("\nNhap ho ten: ");
	fflush(stdin);
	gets(tencn);
	
	for(i=1; i<=n; i++)
	{
		timCNTheoTen(&cn[i], n, tencn);
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

void timCNTheoTen(CN cn[], int n, char tencn[])
{
	int i;
	if(strcmp(cn[i].hoten, tencn)==0)
	{
		xuat(&cn[i], n);
	}
}










