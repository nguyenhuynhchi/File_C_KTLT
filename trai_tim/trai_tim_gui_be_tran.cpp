#include <stdio.h>
void draw_heart( int m, int n);

void draw_heart (int m, int n)
{
     int i,j ;
	for(i=1;i<=m;i++)
	{  for(j=1;j<=n;j++)
       {
	    if(!((i==1  && (j<=4 || j>=7 && j<=11 || j>=14))
	       ||(i==2  && (j<=3 || j>=8 && j<=10 || j>=15))
	       ||(i==3  && (j<=2 || j==9 || j>=16))
	       ||(i==4  && (j==1 || j==17))
	       ||(i==9  && (j==1 || j==17))
	       ||(i==8  && (j>=4 && j<=13))
	       ||(i==10 && (j<=2 || j>=16))
	       ||(i==11 && (j<=3 || j>=15))
	       ||(i==12 && (j<=4 || j>=14))
	       ||(i==13 && (j<=5 || j>=13))
	       ||(i==14 && (j<=6 || j>=12))
	       ||(i==15 && (j<=7 || j>=11))
	       ||(i==16 && (j<=8 || j>=10))))
	           printf(" * ");
	    else if(  i==8 && j==4 )
	         printf(".K ");
		else if(  i==8 && j==5 )
	         printf(" h ");
		else if(  i==8 && j==6 )
	         printf(" a ");
		else if(  i==8 && j==7 )
	         printf(" n ");	 	        
	    else if(  i==8 && j==8 )
	         printf(" h ");
	         
	    else if(  i==8 && j==10 )
	         printf(" T ");
		else if(  i==8 && j==11 )
	         printf(" r ");
		else if(  i==8 && j==12 )
	         printf(" a ");
		else if(  i==8 && j==13 )
	         printf(" n.");	 	 	    
		
		else 
	           printf("   ");                             
		}
			   printf("\n"); 
	}	
}
int main ()
{
	int m = 16, n = 17;
	draw_heart(m, n);
	
 return 0;	
}
	
	
	
