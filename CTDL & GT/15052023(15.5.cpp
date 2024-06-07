#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//cau truc phan tu (toan hang) gom HE SO va SO MU
typedef struct TOANHANG
{
	int c,n;  // c: he so; n: so mu
}TH;

//cau truc NODE
typedef struct node 
{
	TH info;
	node *pNext;
}NODE;

//cau truc list
typedef struct list 
{
	NODE *pHead;
	NODE *pTail;
}LIST;

NODE *khoitaonode(TH x);
void khoitaolist(LIST &l);
void addlist(LIST &l,TH x);
void nhap_list(LIST &l);
void xuat_list(LIST l);
float tinh_gia_tri(LIST l,int x);
//void xua_sau_q(LIST &l);
void rut_gon(LIST &l);

NODE *khoitaonode(TH x)
{
	NODE *p=(NODE *)malloc(sizeof(NODE));
	p->info=x;
	p->pNext=NULL;
}

int main()
{
	LIST l;
	
	khoitaolist(l);
	nhap_list(l);
	
	printf("\nDA THUC VUA NHAP : ");
	xuat_list(l);
	
	printf("\nDa thuc sau khi rut gon : ");
	rut_gon(l);
	xuat_list(l);
	
	int x;
	printf("\nNhap gia tri cua x : ");
	scanf("%d",&x);
	printf("Gia tri cua da thuc la %.2f : ",tinh_gia_tri(l,x));
	
	return 0;
}

void khoitaolist(LIST &l)
{
	l.pHead=NULL;
	l.pTail=NULL;
}

void addlist(LIST &l,TH x) //su dung trong ham: nhap_list
{
	NODE *p=khoitaonode(x);
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

void nhap_list(LIST &l)
{
    int k;
    printf("\nNhap so luong phan tu : ");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
	    	TH x;
	    	printf("\nNhap vao c%d : ",i);
	    	scanf("%d",&x.c);
	    	printf("\nNhap vao n%d : ",i);
	    	scanf("%d",&x.n);
	    	addlist(l,x);
    }
}

void xuat_list(LIST l)
{
	NODE *p=l.pHead;
	printf("\nP(x) = ");
	while(p!=NULL)
	{
		printf("%dx^%d",p->info.c,p->info.n);
		if(p->pNext!=NULL)
		{
			printf(" + ");
		}
		p=p->pNext;
	}
}

// tinh gia tri cua da thuc theo x duoc nhap
float tinh_gia_tri(LIST l, int x)
{
	float px=0;
	for(NODE *p=l.pHead;p!=NULL;p=p->pNext)
	{
		px=px+pow(x,p->info.n)*p->info.c; // x la so duoc nhap: x^n * he so(c)
	}
	return px;
	
}

void xoa_sau(LIST &l,NODE *q)
{
	NODE *p=q->pNext;
	q->pNext=p->pNext;
	
	if(p==NULL)
	{
		l.pHead=l.pTail=p;
	}
}

// ham rut gon da thuc (cong he so cung so mu)
void rut_gon(LIST &l)
{
	NODE *q1;
   	NODE *p=l.pHead;
   	while(p!=NULL)
   	{
   		q1=p;
   		while(q1->pNext!=NULL)
   		{
   			if(q1->pNext->info.n==p->info.n)
   			{
   				p->info.c=p->info.c + q1->pNext->info.c;
   				xoa_sau(l,q1);
   			}
			else
			{
   				q1=q1->pNext;
   			}
   		}
   		p=p->pNext;
   	}
}



