#include <stdio.h>
#include <stdlib.h>
int Max1_2(int n);
int main ()
{
	int n;
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	Max1_2( n);
	return 0;
}
int minMax(int n)
{
	int du, duu, d= n, max1=0, max2=10, l=0, k=0;
	while( n>0 )
     {
	     du= n%10;
	     if( du > max )
	     max1= du ;
	     
	     if( du < min)
	     max2= du;
	     
	     n= n/10;
	}
	while( d>0 )
	{	
		duu= d%10;
	     if( duu == max )
	     k++;
	     
	     if( duu == min)
	     l++;
	     
	     d= d/10;
	}
	     printf("so lon nhat la: %d\n", max);
	     printf("so lon nhi la: %d\n", min);
	     printf("co %d so lon nhat\n", k);
          printf("co %d so lon nhi\n", l);
	
}














































