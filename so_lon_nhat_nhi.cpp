#include <stdio.h>
int main ()
{
    int a, b, c, d, max1, max2;
	printf("nhap vao cac chu so can so sanh.\n");
	printf("nhap a:"); scanf("%d", &a);
	printf("nhap b:"); scanf("%d", &b);
	printf("nhap c:"); scanf("%d", &c);
	printf("nhap d:"); scanf("%d", &d);
	
	//so sanh neu a > b => a max1, b max2   ><   b > a => b max1, a max2        //neu c > max1 => c max1, max1 = max2
	//neu c > max 2 => c = max2      //d nhu c
	if( a > b )
	{   max1 = a;
	    max2 = b;
     }
	else
	{   max1 = b;
	    max2 = a;
	}     
	if( max1 < c )
	{   max2 = max1;
	    max1 = c;
	}
	if( max2 < c && c < max1 )
	    max2 = c;
     if( max1 < d )
	{   max2 = max1;
	    max1 = d;
	}
	if( max2 < d && d < max1)
	    int*max2 = &d;	
	printf("so lon nhat la: %d\n", max1);
	printf("so lon thu 2 la: %d", max2);
	
	return 0;
}
