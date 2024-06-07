#include <stdio.h>
int main()
{
    int A[10]={6,5,3,25,10,0,12,9,8,11};
    int s=0, i;
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
	
    //xu ly tinh tong
	for(s,i=0;i<10;i++)
	{
		s=s+A[i];
	}
	printf("\nket qua tinh tong cac gia tri trong day so la: %d", s);
	
	return 0;
}
	
