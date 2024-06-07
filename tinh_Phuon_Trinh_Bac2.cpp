#include <stdio.h>
#include <cmath>
int a, b, c;
float delta;
int phuongTrinhBac2(int a, int b, int c);
int main()
{
	printf("nhap vao he so cua phuong trinh bac 2 (ax^2+bx+c=0; a!=0):\n");
	do
	{ 
	  printf("\na:");
   	  scanf("%d", &a);
	} 
	while(a==0);
	printf("\nb:");
	scanf("%d", &b);
	printf("\nc:");
	scanf("%d", &c);
    phuongTrinhBac2( a, b, c);
	return 0;
}
int phuongTrinhBac2(int a, int b, int c)
{   
	delta=pow(b,2)-4*a*c;
	printf("\n%d^2 - 4*%d*%d = %.1f", b, a, c, delta);
	if(delta<0)
	  printf("\nvi delta = %.1f < 0 nen phuong trinh vo nghiem.", delta);
    else
    {
	if(delta>0)
	{
	  printf("\nvi delta = %.1f > 0 nen phuong trinh co 2 ngiem phan biet.", delta);
      printf("\n  x1 = %.1f", (-b+sqrt(delta))/(2*a));
      printf("\n  x2 = %.1f", (-b-sqrt(delta))/(2*a));
    }
    else if(delta==0)
    {
      printf("\nvi delta = %.1f nen phuong trinh co 1 ngiem duy nhat (nghiem kep).", delta);
      printf("\n  x = %.1f", (-(float)b) / (2 * (float)a));
    }
	}  
	return delta;
}




  

