#include<stdio.h>
typedef struct HOCPHAN
{
	char mshp[10], thp[50]; 		//mshp: ma so hoc phan    	thp: ten hoc phan
	int lth, thh;            	//lth:  so tin chi ly thuyet	thh: so tin chi thuc hanh
	int hk, ttr;				//hk:   hoc ki to chuc hp		ttr: tinh trang tai lieu giang day hp
}HP;

void nhap(HP *hp);
void xuat(HP hp[], int n);
void hpMax(HP hp[], int n);
void hpMin(HP hp[], int n);
void hpCoTaiLieuGiangDay(HP hp[], int n);
void timHocPhanHKX(HP hp[], int n, int x);

int main()
{
	int n;
	HP a[n];
	do
	{
		printf("\nNhap so hoc phan(0 < n < 30): ");
		scanf("%d", &n);
	}while(n>=30||n<=0);
	
	for(int i=1; i<=n; i++)
	{
		printf("\nNhap thong tin hoc phan thu %d:", i);
		nhap(&a[i]);
		printf("\n----------------------------------\n");
	}
	
	for(int i=1; i<=n; i++)
	{
		printf("\nThong tin hoc phan thu %d:", i);
		xuat(&a[i], n);
		printf("\n==================================\n");
	}
	
	printf("\nHoc phan co so tin chi cao nhat:");
	hpMax(a, n);
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	printf("\nHoc phan co so tin chi thap nhat:");
	hpMin(a, n);
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	printf("\nHoc phan co tai lieu giang day:");
	hpCoTaiLieuGiangDay(a, n);
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int x;
	printf("\nNhap hoc ki: ");
	scanf("%d", &x);
	
	printf("\nHoc phan duoc to chuc o hoc ki %d la:", x);
	printf("\n");
	timHocPhanHKX(a, n, x);
	
	return 0;
}

void nhap(HP *hp)
{
	printf("\n  Nhap ma hoc phan:");
	fflush(stdin);
	scanf("%s", &hp->mshp);
	
	printf("\n  Nhap ten hoc phan:");
	fflush(stdin);
	gets(hp->thp);
	
	printf("\n  So tin chi ly thuyet:");
	scanf("%d", &hp->lth);
	
	printf("\n  So tin chi thuc hanh:");
	scanf("%d", &hp->thh);
	
	do
	{
		printf("\n  Nhap tinh trang hoc phan(co-1, khong-0):");
		scanf("%d", &hp->ttr);
	}while((hp->ttr)>1||(hp->ttr)<0);
	
	do
	{
		printf("\n  Nhap hoc ki to chuc hoc phan(co 8 hoc ki): ");
		scanf("%d", &hp->hk);
	}while(hp->hk>8||hp->hk<=0);
}

void xuat(HP hp[], int n)
{
	int i;
	printf("\nMa so hoc phan: %s\t\t\tTen hoc phan: %s", hp[i].mshp, hp[i].thp);
	printf("\nSo tin chi ly thuyet: %d   \t\tSo tin chi thuc hanh: %d", hp[i].lth, hp[i].thh);
	if((hp->ttr)==1)
	{
		printf("\nTinh trang tai lieu giang day: co\tHoc ki to chuc hoc phan: %d", hp[i].hk);
	}
	else
	{
		printf("\nTinh trang tai lieu giang day: khong\tHoc ki to chuc hoc phan: %d", hp[i].hk);
	}
}

void hpMax(HP hp[], int n)
{
	int i, max;
	max=hp[1].lth+hp[1].thh; //tin chi ly thuyet + tin chi thuc hanh
	
	for(i=1; i<=n; i++)
	{
		if(max<hp[i].lth+hp[i].thh)
		{
			max=hp[i].lth+hp[i].thh;
		}
	}
	
	for(i=1; i<=n; i++)
	{
		if(max==hp[i].lth+hp[i].thh)
		{
			printf("\nMa so hoc phan: %s\t\t\tTen hoc phan: %s", hp[i].mshp, hp[i].thp);
			printf("\nSo tin chi ly thuyet: %d   \t\tSo tin chi thuc hanh: %d", hp[i].lth, hp[i].thh);
			if((hp[i].ttr)==1)
			{
				printf("\nTinh trang tai lieu giang day: co\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
			else
			{
				printf("\nTinh trang tai lieu giang day: khong\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
		}
	}
}

void hpMin(HP hp[], int n)
{
	int i, min;
	min=hp[1].lth+hp[1].thh; //tin chi ly thuyet + tin chi thuc hanh
	
	for(i=1; i<=n; i++)
	{
		if(min>hp[i].lth+hp[i].thh)
		{
			min=hp[i].lth+hp[i].thh;
		}
	}
	
	for(i=1; i<=n; i++)
	{
		if(min==hp[i].lth+hp[i].thh)
		{
			printf("\nMa so hoc phan: %s\t\t\tTen hoc phan: %s", hp[i].mshp, hp[i].thp);
			printf("\nSo tin chi ly thuyet: %d   \t\tSo tin chi thuc hanh: %d", hp[i].lth, hp[i].thh);
			if((hp[i].ttr)==1)
			{
				printf("\nTinh trang tai lieu giang day: co\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
			else
			{
				printf("\nTinh trang tai lieu giang day: khong\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
		}
	}
}

void hpCoTaiLieuGiangDay(HP hp[], int n)
{
	for(int i=1; i<=n; i++)
	{
		if((hp[i].ttr)==1)
		{
			printf("\nMa so hoc phan: %s\t\t\tTen hoc phan: %s", hp[i].mshp, hp[i].thp);
			printf("\nSo tin chi ly thuyet: %d   \t\tSo tin chi thuc hanh: %d", hp[i].lth, hp[i].thh);
			if((hp[i].ttr)==1)
			{
				printf("\nTinh trang tai lieu giang day: co\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
			else
			{
				printf("\nTinh trang tai lieu giang day: khong\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
			printf("\n");
		}
	}
}

void timHocPhanHKX(HP hp[], int n, int x)
{
	for(int i=1; i<=n; i++)
	{
		if((hp[i].hk)==x)
		{
			printf("\nMa so hoc phan: %s\t\t\tTen hoc phan: %s", hp[i].mshp, hp[i].thp);
			printf("\nSo tin chi ly thuyet: %d   \t\tSo tin chi thuc hanh: %d", hp[i].lth, hp[i].thh);
			if((hp[i].ttr)==1)
			{
				printf("\nTinh trang tai lieu giang day: co\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
			else
			{
				printf("\nTinh trang tai lieu giang day: khong\tHoc ki to chuc hoc phan: %d", hp[i].hk);
			}
			printf("\n");	
		}
	}
}







