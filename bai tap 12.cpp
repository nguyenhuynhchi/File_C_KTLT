#include <stdio.h>
int main()
{
	int n, du, s=0;
	
	//nhap n va kiem tra
	do
	{
	    printf("Nhap vao so nguyen n (100 <= n <=9999):");
	    scanf("%d", &n);
	}while(n<100 && n>9999);

	//xu ly
	printf("\nCac so nguyen to la:");
	while (n>0)
	{
	    int k, l, m;
	    du = n%10;
	    for(du, m=0, k=1; k<10; k++)
	    	{ 
	        if(du%k==0)
	        {
		     m++;
	        }
	     }
	        if(m==2)  //m=2 thi du la so nguyen to
	        {
	        	printf("\t%d", du);
	          s=s+du;
             }
	    n = n/10;
	    }
    printf("\nKet qua tong cac chu SNT = %d", s);
    
	    return 0;
}
	    
	    
	    
	    
	    
