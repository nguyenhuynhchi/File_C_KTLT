#include <stdio.h>
int laSoNguyenTo(int n);
int inSNT(int n);
int main()
{
	int n, kq;
	do
	{
	    printf("Nhap vao so nguyen n (10 <= n <= 9999):");
	    scanf("%d", &n);
	}while(n<10 || n>9999);
	kq=laSoNguyenTo(n);
	if(kq==1)
	{
		printf("%d khong ton tai chu so nguyen to", n);
	}
	else if(kq==0)
	{
		printf("%d co ton tai chu so nguyen to la: ", n);
		inSNT(n);
	}
	
	return 0;
}


int laSoNguyenTo(int n)
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


int inSNT(int n)
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
     		printf("%2d ", du);
      	}
	     n=n/10;
	}
}
	

















