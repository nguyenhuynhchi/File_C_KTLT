#include <stdio.h>
void nhapMang(int A[], int n);
void timDSKhongTrung(int A[], int n, int B[], int *m);
void xuatMang(int A[], int n);
int kiemTra(int A[],int B[], int n);
int main()
{
	int A[100], mangb[100];
	int n, k;
	
    	printf("Nhap vao so gia tri trong mang (0 < n < 20): ");
   	scanf("%d", &n);
   	if(n<=0||n>=20)
	{
    		do
	    	{
    			printf("Nhap lai (0 < n < 20):");
    			scanf("%d", &n);
    		}while(n<=0||n>=20);
   	}
	nhapMang(A, n);
	 	
	timDSKhongTrung(A, n, mangb, &k);
	
	printf("\nCac gia tri mang vua tao khong trung mang A: ");
	xuatMang(mangb, k);

	return 0;
}


void nhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao gia tri tai vi tri A[%d]:", i);
		scanf("%d", &A[i]);
	}
	
}

void timDSKhongTrung(int A[], int n, int B[], int *m)
{
	int i, j;
	for(i=0,j=0;i<n;i++)
	{
		if(kiemTra(A, B, n)==0)
		{
			B[j]=A[i];
			j++;
		}
	}
	*m=j;
}

//kiemtra 
int kiemTra(int A[], int B[], int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(B[j]==A[i])
			{
				return 1;
			}
		}
	}
	return 0;
}
    
void xuatMang(int A[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\t%d", A[i]);
	}
}    
    
	









