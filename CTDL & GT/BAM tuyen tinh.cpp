#include<stdio.h>
#include<string.h>
#define NULLKEY -1
#define M 7
//khai bao cau truc mot nut cua bang bam

struct node
{
	int key; //khoa cua nut tren bang bam
	char hoten[30];
};

//Khai bao bang bam co M nut
struct node hashtable[M];

int NODEPTR;
int N;
int hashfunc(int key);
void KhoiTaoKey( );
int empty( );
int full( );
int insert(int k);
void nhap(node a[],int n);
void xuat(node a[],int n);

int hashfunc(int key)
{
	return(key% M);
}

void KhoiTaoKey( )
{
	int i;
	for(i=0;i<M;i++)
	hashtable[i].key=NULLKEY;
	N=0;
	//so nut hien co khoi dong bang 0
}

int empty( )
{
	return(N==0 ? 1:-1);
}

int full( )
{
	return (N==M-1 ? 1: -1);
}

int search(int k)
{
	int i;
	i=hashfunc(k);
	
	while(hashtable[i].key!=k && hashtable[i].key !=NULLKEY)
	{
	//bam lai (theo phuong phap do tuyen tinh:fi(key)=f(key)+) % M
		i=i+1;
		if(i>=M)
		i=i-M;
	}
	
	if(hashtable[i].key==k) //tim thay
		return(i);
	
	else	//khong tim thay
		return(M);
}
int insert(node k)
{
	int i, j;
	if(full()==1)
	{
		printf("\n Bang bam bi day khong them nut co khoa %d duoc",k);
		return-1;
	}
	if (search (k.key) < M)
	{
		printf ("Da co khoa nay trong bang bam") ;
		return (M) ;
	}
	i=hashfunc(k.key);
	while(hashtable[i].key !=NULLKEY)
	{
//Bam lai (theo phuong phap do tuyen tinh)
		i ++;
		if(i >=M) i= i-M;
	}
	hashtable[i].key=k.key;
	strcpy(hashtable[i].hoten,k.hoten);
	N=N+1;	
	return(i);
}
void nhap(node a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap khoa node thu %d:",i+1);
		scanf("%d",&a[i].key);
		printf("Nhap ho ten node thu %d:",i+1);
		fflush(stdin);
		gets(a[i].hoten);
	}
}
void xuat(node a[],int n)
{
	int i;
	printf("\nVi tri:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",i);
	}
	printf("\nKhoa:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i].key);
	}
	printf("\nHo ten:");
	for(i=0;i<n;i++)
	{
		printf("\t%s",a[i].hoten);
	}
}
int main()
{
	node a[M-1];
	int n=M-1;
	nhap(a,n);
	xuat(a,n);
	KhoiTaoKey( );
	printf("\nbang bam da khoi tao:");
	xuat(hashtable,M);
	for(int i=0;i<n;i++)
	{
		insert(a[i]);	
	}	
	xuat(hashtable,M);
	return 0;
}
