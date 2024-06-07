#include <stdio.h>
#define M 100
#define TRUE 1
#define FALSE -1
struct nodes
{
	int key;
	nodes *next;
};
//khai bao kieu con tro chi nut
typedef struct nodes *NODEPTR;

//khai bao mang bucket chua M con tro dau cua Mbucket

NODEPTR bucket[M];

int hashfunc (int key)
{
	return (key % M);
}

void initbuckets( )
{
	int b;	
	for (b=0;b<M;b++)
	bucket[b]=NULL;
}

int emptybucket (int b)
{
	return(bucket[b] ==NULL?TRUE:FALSE);
}

int empty( )
{
	int b;	
	for (b = 0;b<M;b++)	
	if(bucket[b] !=NULL) return(FALSE);	
	return(TRUE);
}

void insert(int k)
{
	NODEPTR p;
	int b;
	b= hashfunc(k);
	p=getnode();
	p->key=k;
	p->next=bucket[b];
	bucket[b]=p;
}

void remove ( int k)
{
	int b;
	NODEPTR q, p;
	b = hashfunc(k);
	p = bucket(b);
	q=p;
	while(p!=NULL && p->key !=k)
	{
	q=p;
	p=p->next;
	}
	if (p == NULL)
	printf("\n khong co nut co khoa %d",k);
	else
	if (p == bucket [b]) removehead(q);
	else
	removeafter(q);
}

void clearbucket (int b)
{
	Node * p,* q;
	//q la nut truoc,p la nut sau
	q = NULL;
	p = bucket[b];
	while(p !=NULL)	
	{
	q = p;
	p=p->next;
	freenode(q);
	}
	bucket[b] = NULL; //khoi dong lai butket b
}

void clear( )
{
	int b;
	for (b = 0; b<M ; b++)
	clearbucket(b);
}

void traversebucket (int b)
{
	NODEPTR p;
	p= bucket[b];
	while (p !=NULL)
	{
	printf("%3d", p->key);
	p= p->next;
	}
}

void traverse( )
{
	int b;
	for (b = 0;n<M; b++)
	{
	printf("\n Butket %d:",b);
	traversebucket(b);
	}
}

NODEPTR search(int k)
{
	NODEPTR p;
	int b;
	b = hashfunc (k);
	p = bucket[b];
	
	while(k != p->key && p !=NULL)
		p=p->next;
		
	if (p == NULL) // khong tim thay
		return(NULL);
		
	else //tim thay
		return(p);
}



