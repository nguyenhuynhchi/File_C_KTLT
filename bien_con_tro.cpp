#include <stdio.h>
void xuLy(int *, int *);
int main()
{
    int x= 1, y= 2;
    printf("2 so nguyen là: %d, %d\n", x, y);
    
    xuLy(&x, &y);
    printf("hoan vi 2 so nguyen: %d, %d\n", x, y);
        
    return 0;
}
void xuLy(int *a, int *b)
{   
    int m;
    m= *a;
    *a= *b;
    *b= m;
    
    
}    
    
	
