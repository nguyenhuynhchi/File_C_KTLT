#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NHANVIEN
{
	char ms[10], ten[30], gt[5];
	int ns, luong;
}NV;

//cau truc 1 cai node
struct node
{
	NV Info;
	node *pNext;
};

//cau truc list
typedef struct list
{
	node *pHead;
	node *pTail;
}list;

node *KhoiTaoNODE(NV x);
void KhoiTaoList(list &l);
void AddTailList(list &l, NV nv);
void NhapTT(list &l, int n);
void XuatTT(list l);
void InMS(list l);
int DemLuong(list l);
void Search(list l, char s[10]);


node *KhoiTaoNODE(NV x)
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

void AddTailList(list &l, NV nv)
{
	node *p=KhoiTaoNODE(nv);
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
		NV nv;
		
		printf("\nNhap thong tin nhan vien thu %d: \n", i);
		
		printf("\n\tMa so: ");
		fflush(stdin);
		scanf("%s", nv.ms);
		
		printf("\n\tTen: ");
		fflush(stdin);
		gets(nv.ten);
		
		printf("\n\tGioi tinh: ");
		fflush(stdin);
		scanf("%s", nv.gt);
		
		printf("\n\tNam sinh: ");
		scanf("%d", &nv.ns);
		
		printf("\n\tTien luong: ");
		scanf("%d", &nv.luong);
		
		AddTailList(l, nv);
	}
}

void XuatTT(list l)
{
	node *p=l.pHead;
	printf("\n%-10s%-30s%-20s%-20s%-20s", "Ma so", "Ten", "Gioi tinh", "Nam sinh", "Luong");
	while(p!=NULL)
	{
		printf("\n%-10s%-30s%-20s%-20d%-20d", p->Info.ms, p->Info.ten, p->Info.gt, p->Info.ns, p->Info.luong);
		p=p->pNext;
	}
}

// ham in maso cac nhan vien nu
void InMS(list l)
{
	node *p=l.pHead;
	while(p!=NULL)
	{
		if(strcmp(p->Info.gt, "nu")==0||strcmp(p->Info.gt, "NU")==0)
		{
			printf("\n%-10s", p->Info.ms);
		}
		p=p->pNext;
	}
}

// ham dem luong nhan vien tu 4tr den 10tr
int DemLuong(list l)
{
	node *p=l.pHead;
	int count=0;
	while(p!=NULL)
	{
		if((p->Info.luong>=4000000)&&(p->Info.luong<=10000000)) //luong tu 4tr den 10tr
		{
			count++;
		}
		p=p->pNext;
	}
	return count;
}

// ham xoa 1 thong tin 
void Xoa(list &l, char x[10])
{
	node *p = l.pHead;
	node *prev = NULL;
	while (p != NULL) 
	{
     	if(strcmp(p->Info.ms, x) == 0) 
		{
          	// Xóa node dau danh sách
          	if (prev == NULL) 
			{
               	l.pHead = p->pNext;
               	free(p);
               	printf("Xoa nhan vien co MS %s thanh cong!\n", x);
               	return;
          	}
          	// Xóa node cuoi danh sách
          	if (p->pNext == NULL) 
			{
               	prev->pNext = NULL;
               	l.pTail = prev;
              		free(p);
               	printf("Xoa nhan vien co MS %s thanh cong!\n", x);
               	return;
          	}
          	// Xóa node giua danh sách
          	prev->pNext = p->pNext;
          	free(p);
          	printf("Xoa nhan vien co MS %s thanh cong!\n", x);
          	return;
     	}
     	prev = p;
     	p = p->pNext;
	}
	printf("Khong tim thay nhan vien co ma so %s\n", x);
}

void Search(list l, char s[10])
{
	int flag=0;
	node *p;
	for(p=l.pHead; p!=NULL; p=p->pNext)
	{
		if(strcmp(p->Info.ms, s)==0)
		{
			printf("\n%-10s%-30s%-20s%-20d%-20d", p->Info.ms, p->Info.ten, p->Info.gt, p->Info.ns, p->Info.luong);
			flag = 1;
		}
	}
	if(flag==0)
	{
		printf("Khong tim thay sinh vien co ma so %s\n", s);
	}
}

int main()
{
	list l;
	KhoiTaoList(l);
	
	int n;
	printf("\nNhap so luong nhan vien: ");
	scanf("%d", &n);
	
	printf("\n--------Nhap thong tin cac nhan vien--------\n");
	NhapTT(l, n);
	
	printf("\n~-~-~-~-  DANH  SACH  NHAN  VIEN  -~-~-~-~");
	XuatTT(l);
	
	chose:
		
	printf("\n\n1.Bo sung them 1 thong tin nhan vien vao danh sach");
	printf("\n2.Tim nhan vien theo ma so");
	printf("\n3.Xoa thong tin 1 nhan vien trong danh sach");
	printf("\n4.Dem so luong nhan vien co muc luong tu 4tr den 10tr");
	printf("\n5.In danh sach ma so cac nhan vien nu");
	printf("\n6.Ket thuc chuong trinh");
	int chosen;
	printf("\n{<-->}Nhap lua chon cua ban (1 -> 6): ");
	scanf("%d", &chosen);
	
	switch(chosen)
	{
		case 1:
			{
				int yn=1;
				do
				{
					printf("\nNhap thong tin nhan vien can bo sung:\n");
					NhapTT(l, 1);
					printf("\n~-~-~-~-  DANH  SACH  NHAN  VIEN  -~-~-~-~");
					XuatTT(l);
					
					do
					{
						printf("\n\nBan co muon tiep tuc bo sung thong tin khong (1-co ; 0-khong):");
						scanf("%d", &yn);
					}while(yn!=1&&yn!=0);
				}while(yn==1);
				
				goto chose;
				break;
			}
			
		case 2:
			{
				char s[10];
				int yn=1;
				do
				{
					printf("\nNhap ma so nhan vien can tim:");
					fflush(stdin);
					scanf("%s", s);
					Search(l, s);
					do
					{
						printf("\n\nBan co muon tiep tuc tim thong tin khong (1-co ; 0-khong):");
						scanf("%d", &yn);
					}while(yn!=1&&yn!=0);
				}while(yn==1);
				
				goto chose;
				break;
			}
	
		case 3:
			{
				int yn=1;
				do
				{
					char x[10];
					printf("\n\nNhap ma so nhan vien can xoa: ");
					fflush(stdin);
					scanf("%s", x);
					Xoa(l, x);
					printf("\n~-~-~-~-  DANH  SACH  NHAN  VIEN  -~-~-~-~");
					XuatTT(l);
					do
						{
							printf("\n\nBan co muon tiep tuc xoa thong tin khong (1-co ; 0-khong)");
							scanf("%d", &yn);
						}while(yn!=1&&yn!=0);
				}while(yn==1);
				
				goto chose;
				break;
			}
			
	
		case 4:
			{
				if(DemLuong(l)==0)
				{
					printf("\n\nKHONG co nhan vien co muc luong 4 trieu den 10 trieu ");
				}
				else
				{
					printf("\n\nSo luong nhan vien co muc luong tu 4 trieu den 10 trieu: %d", DemLuong(l));
				}
				
				goto chose;
				break;
			}
			
		case 5:
			{
				printf("\n\n~-~-~-~-DANH SACH MA SO CAC NHAN VIEN NU~-~-~-~-");
				InMS(l);
				
				goto chose;
				break;
			}
			
		case 6:
			{
				return 0;
			}	
	}
	
	return 0;
}




