#include <stdio.h>
void nhapMang(int A[], int n);
int timDSAm(int A[], int n, int B[], int *m);
void xuatMang(int A[], int n);
int main()
{
	int A[100], mangam[100];
	int n, k;
	
	// nhap va kiem tra n   
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
 	
	//tim va in cac gia tri am	
	timDSAm(A, n, mangam, &k);
	if(timDSAm(A, n, mangam, &k) == 0)
	{
		printf("\n KHONG co gia tri am trong mang");
	}
	else
	{	
		printf("\nCac gia tri am trong mang vua nhap la");
		xuatMang(mangam, k);
	}
	
	return 0;
}

//nhap gia tri mang
void nhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao gia tri tai vi tri A[%d]:", i);
		scanf("%d", &A[i]);
	}
	
}

int timDSAm(int A[], int n, int B[], int *m)
{
	int i, j, o=0;
	for(i=0,j=0;i<n;i++)
	{
		if(A[i]<0)
		{
			B[j]=A[i];
			j++;
			o++;
		}
	}
	if(o==0)
	{
		return 0;
	}
	*m=j;
}
    
void xuatMang(int A[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\t%d", A[i]);
	}
}    
    
	









