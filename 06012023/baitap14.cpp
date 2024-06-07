#include <stdio.h>
int nhapMang(int A[], int n);
int Max(int A[], int n);
int demMax(int A[], int n);

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
	
	//in ket qua
	kq=Max(A, n);
	printf("\nGia tri lon nhat trong mang la %d va co %d chu so", kq, demMax(A, n));
    
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

//tim gia tri lon nhat trong mang
int Max(int A[], int n)
{
	int max=A[0];
	for(int i=0;i<A[i];i++)
	{
		if(A[i]>max)
		{
    			max=A[i];
    		}
     }
	return max;	
}

//dem so lon nhat
int demMax(int A[], int n)
{
	int dem=0;
	for(int i=0;i<A[i];i++)
	{
		if(A[i]==Max(A, n))
		{
			dem++;
		}
	}
	return dem;
}







