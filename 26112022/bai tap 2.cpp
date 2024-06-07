#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x, x1, x2, del;
	
	//nhap he so cho phuong trinh va kiem tra
	printf("Nhap vao he so cua phuong trinh bac hai (a^2x + bx +c = 0, a khac 0)\n");
	do
	{
		printf("a:");
		scanf("%f", &a);
	}
	while (a==0);
	printf("b:");
	scanf("%f", &b);
	printf("c:");
	scanf("%f", &c);
	
	//xu ly phuong trinh tu he so da nhap
    del = pow(b,2)-4*a*c;
    x = -b/ (2*a);
    x1 = ( -b + sqrt(del)) / (2*a);
    x2 = ( -b - sqrt(del)) / (2*a);
    
    if(del < 0)
    {
  	  	printf("\ndel = %.1f^2 - 4 * %.0f * %.0f = %.0f", b, a, c, del);
  	  	printf("\nVi del = %.0f < 0 \n ==> Phuong trinh  vo nghiem", del);
    }
    
    else if(del == 0)
    {
   	 	printf("\ndel = %.0f^2 - 4 * %.0f * %.0f = %.0f", b, a, c, del);
   	 	printf("\nVi del = %.0f \n ==> Phuong trinh co 1 nghiem duy nhat ( nghiem kep )", del);
   	 	printf("\n   x = -%.0f / (2 * %.0f)", b, a);
    }
    
    else if(del > 0) 
    {
    		printf("\ndel = %.0f^2 - 4 * %.0f * %.0f = %.0f", b, a, c, del);
   	 	printf("\nVi del = %.0f > 0 \n ==> Phuong trinh  co 2 nghiem phan biet", del);
   	 	printf("\n  x1 = (-%.0f + %.0f^2)/ (2 * %.0f) = %.2f ", b, del, a, x1);
  	  	printf("\n  x2 = (-%.0f - %.0f^2)/ (2 * %.0f) = %.2f", b, del, a, x2);
    }
	
	return 0;
}


