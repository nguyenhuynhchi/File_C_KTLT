#include <stdio.h>
#include <stdlib.h>

typedef struct DATHUC
{
	int a, n;  // a-he so ; n-so mu
}DT;

typedef struct NODE
{
	DT info;
	NODE *pNEXT;
}node;

struct list
{
	node* pHEAD;
	node* pTAIL;
};

node *khoiTaoNode(DT x);
void khoiTaoList(list &l);
void nhapDT(list &l, int k);
void xuatDT(list l);

int main()
{
	int k;
	list l;
	khoiTaoList(l);
	
	printf("\nNhap so luong phan tu cua DA THUC P(x): ");
	scanf("%d", &k);
	nhapDT(l, k);
	
	printf("\nDA THUC vua nhap:");
	printf("\nP(x)= ");
	xuatDT(l);
	
	return 0;
}

node *khoiTaoNode(DT x)
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
void addTailList(list &l, DT x)
{
	node *p=khoiTaoNode(x);
	if(l.pHEAD==NULL)
	{
		l.pHEAD=l.pTAIL=p;
	}
	else 
	{
		l.pTAIL->pNEXT=p;
		l.pTAIL=p;	
	}
}

void nhapDT(list &l, int k)
{
	DT x;
	for(int i=1; i<=k; i++)
	{
		printf("\n~~Nhap phan tu %d~~", i);
		printf("\nHe so A%d: ", i);
		scanf("%d", &x.a);
		printf("\nSo mu n%d: ", i);
		scanf("%d", &x.n);
		addTailList(l, x);
	}
}

void xuatDT(list l)
{
	node *p=l.pHEAD;
	while(p!=NULL)
	{
		printf("%dx^%d", p->info.a, p->info.n);
		if(p->pNEXT!=NULL)
		{
			printf(" + ");
		}
		p=p->pNEXT;
	}
}






