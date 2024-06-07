#include "stdio.h"
int main()
{    int a[]={3,5,7,8};
     int *pa=a;
      printf("%d %d %d %d",a[1],*(pa+1),*pa,a[0]);
 return 0;
}
