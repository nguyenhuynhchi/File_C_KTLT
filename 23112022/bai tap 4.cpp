#include <stdio.h>
int main()
{   
    int  n, t=0, k=0, m, i=1, s=0;
    do
	{
	    printf("nhap vao so nguyen n ( n<99 ):");
        scanf("%d", &n);
        printf("\n");
    }
	while ( n>99 || n<0 );
	// in ra so le	   
	printf("So le thuoc doan [1,%d] la :\n", n); 
	while ( t<n )
	{
	    if(t%2!=0)
	    {
		    printf("%d\t", t );
	    }
	    t++;
	}  printf("\n");
	// tong so nguyen to doan 1 den n
	while (i<n)
         {
		 for ( m=0; m<9; m++)
		 {
		    if( i%m==0)
		    k++;
		 }
		 if(k==2) // K==2 thi i la snt
		    s=s+i;
         i++;
		 }
		 printf("tong cac so nguyen to la: %d", s);
	return 0; 
	}
		 
		 
		 
		 	   
	   
	   





