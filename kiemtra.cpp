#include <stdio.h>
 void hoanvi(int *,int *);
 int main()
{   int a,b;
    a=4, b=5;
    hoanvi(&a,&b);
    printf("%4d %4d",&a, &b);
    return 0;
}
void hoanvi(int *x, int *y)
{   int temp;
    temp =* x;
    *x =* y;
    *y = temp;
}
