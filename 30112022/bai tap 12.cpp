#include <stdio.h>
int tinhTong (int n);

int main()
{
	int n;
    printf("ket qua tong cac chu SNT = %d", tinhTong (n));
	return 0;
}


int tinhTong (int n)
{                         
	int du, s=0 ;
	
	//nhap n va kiem tra
	do
	{
	    printf("Nhap vao so nguyen n (100 <= n <= 9999):\n");
	    scanf("%d", &n);
	}while(n<100 || n>9999);
	
	//xu ly
	while (n>0)
	{
		int k, m;
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
	            s=s+du;
            }
	    n = n/10;
	}
    
	return s;
}
	    
	    
	    
	    
	    
