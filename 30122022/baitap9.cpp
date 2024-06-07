#include <stdio.h>
int main()
{
     int A[10]={5,5,3,25,13,9,11,3,9,11};
     int i;
    
	//in day so trong mang
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
	
	//kiem tra

	int m=0;
	for(i=0;i<10;i++)
	{
    		if(A[i]%2==0)
    		{
   		    	m=1;
		}
     }
   		if(m==0)
    		{
    			printf("\nTrong day so KHONG ton tai so chan");
    		}
		else
  	 	{
     	  	printf("\ntrong day so CO ton tai so chan");
   		}    	
	
	return 0;
}

