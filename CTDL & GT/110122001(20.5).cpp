#include <stdio.h>
#include <stdlib.h>

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
	printf("%-10s %-10s %-10s %-10s", "MA SO", "CPU", "BO NHO(GB)", "DIA CUNG(GB)");
	while(p!=NULL)
	{
		printf("\n%-10s %-10s %-10d %-10d", p->info.maso, p->info.cpu, p->info.dlbn, p->info.dldc);
		p=p->pNEXT;
	}
}

/*
//chen  dau danh sach
node *InsertHead(list &l, TT x)
{
	node *p=khoiTaoNode(x);
	if(p==NULL)
	{
		return NULL;
	}
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
	return  p;
}

//them cuoi
void addTail(list &l, node *p)
{
	if(l.pHEAD==NULL)
	{
		l.pHEAD=p;
		l.pTAIL=l.pHEAD;
	}
	else
	{
		l.pTAIL->pNEXT=p;
		p->pPRE=l.pTAIL;
		l.pTAIL=p;
	}
}

//chen cuoi danh sach
node *InsertTail(list &l, TT x)
{
	node *p=khoiTaoNode(x);
	if(l.pHEAD==NULL)
	{
		return NULL;
	}
	if(l.pHEAD==NULL)
	{
		l.pHEAD=p;
		l.pTAIL=l.pHEAD;
	}
	else
	{
		l.pTAIL->pNEXT=p;
		p->pPRE=l.pTAIL;
		l.pTAIL=p;
	}
	return p;
}


//them sau
void AddAfter(list &l, node *q, node *p)
{
	node *p=q->pNEXT;
	if(q!=NULL)
	{
		p->pNEXT=p;
		p->pPRE=q;
		q->pNEXT=p;
		if(p!=NULL)
		{
			p->pPRE=p;
		}
		if(q==l.pTAIL)
		{
			l.pTAIL=p;
		}
	}
	else
	{
		addHeadList(l,x);
	}
}
*/







