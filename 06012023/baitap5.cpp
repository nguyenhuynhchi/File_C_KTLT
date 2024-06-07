#include <stdio.h>
int nhapMang(int A[], int n);
int kiemTraCoSNT(int A[], int n);
int main()
{
    	int n, A[n];
    	int kq;
    
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
	
	//in ket qua kiem tra
	kq= kiemTraCoSNT(A, n);
	if(kq==1)
	{
		printf("\nTrong mang CO ton tai gia tri la SNT");
	}
	else
	{
		printf("\nTrong mang KHONG ton tai gia tri la SNT");
	}
    
	return 0;
}

//nhap gia tri mang
int nhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao gia tri tai vi tri A[%d]:", i);
		scanf("%d", &A[i]);
	}
	
}

//kiem tra mang co ton tai SNT
int kiemTraCoSNT(int A[], int n)
{
	int i, dem;
	for(i=0;i<n;i++)
	{
		dem=0;
		for(int k=1;k<=A[i];k++)
		{
			if(A[i]%k==0)
			{
				dem++;
			}
		}
		if(dem==2)
		{
			return 1;
		}
	}
	return 0;
}
