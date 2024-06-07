#include <stdio.h>
int main()
{
    int A[10]={5,5,3,25,10,9,12,0,8,11};
    int i;
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
	
	//kiem tra

	int m=0;
	for(i=0;i<10;i++)
	{
    	if(A[i]==0)
    	{
        	m=1;
		}
    }
    if(m==0)
    {
        printf("\nTrong day so KHONG ton tai so 0");
    }
	else
    {
    	printf("\ntrong day so CO ton tai so 0");
    }
	
	return 0;
}

