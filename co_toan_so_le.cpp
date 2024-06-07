#include <stdio.h>
int coToanChuSoLe (int n );
int n;
int main()
{
	printf("nhap vao 1 so nguyen (4 chu so, >0):");
	scanf("%d",&n);
	coToanChuSoLe(n);
	return 0;
}
int coToanChuSoLe (int n )
{   int du;
    while(n>0)
   {du=n%10;
	if(du%2!=0)
    printf("\n%d", du);
    if(du%2==0)
   {printf("\n%d la chu so chan", du);
	printf("\nvay %d khong co toan so le", n);}
    n=n/10;}
    return du;
}
