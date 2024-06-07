#include <stdio.h>
int soLanXuatHienX (int n, int x);
int main()
{
	int n, x;
	printf("\n  ==>So lan xuat hien cua x la: %d ", soLanXuatHienX (n, x));
	return 0;
}


    //xay dung ham
int soLanXuatHienX (int n, int x)
{
	//nhap n, x va kiem tra
  	do
  	{
        printf("Nhap vao so nguyen duong n (100 <= n <= 9999): ");
        scanf("%d", &n);
    }while(n<100 || n>9999);
    do
    {
	printf("Nhap vao so x can tim (0<= x <= 9): x= ");
    scanf("%d", &x);
    }while(x<0 || x>9);
    
    //xu ly
    int du, k=0;
    while(n>0)
    {
    	du=n%10;
    	if(du==x)
    	{
    		k++;
    	}
    	n=n/10;
    }
    return k;
}
    
    
    
    
    
