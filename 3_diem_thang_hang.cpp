#include <stdio.h>
int baDiemThangHang (int a1, int a2, int b1, int b2, int c1, int c2);
int main ()
{
 int a1,a2,b1,b2,c1,c2;
    printf("nhap toa do 3 diem:\n");
    printf("  A:\n");
    scanf("%d",&a1);scanf("%d",&a2);
    printf("  B:\n");
    scanf("%d",&b1);scanf("%d",&b2);
    printf("  C:\n");
    scanf("%d",&c1);scanf("%d",&c2);
  baDiemThangHang(a1,a2,b1,b2,c1,c2);
   return 0;
}

int baDiemThangHang (int a1, int a2, int b1, int b2, int c1, int c2)
{
  float K,L,  M,N,O,P;
  //vector AB
  M= b1-a1;
  N= b2-a2;
  //vector BC
  O= c1-b1;
  P= c2-b2;
  printf("    vector AB= (%2.0f,%2.0f)\n", M, N);
  printf("    vector BC= (%2.0f,%2.0f)\n", O, P);
  
  // M/O = N/P => cùng phuong
  K= M/O;
  L= N/P;
  
  if(K == L)
  {
     printf("  ==> AB = %.0fBC \n", K);
     printf("vi vector AB va BC cung phuong \n   ==> 3 diem A B C thang hang");
  }
  else
  printf("vi vector AB va BC khong cung phuong \n   ==> 3 diem A B C khong thang hang");
  return 0;	
}
