#include<stdio.h>
#include<stdlib.h>
typedef struct NODE 
{
	int info;
	NODE *pLeft;
	NODE *pRight;
}NODE;
typedef NODE * TREE;
void khoitaotree(TREE &t);
void add_tree(TREE &t,int x);
void Nhap(TREE &t);
void DuyetLNR(TREE t);
void DuyetNRL(TREE t);
void DuyetRNL(TREE t);
void output(TREE t,int tab);
int Count_la(TREE t);
int Count_nut1con(TREE t);
int Count_nut2con(TREE t);
int Count_behonx(TREE t,int x);
int Count_lonhonx(TREE t,int x);
int Count_lonhonx_nhohony(TREE t,int x,int y);
int Height(TREE t);
void Prin_Search(TREE t,int x);
int main()
{
	TREE t;
	khoitaotree(t);
	Nhap(t);
	int tab=1;
	output(t,tab);
	printf("\n\nSo nut la TREE : %d ",Count_la(t));
	printf("\n\nSo nut co dung 1 TREE con : %d ",Count_nut1con(t));
	printf("\n\nSo nut co dung 2 TREE con : %d ",Count_nut2con(t));
	int x;
	int y;
	do
	{
	printf("\n\nNhap x : ");
	scanf("%d",&x);
	printf("\n\nNhap y : ");
	scanf("%d",&y);
	}while(x>=y);
	printf("\nSo nut co khoa nho hon %d : %d ",x,Count_behonx(t,x));
	printf("\nSo nut co khoa lon hon %d : %d ",x,Count_lonhonx(t,x));
	printf("\nSo nut co khoa lon hon %d nho hon %d  : %d ",x,y,Count_lonhonx_nhohony(t,x,y));
	printf("\nSoChieu cao cua cay : %d ",Height(t));
	Prin_Search(t,x);
	return 0;
}
void khoitaotree(TREE &t)
{
	t=NULL;
}
void add_tree(TREE &t,int x)
{
	if(t==NULL)
	{
	NODE *p=new NODE;
	p->info=x;
	p->pLeft=NULL;
	p->pRight=NULL;
		t=p;
	}else if(t->info>x)
	{
		add_tree(t->pLeft,x);
	}else if(t->info<x)
	{
		add_tree(t->pRight,x);
	}
}
void Nhap(TREE &t)
{
	int n;
	printf("\nNhap vao so phan tu : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int x;
		printf("\nNhap vao so nguyyen thu %d:  ",i);
		scanf("%d",&x);
		add_tree(t,x);
	}
}
void DuyetLNR(TREE t)
{
	if(t!=NULL)
	{
		DuyetLNR(t->pLeft);
		printf("%d ",t->info);
		DuyetLNR(t->pRight);
	}
}
void DuyetNRL(TREE t)
{
	if(t!=NULL)
	{
		printf("%d ",t->info);
		DuyetLNR(t->pLeft);
		DuyetLNR(t->pRight);
	}
}
void DuyetRNL(TREE t)
{
	if(t!=NULL)
	{
		DuyetLNR(t->pRight);
		printf("%d ",t->info);
		DuyetLNR(t->pLeft);
	}
}
void output(TREE t,int tab)
{
	for(int i=1;i<=tab;i++)
	{
		printf("\t");
		if(t!=NULL)
		{
			printf("%d\n",t->info);
			output(t->pLeft,tab);
			output(t->pRight,tab);
		}else{
			printf("NULL\n");
		}
	}
}
int Count_la(TREE t)
{
	if(t!=NULL)
	{
		if(t->pLeft ==NULL && t->pRight ==NULL)
		{
			return 1;
		}else{
	   		return Count_la(t->pLeft)+Count_la(t->pRight);
	   	}
	}else{
		return 0;
	}
}
int Count_nut1con(TREE t)
{
	if(t!=NULL)
	{
		if((t->pLeft !=NULL && t->pRight ==NULL) || (t->pLeft ==NULL && t->pRight !=NULL))
		{
			return 1;
		}else{
	   		return Count_nut1con(t->pLeft)+Count_nut1con(t->pRight);
	   	}
	}else{
		return 0;
	}
}
int Count_nut2con(TREE t)
{
	if(t!=NULL)
	{
		if(t->pLeft !=NULL && t->pRight != NULL)
		{
			return 1;
		}else{
	   		return Count_nut2con(t->pLeft)+Count_nut2con(t->pRight);
	 	}
	}else{
		return 0;
	}
}
int Count_behonx(TREE t,int x)
{
	if(t!=NULL)
	{
		if(t->info>x)
		{
			Count_behonx(t->pLeft,x);
		}else if(t->info<x)
		{
			return 1 + Count_behonx(t->pLeft,x)+ Count_behonx(t->pRight,x);
		}else if(t->info==x)
		{
				return Count_behonx(t->pLeft,x)+ Count_behonx(t->pRight,x);
		}
	}else{
		return 0;
	}
}
int Count_lonhonx(TREE t,int x)
{
	if(t!=NULL)
	{
		if(t->info<x)
		{
			Count_lonhonx(t->pRight,x);
		}else if(t->info>x)
		{
			return 1 + Count_lonhonx(t->pLeft,x)+ Count_lonhonx(t->pRight,x);
		}else if(t->info==x)
		{
				return Count_lonhonx(t->pLeft,x)+ Count_lonhonx(t->pRight,x);
		}
	}else{
		return 0;
	}
}
int Count_lonhonx_nhohony(TREE t,int x,int y)
{
	if(t!=NULL)
	{
		if(t->info<x)
		{
			Count_lonhonx_nhohony(t->pRight,x,y);
		}else if(t->info>x)
		{
			if(t->info<y)
			{
					return 1+ Count_lonhonx_nhohony(t->pLeft,x,y)+ Count_lonhonx_nhohony(t->pRight,x,y);
			}else if( t->info>y)
			{
				Count_lonhonx_nhohony(t->pLeft,x,y);
			}else if (t->info==y)
			{
				return Count_lonhonx_nhohony(t->pLeft,x,y)+ Count_lonhonx_nhohony(t->pRight,x,y);
			}
		}else if(t->info==x)
		{
			if(t->info<y)
			{
					return  Count_lonhonx_nhohony(t->pLeft,x,y)+ Count_lonhonx_nhohony(t->pRight,x,y);
			}else if( t->info>y)
			{
				Count_lonhonx_nhohony(t->pLeft,x,y);
			}else if (t->info==y)
			{
				return Count_lonhonx_nhohony(t->pLeft,x,y)+ Count_lonhonx_nhohony(t->pRight,x,y);
			}
		}
	}
	else{
		return 0;
	}
}
int Max(int a,int b)
{
	if(a>b)
	{
		return a;
	}else{
		return b;
	}
}
int Height(TREE t)
{
	if(t!=NULL)
	{
		return 1+Max(Height(t->pLeft) ,Height(t->pRight));
	}else{
		return 0;
	}
}
void Prin_Search(TREE t,int x)
{
	if(t!=NULL)
	{
		printf("\t%d",t->info);
	}else if(t->info==x)
	{
		return ;
	}else if(t->info>x){
		Prin_Search(t->pLeft,x);
	}else if(t->info<x)
	{
		Prin_Search(t->pRight,x);
	}
}
