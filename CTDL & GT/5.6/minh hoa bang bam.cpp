#include "stdio.h"
#include "conio.h"
#include "ctype.h"
#include "string.h"
#define M 26
typedef struct tudien
{
char tu[10];
char nghia[100];
}tudien;
typedef struct node
{
	tudien data;
	node *link;
}node;
node butket[M];
void khoitao(node b[])
{
	for(int i=0;i<M;i++)
	{
		b[i].link=NULL;
	}
}
int hambam(char tu[])
{
	char ch;
	ch=toupper(tu[0]); //ham doi thanh chu In hoa
	return (ch-65)%M; //65 la ma ASCII cua chu A
}
void themtu(node b[], tudien x)
{
	int i;
	node *p;
	i = hambam(x.tu);
	p = new(node);
	p->data = x;
	p->link = b[i].link;
	b[i].link = p;
}
node *tratu(node b[], char tu[])
{
	int i;
	int tim=0;
	node *p;
	i = hambam(tu);
	p = b[i].link;
	while(p!=NULL && !tim)
	{
		if(strcmp(p->data.tu,tu)==0)
		tim = 1;
		else
		p = p->link;
	}
	if(tim==1)
		return p;
	else
		return NULL;
}
int kiemtra(node b[], char tu[])
{
	int i;
	int tim=0;
	node *p;
	i = hambam(tu);
	p = b[i].link;
	while(p!=NULL && !tim)
	{
		if(strcmp(p->data.tu,tu)==0)
			tim = 1;
		else
			p = p->link;
	}
	if(tim==1)
		return 1;
	else
		return 0;
}
void intudien(node b[])
{
	int i;
	node *p;
	for(i=0;i<M;i++)
	{
		p=b[i].link;
		printf("\nDanh muc tu %c : ",i+65);
		while(p!=NULL)
		{
			printf("\nTu : %s, Nghia : %s",p->data.tu, p->data.nghia);
			p = p->link;
		}
	}
}
void xoatu(node b[],char tu[])
{
	int i;
	node *p, *q;
	i=hambam(tu);
	p=b[i].link;
	while(p!=NULL && strcmp(p->data.tu,tu)!=0)
	{
		q = p;
		p=p->link;
	}
	if(p==NULL)
		printf("\nTu nay khong co trong tu dien!!");
	else
	{
		if(p==b[i].link)
		{
			b[i].link = p->link;
			delete(p);
		}
		else
		{
			q->link = p->link;
			delete(p);
		}
		printf("\nXoa thanh cong!!");
	}
}
	
void ghifile(node b[], char *filename)
{
	FILE *f;
	int i;
	node *p;
	f=fopen(filename,"wb");
	for(i=0;i<M;i++)
	{
		p = b[i].link;
		while(p!=NULL)
		{
			fwrite(&p->data,sizeof(tudien),1,f);
			p=p->link;
		}
	}
	printf("Write File Suscessfull");
	fclose(f);
}
	
void docfile(node b[], char *filename)
{
	FILE *f;
	tudien tam;
	f=fopen(filename,"rb");
	while(!feof(f))
	{
		fread(&tam,sizeof(tudien),1,f);
		if(kiemtra(b,tam.tu)==0)
		themtu(b,tam);		
	}
	printf("Open File Suscessfull");
	fclose(f);
}

int main()
{
	int n, chon;
	tudien x;
	char ch[10];
	node *p;
	do
	{
		printf("\t\nChuong trinh tu dien\n");
		printf("\t1.Nhap tu moi\n");
		printf("\t2.Tra tu\n");
		printf("\t3.In tu dien\n");
		printf("\t4.Xoa 1 tu\n");
		printf("\t5.Ghi File\n");
		printf("\t6.Doc File\n");
		printf("\t7.Thoat");
		printf("\nNhap lua chon cua ban : ");	
		scanf("%d", &chon);
		switch(chon)
		{
			case 1:
			{
				printf("\nBan nhap bao nhieu tu : ");
				scanf("%d", &n);
				for(int i=1;i<=n;i++)
				{
					printf("Nhap tu moi : ");
					fflush(stdin);
					gets(x.tu);
					if(kiemtra(butket, x.tu)==1)
						printf("\nTu nay da co trong tu dien!!\n");
					else
					{
						printf("Nhap nghia cua tu : ");
						fflush(stdin);
						gets(x.nghia);
						themtu(butket,x);
					}
				}
				printf("\nNhan phim bat ki de tiep tuc!");
				getch();
				break;
			}
			case 2:
			{
				printf("\nNhap tu can tra : ");
				fflush(stdin);
				gets(ch);
				p=tratu(butket,ch);
				if(p==NULL)
					printf("Tu nay khong co trong tu dien!");
				else
					printf("\nTu : %s co nghia la : %s",p->data.tu, p->data.nghia);
				printf("\nNhap phim bat ki de tiep tuc!!");
				getch();
				break;
			}
			case 3:
			{
				intudien(butket);
				printf("\nNhap phim bat ki de tiep tuc!!");
				getch();
				break;
			}
			case 4:
			{
				printf("\nNhap tu can xoa : ");
				fflush(stdin);
				gets(ch);
				xoatu(butket,ch);
				printf("\nNhan phim bat ki de tiep tuc!!");
				getch();
				break;
			}
			case 5:
			{
				ghifile(butket,"D:\\Bangbam.txt");
				break;
			}
			case 6:
			{
				docfile(butket,"D:\\Bangbam.txt");
				break;
			}
			case 7:
			{
				printf("\nNhap phim bat ki de thoat !!\n");
				getch();
				break;
			}
		}
	}while(chon!=7);
}
	
	
	
	
