#include <stdio.h>
int main()
{
    int A[10]={6,3,5,25,10,0,12,9,8,12};
    int i;

    //xuat gia tri mang	
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
    //kiem tra	
	int m=0;
	for(i=0; i<10; i++)
	{
		int dem =0;
		for(int k=1; k<=A[i]; k++)
		{
			if(A[i]%k==0)
			{
		   		dem++;
			}
	    }
        if(dem==2)
        {
            m=1;
	    }
    }
	if(m==0)
    {
      	printf("\nTrong day so KHONG ton tai SNT");
    }
    else
    {
	  	printf("\ntrong day so CO ton tai SNT");
    }    
	return 0;
}
	
