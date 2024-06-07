#include <stdio.h>
int coSNT(int n);
int main()
{
	int n, kq;
	do
	{
	    printf("Nhap vao so nguyen n (10 <= n <= 9999):");
	    scanf("%d", &n);
	}while(n<10 || n>9999);
	kq=coSNT(n);
	if(kq==1)
	{
		printf("%d khong ton tai chu so nguyen to", n);
	}
	else if(kq==0)
	{
		printf("%d co ton tai chu so nguyen to ", n);
	}
	
	return 0;
}


int coSNT(int n)
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
	     n=n/10;
	}
	return 1;
}

















