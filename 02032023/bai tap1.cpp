#include <stdio.h>
void nhapmang(int a[][10],int m, int n);
void xuatmang(int a[][10],int m, int n);
int main()
{
	int dong, cot, a[10][10];
	do
	{
		printf("\nNhap so dong: "); 
		scanf("%d", &dong);
	}while(dong<=0||dong>10);
	do
	{
		printf("\nNhap so cot: "); 
		scanf("%d", &cot);
	}while(cot<=0||cot>10);
	nhapmang(a, dong, cot);
	
	FILE *fp;
	fp=fopen("output.txt", "w+");
	if(fp==NULL)
	{
		printf("LOI MO FILE.");
	}
	else 
	{
		fprintf(fp, "%d %d\n", dong, cot);
		for(int i=0; i<dong; i++)
		{
			for(int j=0; j<cot; j++)
			{
				fprintf(fp, "%d\t", a[i][j]);
			}
			fprintf(fp, "\n\n");
		}
	}
	fclose(fp);
	xuatmang(a, dong, cot);
	return 0;
}
void nhapmang(int a[][10], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("\na[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatmang(int a[][10],int dong,int cot)
{
	printf("\nMang vua nhap la:\n");
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}

