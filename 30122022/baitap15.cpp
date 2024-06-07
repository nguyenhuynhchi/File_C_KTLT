#include <stdio.h>
int main()
{
    int A[10]={6,5,3,25,26,0,26,9,8,11};
    int max, dem, i;
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
	
	//kiem tra
	max=A[0];
	for(i=0;i<10;i++)
	{
		if(A[i]>max)
		{
	    	max=A[i];
	    }
    }
    
	//dem max
	dem=0;
	for(i=0;i<10;i++)
	{
		if(A[i]==max)
		{
	    	dem++;
	    }
    }
	printf("\nGia tri lon nhat trong day so la %d va co %d chu so", max, dem);
   
	
	return 0;
}
	
