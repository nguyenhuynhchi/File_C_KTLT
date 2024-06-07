#include <stdio.h>
int main()
{
    int A[10]={6,5,3,25,100,2,12,9,8,11};
    int min, i;
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
	
	//kiem tra
	min=A[0];
	for(i=0;i<10;i++)
	{
		if(A[i]<min)
		{
	    	min=A[i];
	    }
    }
	printf("\nGia tri nho nhat trong day so la: %d", min);
	
	return 0;
}
	
