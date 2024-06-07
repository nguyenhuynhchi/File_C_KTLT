#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct PHANTU
{
	int a, n;  // a la he so, n la so mu
}DT;

//cau truc 1 cai node
struct NODE
{
	DT Info;
	NODE*  pNext;
};

typedef struct list
{
	NODE* pHead;
	NODE* pTail;
}LIST;

NODE *khoiTaoNODE(DT x);
void khoiTao(LIST &l);
void nhapDT(LIST &a);
void addTail(LIST &l, DT x);
void xuatDT(LIST l);
float tinhDT(LIST l, int x);

int main()
{
	LIST A;
	
	khoiTao(A);
	nhapDT(A);
	
	printf("\nBIEU DIEN DA THUC\n");
	xuatDT(A);
	
	int x;
	printf("\nNhap gia tri x: ");
	scanf("%d", &x);
	printf("\nGia tri cua DA THUC theo x la: %.2f", tinhDT(A, x));
	return 0;
}

NODE *khoiTaoNODE(DT x)
{
	NODE *p = (NODE*)malloc(sizeof(NODE));
	p->Info = x;
	p->pNext = NULL;
}

void khoiTao(LIST &l)
{
	l.pHead=NULL;
	l.pTail=NULL;
}

void nhapDT(LIST &l)
{
	int k;
	printf("\nNhap so luong phan tu: ");
	scanf("%d", &k);
	for(int i=1; i<=k; i++)
	{
		DT x;
		printf("\n~~~Phan tu 1~~~");
		printf("\nNhap he so A%d: ", i);
		scanf("%d", &x.a);
		printf("\nNhap so mu n%d: ", i);
		scanf("%d", &x.n);
		addTail(l, x);
	}
}

void addTail(LIST &l, DT x)
{
	NODE *p=khoiTaoNODE(x);
	if(l.pHead==NULL)
	{
		l.pHead=l.pTail=p;
	}
	else
	{
		l.pTail->pNext=p;
		l.pTail = p;
	}
}

void xuatDT(LIST l)
{
	NODE *p=l.pHead;
	printf("\nP(x): ");
	while(p!=NULL)
	{
		printf("%dx^%d ", p->Info.a, p->Info.n);	
		if(p->pNext!=NULL)
		{
			printf("+ ");
		}	
		p=p->pNext;
	}
}

float tinhDT(LIST l, int x)
{
	float px=0;
	for(NODE *p=l.pHead; p!=NULL; p=p->pNext)
	{
		px=px+pow(x, p->Info.n)*p->Info.a;
	}
	return px;
}





