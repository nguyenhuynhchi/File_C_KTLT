#include <stdio.h>
int toanChuSNT(int n);
int main()
{
	int n;
	int kq;
	//nhap n va kiem tra
	do
	{
	    printf("Nhap vao so nguyen n (100 <= n <= 9999):");
	    scanf("%d", &n);
	}while(n<100 || n>9999);
	
    kq=toanChuSNT(n);
    
	if(kq==0)
	{
		printf("\n%d toan chu so nguyen to", n);
	}
	else
	{
		printf("\n%d khong toan chu so nguyen to", n);
	}
	
	return 0;
} 

int toanChuSNT(int n)
{
     int k, t, du;
	while(n>0)
	{
    	     du=n%10;
	    for(k=1, du, t=0; k<10; k++)
          {
		     if(du%k==0)
		     {
		         t++;
		     }
	     }
     	if(t==2)
     	{
     		return 0;
      	}
      	
     	if(t!=2)
     	{
          	return 1;
          }
	     n=n/10;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
