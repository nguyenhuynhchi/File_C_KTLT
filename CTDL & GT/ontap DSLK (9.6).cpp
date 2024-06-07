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
	node *pNext;
}node;

//cau truc list
typedef struct list
{
	node *pHead;
	node *pTail;
}list;

node *KhoiTaoNODE(SV x);
void KhoiTaoList(list &l);
void AddHeadList(list &l, SV sv);
void NhapTT(list &TT, int n);
void XuatTT(list l);
void Search(list l, char x);
void XoaSinhVien(list &l, char x[10]);

node *KhoiTaoNODE(SV x)
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

void AddHeadList(list &l, SV sv)
{
	node *p=KhoiTaoNODE(sv);
	if(l.pHead==NULL)
	{
		l.pHead=l.pTail=p;
	}
	else
	{
		p->pNext=l.pHead;
		l.pHead=p;
	}
}

void NhapTT(list &l, int n)
{
	for(int i=1; i<=n; i++)
	{
		SV sv;
		
		printf("\nNhap thong tin sinh vien thu %d: \n", i);
		
		printf("\n\tMSSV: ");
		fflush(stdin);
		scanf("%s", sv.mssv);
		
		printf("\n\tHo ten: ");
		fflush(stdin);
		gets(sv.ht);
		
		printf("\n\tDiem trung binh: ");
		scanf("%f", &sv.dtb);
		AddHeadList(l, sv);
	}
}

void XuatTT(list l)
{
	node *p=l.pHead;
	printf("\n%-10s%-30s%-10s", "MSSV", "Ho Ten", "Diem TB");
	int m=0;
	while(p!=NULL)
	{
		printf("\n%-10s%-30s%-10.1f", p->Info.mssv, p->Info.ht, p->Info.dtb);
		p=p->pNext;
		m++;
	}
	if(m==0)
	{
		printf("\n\n***** KHONG CO DU LIEU *****");
	}
}

void Search(list l, char x[10])
{
	int flag=0;
	node *p;
	for(p=l.pHead; p!=NULL; p=p->pNext)
	{
		if(strcmp(p->Info.mssv, x)==0)
		{
			XuatTT(l);
			flag = 1;
		}
	}
	if(flag==0)
	{
		printf("Khong tim thay sinh vien co ma so %s\n",x);
	}
}

void XoaSinhVien(list &l, char x[10])
{
	node *p = l.pHead;
	node *prev = NULL;
	while (p != NULL) 
	{
     	if(strcmp(p->Info.mssv, x) == 0) 
		{
          	// Xóa node dau danh sách
          	if (prev == NULL) 
			{
               	l.pHead = p->pNext;
               	free(p);
               	printf("Xoa sinh vien co MSSV %s thanh cong!\n", x);
               	return;
          	}
          	// Xóa node cuoi danh sách
          	if (p->pNext == NULL) 
			{
               	prev->pNext = NULL;
               	l.pTail = prev;
              		free(p);
               	printf("Xoa sinh vien co MSSV %s thanh cong!\n", x);
               	return;
          	}
          	// Xóa node giua danh sách
          	prev->pNext = p->pNext;
          	free(p);
          	printf("Xoa sinh vien co MSSV %s thanh cong!\n", x);
          	return;
     	}
     	prev = p;
     	p = p->pNext;
	}
	printf("Khong tim thay sinh vien co ma so %s\n", x);
}

int main()
{
	list l;
	KhoiTaoList(l);
	int n;
	printf("\nNhap so luong sinh vien: ");
	scanf("%d", &n);
	
	printf("\n-------Nhap thong tin cac sinh vien------- ");
	NhapTT(l, n);
	
	printf("\n~-~-~-~-DANH SACH SINH VIEN-~-~-~-~");
	XuatTT(l);
	
	
	chosen:
	
	printf("\n\n1.Tim kiem sinh vien theo mssv");
	printf("\n2.Xoa 1 sinh vien trong danh sach");
	printf("\n3.Bo sung them 1 sinh vien vao danh sach");
	printf("\n4.Ket thuc chuong trinh");
	printf("\nYeu cau cua ban: ");
	int chose;
	scanf("%d", &chose);
	switch(chose)
	{
		//tim sinh vien theo ma so
		case 1:
			{
				int tt;
				do
				{
					char found[10];
					printf("\n\nNhap ma so sinh vien can tim: ");
					fflush(stdin);
					scanf("%s", found);
					Search(l, found);
					printf("\n\nBan co muon tim tiep khong(co:1; khong:0)?\n");
					scanf("%d", &tt);
				}while(tt==1);
				goto chosen;
				break;
			}
		//xoa 1 khoa theo mssv
		case 2:
			{
				char del[10];
				int tt;
				do
				{
					printf("\nNhap ma so sinh vien can xoa: ");
					fflush(stdin);
					scanf("%s", del);
					XoaSinhVien(l, del);
					printf("\n~-~-~-~-DANH SACH SINH VIEN SAU KHI XOA-~-~-~-~");
					XuatTT(l);
					printf("\n\nBan co muon xoa them khong(co:1; khong:0)?\n");
					scanf("%d", &tt);
				}while(tt==1);
				goto chosen;
				break;
			}
		
		//bo sung them khoa 	
		case 3:
			{
				int tt;
				do
				{
					printf("\nNhap thong tin sinh vien can bo sung:");
					NhapTT(l, 1);
					printf("\n~-~-~-~-DANH SACH SINH VIEN SAU KHI BO SUNG-~-~-~-~");
					XuatTT(l);
					printf("\nBan co muon bo sung them khong(co:1; khong:0)?\n");
					scanf("%d", &tt);
					
				}while(tt==1);
				goto chosen;
				break;
			}
			
		case 4:
			{
				return 0;
			}
	}
	
	return 0;
}






