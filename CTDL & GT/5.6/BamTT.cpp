#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "time.h"
#define TRUE 1
#define FALSE 0
#define NULLKEY -1
#define M 10
// Khai bao cau truc mot nut cua bang bam
struct node
{
    int key; // khoa cua nut tren bam
    char name[50];
};


struct node hashtable[M]; // Khai bao bang bam co M nut

int N; // bien toan cuc chi so nut hien co tren bang bam

// Ham bam
int hashfunc(int key)
{
    return(key % M);
}

// Khoi dong bang bam
void initialize()
{
    int i;
    for(i=0;i<M;i++)
        hashtable[i].key = NULLKEY;
    N=0; // so nut hien co khoi dong bang 0
}

// Tac vu empty : kiem tra ca bang bam co rong hay khong
int empty()
{
    return (N==0 ? TRUE : FALSE);
}

// Tac vu full : kiem tra bang bam co day chua
int full()
{
    return (N==M-1 ? TRUE : FALSE);
}

// Tac vu search : tim kiem nut co khoa k tren bang bam
int search(int k)
{
    int i;
    i=hashfunc(k);
    while(hashtable[i].key!=k && hashtable[i].key!=NULLKEY)
    {
        // bam lai(theo phuong phap do tuyen tinh):
        i = (i + 1) % M;
    }
    if(hashtable[i].key==k) // tim thay
        return(i);
    else
        return(M); // khong tim thay
}

// Tac vu insert : them nut co khoa k vao bang bam
int insert(int k)
{
    int i,j;
    if(full())
    {
        printf("Bang bam bi day khong the them nut co khoa %d duoc",k);
        return 0;
    }
    if(search(k)<M)
    {
        printf("So nay da co trong bang bam");
        return 0;
    }
    i=hashfunc(k);
    while(hashtable[i].key!=NULLKEY)
    {
        // bam lai theo phuong phap tuyen tinh
        i = (i + 1) % M;
    }
    hashtable[i].key=k;
    N=N+1;
    return(i);
}

// Tac vu remove : xoa nut tai dia chi i tren bang bam
void remove(int i)
{
    int j, r, cont, a;
    cont = TRUE;
    do
    {
        hashtable[i].key = NULLKEY;
        j = i;
        do
        {
            i = (i + 1) % M;
            if(hashtable[i].key == NULLKEY)
                cont = FALSE;
            else
            {
                r = hashfunc(hashtable[i].key);
                a = (j < r && r <= i) || (r <= i && i < j) || (i < j && j < r);
            }
        } while(cont && a);
        if(cont)
            hashtable[j].key = hashtable[i].key;
    } while(cont);
    printf("Da xoa thanh cong.");
}

// Tac vu viewtable : xem chi tiet bang bam
void viewtable()
{
    int i;
    for(i=0;i<M;i++)
        printf("\nTable[%2d] : %4d",i,hashtable[i].key);
}
// Hàm nh?p n ph?n t? vào b?ng d? li?u
void input(int n) 
{
    int key;
    for (int i = 0; i < n; i++) {
        printf("\nNhap khoa cua nut thu %d: ", i + 1);
        scanf("%d", &key);
        insert(key);
    }
}

// Hàm xu?t n ph?n t? theo m?u
void output() {
    printf("\nVi tri:");
    for (int i = 0; i < M; i++) 
	{
        printf("%2d ", i);
    }
    printf("\nKhoa: ");
    for (int i = 0; i < M; i++) {
        if (hashtable[i].key == NULLKEY) 
		{
            printf("  -");
        }
		else 
		{
            printf("%2d", hashtable[i].key);
        }
        printf(" ");
    }
}

// Chuong trinh chinh
int main()
{
    int i,n,p,q;
    int b, key, chucnang;
    char c;
    // khoi tao bang bam
    initialize();
    do
    {
        // menu chinh cua chuong tinh
        printf("\t\n\nCac chuc nang chinh cua chuong trinh :	\n");
        printf("\t1.Nhap nut vao bang bam \n");
        printf("\t2.Them ngau nhien mot nut vao bang bam\n");
        printf("\t3.Xoa nut tren bang bam\n");
        printf("\t4.Xoa toan bo bang bam\n");
        printf("\t5.Xem chi tiet bang bam\n");
        printf("\t6.Tim kiem tren bang bam\n");
        printf("\t0.Ket thuc chuong trinh\n");
        printf("\nChuc nang ban chon : ");
        scanf("%d",&chucnang);
        fflush(stdin); // xoa bo dem dau vao
        switch(chucnang)
        {
            case 1:
            {
              printf("Nhap so phan tu can them N<10: ");
                scanf("%d", &n);
               	if(n<10)
               	{
               		input(n);
               	}
               	else
               	{
               		printf("\nVui long nhap lai so nho hon 10");
               	}
                break;
            }
            case 2:
            {
                srand(time(NULL)); // khoi tao bo sinh so ngau nhien
                printf("\nThem ngau nhien nhieu nut vao bang bam");
                printf("\nBan muon them bao nhieu nut : ");
                scanf("%d", &n);
                for(i=0;i<n;i++)
                {
                    key=rand()%1000; // sinh ngau nhien khoa tu 0 den 999
                    insert(key);
                }
                break;
            }
            case 3:
            {
                printf("\nXoa nut tren bang bam");
                printf("\nkhoa cua nut can xoa : ");
                scanf("%d", &key);
                i = search(key);
                if(i == M) printf("Khong co nut voi khoa can xoa");
                else
                {
                    remove(i);
                    N--;
                }
                break;
            }
            case 4:
            {
                printf("\nXoa toan bo bang bam");
                printf("\nBan co chat khong (c/k) : ");
                c=getch();
                if(c=='c'||c=='C')
                    initialize();
                break;
            }
            case 5:
            {
                printf("\nXem chi tiet bang bam");
              	output();
                break;
            }
            case 6:
            {
                printf("Tim kiem tren bang bam");
                printf("\nKhoa can tim : ");
                scanf("%d",&key);
                if(search(key)==M)
                    printf("\nKhong tim thay");
                else
                {
                    printf("Tim thay tai dia chi %d trong bang bam",search(key));
                }
                break; // them break de thoat khoi switch case
            }
        }
    } while(chucnang!=0);
}
