#include <stdio.h>
int soChuSoLe (int n );
int n;
int main()
{
	do
	{printf("nhap vao 1 so nguyen (4 chu so, >0):");
	scanf("%d",&n);}
	while(n<1000||n>9999);
	soChuSoLe (n);
	return 0;
}
int soChuSoLe (int n)
{   
    printf("\ncac chu so le la:");
	int s=0, du, i=1;
	while(n>0)
    {
	du=n%10;
	if(du%2!=0)
	{   printf("\n%d", du);
	    s=s+1;
	}
	n=n/10;}
	printf("\nket qua la co %d chu so le", s);
	return s;
}

