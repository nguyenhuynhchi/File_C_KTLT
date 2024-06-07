#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct THIETBI
{
	char ms[10], ten[30], nsx[30];
	float gia;
}TB;

//cau truc 1 cai node
typedef struct node
{
	TB Info;
	node *pNext;
}node;

//cau truc list
typedef struct list
{
	node *pHead;
	node *pTail;
}list;

node *KhoiTaoNODE(TB x);
void KhoiTaoList(list &l);
void AddHeadList(list &l, TB tb);
void NhapTT(list &l, int n);
void XuatTT(list l);
int Dem(list l);


node *KhoiTaoNODE(TB x)
{
	node *p = (node*)malloc(sizeof(node));
	p->Info = x;
	p->pNext = NULL;
}

void KhoiTaoList(list &l)
{
	l.pHead=NULL;
	l.pTail=NULL;
}

void AddTailList(list &l, TB tb)
{
	node *p=KhoiTaoNODE(tb);
	if(l.pHead==NULL)
	{
		l.pHead=l.pTail=p;
	}
	else
	{
		l.pTail->pNext=p;
		l.pTail=p;
	}
}

void NhapTT(list &l, int n)
{
	for(int i=1; i<=n; i++)
	{
		TB tb;
		
		printf("\nNhap thong tin thiet bi thu %d: \n", i);
		
		printf("\n\tMa so: ");
		fflush(stdin);
		scanf("%s", tb.ms);
		
		printf("\n\tTen: ");
		fflush(stdin);
		gets(tb.ten);
		
		printf("\n\tNha san xuat: ");
		fflush(stdin);
		gets(tb.nsx);
		
		printf("\n\tDon gia: ");
		scanf("%f", &tb.gia);
		
		AddTailList(l, tb);
	}
}

void XuatTT(list l)
{
	node *p=l.pHead;
	printf("\n%-10s%-30s%-30s%-10s", "Ma so", "Ten", "NSX", "Don gia(VND)");
	while(p!=NULL)
	{
		printf("\n%-10s%-30s%-30s%-10.3f", p->Info.ms, p->Info.ten, p->Info.nsx, p->Info.gia);
		p=p->pNext;
	}
}

int Dem(list l)
{
	int count=0;
	node *p;
	char SS[]="SAMSUNG", ss[]="samsung";
	for(p=l.pHead; p!=NULL; p=p->pNext)
	{
		if(strcmp(p->Info.nsx, ss)==0||strcmp(p->Info.nsx, SS)==0)
		{
			printf("\n%-10s%-30s%-30s%-10.3f", p->Info.ms, p->Info.ten, p->Info.nsx, p->Info.gia);
			count++;
		}
	}
	
	return count;
}

int GiamGia(list l)
{
	int count=0;
	node *p;
	char SS[]="SHARP", ss[]="sharp";
	for(p=l.pHead; p!=NULL; p=p->pNext)
	{
		if(strcmp(p->Info.nsx, ss)==0||strcmp(p->Info.nsx, SS)==0)
		{
			p->Info.gia=p->Info.gia-(p->Info.gia * 20/100);
			printf("\n%-10s%-30s%-30s%-10.3f", p->Info.ms, p->Info.ten, p->Info.nsx, p->Info.gia);
			count++;
		}
	}
	if(count=0)
	{
		printf("\nKhong co thiet bi cua NSX SHARP de giam gia");
	}
	
	return count;
}

int main()
{
	list l;
	KhoiTaoList(l);
	
	int n;
	printf("\nNhap so luong thiet bi: ");
	scanf("%d", &n);
	
	printf("\n-------Nhap thong tin cac thiet bi------- ");
	NhapTT(l, n);
	
	printf("\n~-~-~-~-DANH SACH THIET BI-~-~-~-~");
	XuatTT(l);
	
	if(Dem(l)==0)
	{
		printf("\nKhong tim thay thiet bi nao cua NSX SAMSUNG\n");
	}
	else
	{
		printf("\nSo luong thiet bi cua NSX SAMSUNG la: %d", Dem(l));
	}
	
	printf("\nCac thiet bi cua nha san xuat SHARP duoc giam 20\%: ");
	GiamGia(l);
	return 0;
	
}
