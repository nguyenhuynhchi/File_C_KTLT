#include <stdio.h>
int laSoNguyenTo (int n );
int n;
int main()
{ 
	printf("Dieu kien de la so nguyen to la so co 2 uoc duy nhat.\n");
	laSoNguyenTo(n);
	return 0;
	}
int laSoNguyenTo (int n )
{
	do
	{   printf("\nNhap vao 1 so nguyen (4 chu so, >0):");
	    scanf("%d",&n);
	}
	while(n<=0||n>9999);
	
    int k=1, t=0;
	while(k<=n)
    {
		if(n%k==0)
		{
		printf("\n%d / %d =%d", n, k, n/k);
		t++;
		}
		k++;
	}	
	if(t==2)
	printf("\n Vi %d co dung 2 so uoc \n Nen %d La so Nguyen To.", n, n);
	else
	printf("\n Vi %d co %d so uoc \n Nen %d khong la so Nguyen To.", n, t, n);
}
	
