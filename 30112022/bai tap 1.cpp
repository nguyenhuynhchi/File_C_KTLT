#include <stdio.h>
void giaiPhuongTrinhBacNhat( int a, int b );
int main()
{
	int a, b ;
    giaiPhuongTrinhBacNhat(a, b );
    
	return 0;
}
	//xay dung ham
	void giaiPhuongTrinhBacNhat( int a, int b )
   {	
    
	    //nhap he so cho phuong trinh va kiem tra
	    printf("Nhap vao 2 he so cua phuong trinh bac nhat ( ax+b = 0)\n");
     	printf("a: ");
    	scanf("%d", &a);
    	printf("b: ");
    	scanf("%d", &b); 
    
		//xu ly
        float x ;
        x = -(float)b / (float)a;
	
    	if( b==0 && a==0 ) 
	    {
		      printf("\nVi a=0 va b=0 \n  ==> Phuong trinh co vo so nghiem");
	    }
    	
		else if ( a==0 )
    	{
			  printf("\nVi a=0 \n  ==> Phuong trinh vo nghiem");
	    }
    	
		else
	    {
     	      printf("\n-%d / %d = %.2f\n", b, a, x);
	          printf("==> Phuong trinh co ngiem:\n       x = %.2f", x);
	    }	
}
