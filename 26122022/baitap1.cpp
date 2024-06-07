#include <stdio.h>
int chuSoLonNhat(int n);
int demSo(int n);
int main()
{
	int n, kq;
	do
	{
	    printf("Nhap vao so nguyen n (10 <= n <= 9999):");
	    scanf("%d", &n);
	}while(n<10 || n>9999);
	
    kq=demSo(n);
    printf("%d co chu so lon nhat la %d va co %d chu so", n, chuSoLonNhat(n), kq );
	return 0;
} 


int  chuSoLonNhat(int n)
{
	int du, max=0;
	
	//xu ly
	while ( n>0)
	{
		du=n%10;
		if( du > max )
		{
			max=du;
		}
		n=n/10;
	}
	return  max;	
}

int demSo(int n)
{
	int du, dem=0;
	int max=chuSoLonNhat(n);
	while(n>0)
	{
		du=n%10;
		if( du == max )
		{
			dem++;
		}
		n=n/10;
    }
	return dem;
}
