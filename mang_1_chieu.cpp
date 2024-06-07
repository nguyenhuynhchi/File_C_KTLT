#include <stdio.h>
#include <stdlib.h>
void cacSoChan( int *a, int n );
int main()
{
    int n, *a, i, b;
    printf("\nnhap so phan tu cua mang:");
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
    {printf("\nnhap gia tri cua mang tai vi tri a[%d]: ", i);
    scanf("%d", &a[i]);}
    
    cacSoChan( &b, n);

    return 0;
}
void cacSoChan(int *a, int n )
{
    int i=0;
	printf("cac so chan la :");
	while(i<n)
    {
	  if ((a[i])%2==0)
      printf("\t%d", a[i] );
    i++;
    }
} 
