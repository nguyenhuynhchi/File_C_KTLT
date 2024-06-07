#include <stdio.h>
int main()
{
    int A[10]={6,5,3,25,10,0,12,9,8,11};
    int s, i;
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
	
	//xu ly tinh tong
	for(s=0,i=0;i<10;i++)
	{
		if(A[i]%2==0)
		{
	    	s=s+A[i];
	    }
    }
	printf("\nket qua tinh tong cac gia tri chan trong day so la: %d", s);
	
	return 0;
}
	
