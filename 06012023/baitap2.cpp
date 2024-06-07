#include <stdio.h>
int nhapMang(int A[], int n);
int kiemTra(int A[], int n);
int main()
{
    	int n, A[n];
	int kq; 
	
	// nhap va kiem tra n    
    	printf("Nhap vao so gia tri trong mang (0 < n < 20): ");
    	scanf("%d", &n);
    	if(n<=0||n>=20)
    	{
    		do{
    			printf("Nhap lai (0 < n < 20):");
    			scanf("%d", &n);
    		}while(n<=0||n>=20);
    	}
    
	nhapMang(A, n);
	
	//in ket qua kiem tra
	kq=kiemTra(A, n);
	if(kq==1)
	{
		printf("\nTrong mang CO ton tai gia tri chan nho hon 10");
	}
    	else
    	{
    		printf("\nTrong mang KHONG ton tai gia tri chan nho hon 10");
    	}
    
	return 0;
}

// nhap gia tri mang
int nhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)	
	{
		printf("\nNhap vao gia tri tai vi tri A[%d]:", i);
		scanf("%d", &A[i]);
	}
	
}

//kiem tra mang
int kiemTra(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]<10)
		{
			if(A[i]%2==0)
			{
				return 1;
			}
		}		
	}
	return 0;
	
}




