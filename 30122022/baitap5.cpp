#include <stdio.h>
int main()
{
    int A[10]={6,5,3,25,10,0,12,9,8,11};
    int s, i;

    //xuat gia tri mang	
	printf("gia tri trong day so nguyen A la: \n ");
	for(i=0;i<10;i++)
	{
		printf("%d\t", A[i]);
	}
	
    //xu ly tinh tong	
	for(s=0, i=0; i<10; i++)
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
           	s=s+A[i];
        }
    }
	printf("\nket qua tinh tong cac gia tri SNT trong day so la: %d", s);
	
	return 0;
}
	
