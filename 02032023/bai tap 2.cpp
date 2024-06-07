#include <stdio.h>
void xuatmang(int a[][10], int m, int n);
int main()
{
	int a[10][10], dong, cot;
	
	FILE *fp;
	fp=fopen("output.txt", "rt");
	if(fp==NULL)
	{
		printf("Loi mo file!");
	}
	else
	{
		fscanf(fp, "%d %d", &dong, &cot);
		for(int i=0;i<dong;i++)
		{
			for(int j=0;j<cot;j++)
			{
				fscanf(fp,"%d\t",&a[i][j]);
			}
			fscanf(fp,"\n\n");
		}
	}
	fclose(fp);
	xuatmang(a,dong,cot);
	return 0;
}
void xuatmang(int a[][10],int m,int n)
{
	printf("\nMang vua nhap la:\n");
	printf("\nSo dong: %d", m);
	printf("\nSo cot: %d\n\n", n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
}

