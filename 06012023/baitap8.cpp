#include <stdio.h>
int nhapMang(int A[], int n);
int tinhTongSoChiaHet3(int A[], int n);
int main()
{
    int n, A[n];
	
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
	
	//in ket qua tinh tong
	printf("\nKet qua tinh tong cac gia tri chia het cho 3 trong mang: %d", tinhTongSoChiaHet3(A, n) );
    
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

//tinh tong cac gia tri trong mang chia het cho 3 
int tinhTongSoChiaHet3(int A[], int n)
{
	int i, s;
	for(i=0, s=0;i<n;i++)
	{
		if(A[i]%3==0)
		{
			s+=A[i];
		}
	}
	return s;
}

