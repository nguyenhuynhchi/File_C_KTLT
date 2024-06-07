#include <stdio.h>
int nhapMang(int A[], int n);
int main()
{
    	int n, mang[10];
    
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
    
	nhapMang(mang, n);
    
	return 0;
}

//nhap gia tri mang
int nhapMang(int A[], int s)
{
	for(int i=0;i<s;i++)
	{
		printf("\nNhap vao gia tri tai vi tri A[%d]:", i);
		scanf("%d", &A[i]);
	}
	
}
