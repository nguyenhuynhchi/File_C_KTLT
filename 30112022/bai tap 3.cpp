#include <stdio.h>
int tinhTong(int n);

int main()
{
	int n;
	printf("Ket qua la = %d", tinhTong(n));
	
	return 0;
}

    //xay dung ham
int tinhTong(int n)
{
	int i=1, s=0 ;
	
	//nhap n va kiem tra
	do
	{
	     printf("Nhap vao so nguyen duong n ( 0<= n <= 10):");
	     scanf("%d", &n);
	}
	while(n<0 || n>9);
	
	// xu ly 
	for(i,s; i<=n; i++)
    {
	  	 s=s+i;
    }
	
	return s ;
}
