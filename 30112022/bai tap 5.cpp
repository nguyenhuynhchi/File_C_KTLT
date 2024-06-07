#include <stdio.h>
int tinhTong(int n);

int main()
{
	int n;
	printf("Ket qua = %d", tinhTong(n));
	
    return 0;
}

    //xay dung ham
int tinhTong(int n)
{
	int s=0, i=1;
	
	//nhap n va kiem tra
	do
	{
	printf("Nhap vao so nguyen duong n ( 0<= n <= 10):");
	scanf("%d", &n);
	}
	while(n<0 || n>9);
	
	//xu ly
	for(s, i; i<=n; i++)
	{
	    s=s+i*i;
	}
	return s;
}
	
