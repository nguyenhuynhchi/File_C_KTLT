#include<stdio.h>
#include<cstring>
typedef struct CONGNHAN
{
	char	ms[10], hoten[30];
	int tuoi;
	int sogio;
	float luong;
}CN;

void nhap(CN *cn);
void xuat(CN cn[], int n);
void xuatTheoMS(CN cn[], int n, char mscn[]);

int main()
{
	int n;
	CN cn[n];
	
	printf("\nNhap so luong cong nhan: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		printf("\nNhap thong tin cua cong nhan thu %d: ", i);
		nhap(&cn[i]);
	}
	
	for(int i=1; i<=n; i++)
	{
		printf("\nThong tin cua cong nhan thu %d: ", i);
		xuat(&cn[i], n);
		printf("\n================================\n");
	}
	
	char mscn[10];
	
	printf("\nNhap ma so cong nhan can tim: ");
	fflush(stdin);
	scanf("%s", mscn);
	
	for(int i=1; i<=n; i++)
	{
		xuatTheoMS(&cn[i], n, mscn);
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
	
	printf("\n\tNhap so gio lam: ");
	scanf("%d", &cn->sogio);
}

void xuat(CN cn[], int n)
{
	int i;
	printf("\n\tMa so: %s \tHo ten: %s \tTuoi:%d ", cn[i].ms, cn[i].hoten, cn[i].tuoi);
	printf("\n\tLuong: %.0f.VND \tGio lam: %d", cn[i].luong, cn[i].sogio);
}

void xuatTheoMS(CN cn[], int n, char mscn[])
{
	int i;
	if(strcmp(cn[i].ms, mscn)==0)
	{
		xuat(&cn[i], n);
	}
}
