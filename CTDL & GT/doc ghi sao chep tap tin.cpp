#include <stdio.h>
#include <stdlib.h>
void ghitaptin(char *a,int n);
void doctaptin(char *a);
void copytaptin(char *a,char *a1,int m );

int main()
{
	char a[]="D:\\f0";
	char a1[]="D:\\f1";
	char a2[]="D:\\f2";
	int n,m;
	printf("Nhap vao n:");
	scanf("%d",&n);
		
	ghitaptin(a,n);
	printf("\nFILE a: ");
	
	doctaptin(a);
	
	printf("\nNhap phan tu can sao chep:");
	scanf("%d",&m);
	
	printf("\nFILE a1: ");
	copytaptin(a,a1,m);
	doctaptin(a1);

	
	return 0;
}
void ghitaptin(char *a,int n)
{	
	FILE *fp;
	fp=fopen(a,"wb");
		int x;
		for(int i=1;i<=n;i++)
		{
			printf("\nVi tri %d: ", i);
			scanf("%d",&x);
			fwrite(&x,sizeof(int),1,fp);
		}
		fclose(fp);	
}
void doctaptin(char *a)
{	
	FILE *fp;
	fp=fopen(a,"rb");	
		int x;
		fread(&x,sizeof(int),1,fp);
		while(!(feof(fp)))
		{
			printf("\t%d",x);
			fread(&x,sizeof(int),1,fp);
		}		
		fclose(fp);	
}
void copytaptin(char *a,char *a1,int m )
{
	FILE *fp;
	fp=fopen(a,"rb");
	FILE *fp1;
	fp1=fopen(a1,"wb");
		int x;
		int i=0;
		fread(&x,sizeof(int),1,fp);
		while(!(feof(fp)) && i<m)
		{
			fwrite(&x,sizeof(int),1,fp1);
			i++;
			fread(&x,sizeof(int),1,fp);			
		}
	fclose(fp);	
	fclose(fp1);	
	
}

void distribute(FILE *f0, FILE *f1, FILE *f2) {
    int count = 0;
    char c;
    while ((c = fgetc(f0)) != EOF) {
        if (count % 2 == 0) {
            fputc(c, f1);
        } else {
            fputc(c, f2);
        }
        count++;
    }
}


