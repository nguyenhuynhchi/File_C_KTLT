#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct SINHVIEN
{
	char mssv[10], ht[30];
	float dtb;
}SV;

//cau truc 1 cai node
typedef struct node
{
	SV Info;
	struct node *pNext;
}NODE;

//cau truc list
typedef struct list
{
	NODE *pHead;
	NODE *pTail;
}LIST;
//

NODE *iniliationNODE(SV x)
{
	NODE *p = (NODE*)malloc(sizeof(NODE));
	p->Info = x;
	p->pNext = NULL;
}
void iniliationlist(LIST &l);
void importsv(LIST &l);
void Addfisrt(LIST &l, NODE *p);
void exportsv(LIST l);
SV RemoveHead(LIST &l);
NODE *Search(LIST l);
int count_mssv(LIST &l, float x);
//HAM CHINH
int main()
{
	LIST l;
	float x;
	iniliationlist(l);
	importsv(l);
	exportsv(l);
	RemoveHead(l);
	exportsv(l);
	NODE *p=Search(l);
	printf("\n\nNhap diem trung binh can dem: ");
	scanf("%f",&x);
	printf("\nSo sinh vien co diem trung binh %.1f la %d",x,count_mssv(l,x));
	return 0;
}
void iniliationlist(LIST &l)
{
	l.pHead=NULL;
	l.pTail=NULL;
}
//Ham nhap sinh vien
void importsv(LIST &l)
{
	int n;
	printf("\nNhap so luong sinh vien: ");
	scanf("%d",&n);
	SV a;
	for(int i=1; i<=n; i++)
	{
		printf("\nNhap ma so sinh vien: ");
		fflush(stdin);
		scanf("%S",a.mssv);
		printf("\nNhap ho ten sinh vien: ");
		fflush(stdin);
		gets(a.ht);
		printf("\nNhap diem trung binh: ");
		scanf("%f",&a.dtb);
		NODE *p = iniliationNODE(a);
		Addfisrt(l,p);
	}
}
//them vao dau
void Addfisrt(LIST &l, NODE *p)
{
	if(l.pHead==NULL)
	{
		l.pHead=l.pTail=p;
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
//Ham xuat danh sach sinh vien
void exportsv(LIST l)
{
	printf("\n---DANH SACH SINH VIEN---\n");
	for(NODE *p=l.pHead; p!=NULL; p=p->pNext)
	{
		printf("\n%s\t%s\t%.1f",p->Info.mssv,p->Info.ht,p->Info.dtb);
	}
}
//Ham huy 1 phan tu
SV RemoveHead(LIST &l)
{
	NODE *p;
	SV a;
	if(l.pHead!=NULL)
	{
		p=l.pHead; a=p->Info;
		l.pHead = l.pHead->pNext;
		delete p;
		if(l.pHead == NULL)
		l.pTail=NULL;
	}
}
//Ham tim sinh vien theo ma so
NODE *Search(LIST l)
{
	int flag=0;
	char x[10];
	printf("\nNhap ma so sinh vien can tim: ");
	fflush(stdin);
	scanf("%s",x);
	NODE *p;
	for(p=l.pHead; p!=NULL; p=p->pNext)
	{
		if(strcmp(p->Info.mssv,x)==0)
		{
			printf("\n%s\t%s\t%.1f",p->Info.mssv,p->Info.ht,p->Info.dtb);
			flag = 1;
		}
	}
	if(flag==0)
	{
		printf("khong tim thay sinh vien co ma so %s",x);
	}
}
//Ham dem sinh vien theo ma so
int count_mssv(LIST &l, float x)
{
	int count;
	for(NODE *p=l.pHead; p!=NULL; p=p->pNext)
	{
		if(p->Info.dtb==x)
		{
			count++;
		}
	}
	return count;
}
