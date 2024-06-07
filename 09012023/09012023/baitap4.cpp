#include <stdio.h>
int nhapMang(int A[], int n);
int xCoTonTai(int A[], int n, int X);
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
    
	int x;
	//nhap so can kiem tra xem co ton tai khong
	printf("\nNhap so can kiem tra co ton tai trong mang x=");
	scanf("%d", &x);
    
	//in ket qua 
	kq=xCoTonTai(A, n, x);
	if(kq==1)
	{
		printf("So %d CO ton tai", x);
	}
	else
	{
		printf("So %d KHONG ton tai", x);
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

//so x co ton tai khong
int xCoTonTai(int A[], int n, int X)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]==X)
		{
			return 1;
		}
	}
	return 0;	
}

