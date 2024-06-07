#include <stdio.h>
int main()
{
    int A[10]={5,5,3,25,13,-9,11,3,9,11};
    int i;
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
	
	//kiem tra

	int m=1;
	for(i=0;i<10;i++)
	{
    	if(A[i]<0)
    	{
        	m=0;
		}
    }
    if(m==0)
    {
    	printf("\nTrong day so KHONG co toan so duong");
    }
	else
    {
       	printf("\ntrong day so CO toan so duong");
    }    	
	
	return 0;
}

