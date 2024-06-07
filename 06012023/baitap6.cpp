#include <stdio.h>
int nhapMang(int A[], int n);
int demX(int A[], int n);
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
    
    	//in ket qua dem
	kq=demX(A, n);
	printf("\n x xuat hien %d lan", kq);
	
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

//dem so lan xuat hien cua x trong mang
int demX(int A[], int n)
{
	int x, dem=0;
	
	//nhap so can dem
	printf("\nNhap so can dem trong mang x=");
	scanf("%d", &x);
	
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		{
			dem++;
		}
	}
	return dem;	
}

