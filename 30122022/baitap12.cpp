#include <stdio.h>
int main()
{
	int A[10]={3,2,5,6,11,25,13,8,12,16};
     int i;

     //xuat gia tri mang	
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
     //kiem tra
	int m=1;
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
          if(dem!=2)
          {
     	     m=0;
	     }
     }
	if(m==0)
     {
      	printf("\nTrong day so KHONG co toan SNT");
     }
     else 
     {
	  	printf("\ntrong day so CO toan SNT");
     }    
	return 0;
}
	
