#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct THONGTIN
{
	char maso[10], cpu[10];
	int dlbn, dldc;
}TT;

struct node
{
	TT info;
	node *pPRE;
	node *pNEXT;
};

struct list
{
	node *pHEAD;
	node *pTAIL;
};

node *khoiTaoNode(TT x);
void khoiTaoList(list &l);
void addHeadList(list &l, TT x);
void nhapTT(list &l, int k);
void  xuatTT(list l);
void xuatCorei5(list l);
int tongDLDC(list l);
float trungBinhDLBNCorei7(list l);

node *khoiTaoNode(TT x)
{
	node *p=(node*)malloc(sizeof(node));
	p->info=x;
	p->pNEXT=NULL;
}

void khoiTaoList(list &l)
{
	l.pHEAD=NULL;
	l.pTAIL=NULL;
}

int main()
{
	list l;
	
	khoiTaoList(l);
	
	int k;
	printf("\nNhap so luong may tinh: ");
	scanf("%d", &k);
	nhapTT(l, k);
	xuatTT(l);	
	
	printf("\n\n~~~~~Cac may tinh co loai CPU Core i5: ~~~~~");
	xuatCorei5(l);
	
	printf("\n\nTong dung luong dia cung co dung luong bo nho nho hon 8 la: %d", tongDLDC(l));
	
	printf("\n\nTong trung binh dung luong bo nho cua loai may CPU core i7 la: %.2f", trungBinhDLBNCorei7(l));
	
	return 0;
}

void addHeadList(list &l, TT x)
{
	node *p=khoiTaoNode(x);
	if(l.pHEAD==NULL)
	{
		l.pHEAD=p;
		l.pTAIL=l.pHEAD;
	}
	else
	{
		p->pNEXT=l.pHEAD;
		l.pHEAD->pPRE=p;
		l.pHEAD=p;
	}
}

void nhapTT(list &l, int k)
{
	for(int i=1; i<=k; i++)
	{
		TT x;
		printf("\n~~ Nhap thong tin may tinh thu %d ~~ ", i);
		
		printf("\n\tNhap ma so may tinh: ");
		fflush(stdin);
		scanf("%s", &x.maso);
		
		printf("\n\tNhap loai CPU: ");
		fflush(stdin);
		gets(x.cpu);
		
		printf("\n\tNhap dung luong bo nho: ");
		scanf("%d", &x.dlbn);
		printf("\n\tNhap dung luong dia cung: ");
		scanf("%d", &x.dldc);
		addHeadList(l, x);
	}
}

void  xuatTT(list l)
{
	node *p=l.pHEAD;
	printf("\n%-10s %-10s %-10s %-10s", "MA SO", "CPU", "BO NHO(GB)", "DIA CUNG(GB)");
	while(p!=NULL)
	{
		printf("\n%-10s %-10s %-10d %-10d", p->info.maso, p->info.cpu, p->info.dlbn, p->info.dldc);
		p=p->pNEXT;
	}
}

void xuatCorei5(list l)
{
	node *p=l.pHEAD;
	char cpu[]="core i5";
	int m=0;
	while(p!=NULL)
	{
		if(strcmp(cpu, p->info.cpu)==0)
		{
			printf("\n%-10s %-10s %-10d %-10d", p->info.maso, p->info.cpu, p->info.dlbn, p->info.dldc);
			m++;
		}
		p=p->pNEXT;
	}
	if(m==0)
	{
		printf("\nKHONG CO may tinh co loai CPU Core i5");
	}
}

int tongDLDC(list l)
{
	node *p=l.pHEAD;
	int sumDLDC=0;
	while(p!=NULL)
	{
		if(p->info.dlbn<8)
		{
			sumDLDC+=p->info.dldc;
		}
		p=p->pNEXT;
	}
	return sumDLDC;
}

float trungBinhDLBNCorei7(list l)
{
	node *p=l.pHEAD;
	int tbDLBN=0, sumDLBN=0;
	int ni7=0;
	char cpui7[]="core i7";
	while(p!=NULL)
	{
		if(strcmp(cpui7, p->info.cpu)==0)
		{
			sumDLBN+=p->info.dlbn;	
			ni7++;
		}
		p=p->pNEXT;
	}
	return (sumDLBN/ni7);
}







