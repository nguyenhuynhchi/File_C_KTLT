#include <stdio.h>
int bang_cuu_chuong (int n);
int main()
{
    int  n;
    do
	{
	      printf("nhap vao so nguyen n ( 0 < n < 10 ):");
          scanf("%d", &n);
          printf("\n");
    }
	while ( n>10 || n<0 );
    bang_cuu_chuong (n);
	return 0;
}
int bang_cuu_chuong (int n)
    {
          printf("Bang cuu chuong %d:\n", n);
	      for(int i=0; i<=10; i++ )
	      printf("%d * %d = %d\n", n, i, n*i);
	}	
