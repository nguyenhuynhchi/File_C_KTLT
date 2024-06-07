#include <stdio.h>
int nhapMang(int C[], int n);
int kiemTraMang(int C[], int n);
int main()
{
	int n;
	int C[n];
	printf("Nhap so phan tu cua mang C (0 < n < 20):");
	scanf("%d", &n);
		
	if(n<0 || n>20 )
     {
     	do
     	{
     		printf("nhap lai (0 < n < 20):"); 
     		scanf("%d", &n);  
          }while( n<0 || n>20 );
     } 
     nhapMang(C, n);
     
     printf("Cac gia tri cua mang vua nhap:\n");
     kiemTraMang(C, n);
	
	return 0;
}

int nhapMang(int C[], int n)
{
	int i;
	for(i=0;i<n;i++)
     {
     	printf("Nhap gia tri mang tai vi tri C[%d]:", i);
     	scanf("%d", C+i);
	}
}

int kiemTraMang(int C[], int n)
{
	int i;
	for(i=0;i<n;i++)
     {
     	printf("C[%d]:%d\n", i, C[i]);
	}
}










