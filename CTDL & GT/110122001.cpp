#include <stdio.h>

void write(char *fname, int m);
void read(char *fname);
void copyFile(char *fname0, char *fname1, int n);

int main()
{
	int m, n;
	char f0[]="D:\\f0";
	char f1[]="D:\\f1";
	printf("\nNhap m phan tu so nguyen: ");
	scanf("%d", &m);
	
	write(f0, m);
	printf("\nFILE F0: ");
	read(f0);
	
	
	printf("\nNhap so phan tu can sao chep: ");
	scanf("%d", &n);
	copyFile(f0, f1, n);
	printf("\nFILE f1: ");
	read(f1);
	return 0;
}

void write(char *fname, int m)
{
	int a;
	FILE *fp=fopen(fname,"wb");
	
	if(fp==NULL)
	{
		printf("\nLOI MO FILE");
	}
	else
	{		
		for(int i=1; i<=m; i++)
		{
			printf("\nSo thu %d: ", i);
			scanf("%d", &a);
			fwrite(&a, sizeof(int), 1, fp);
		}
	}
	fclose(fp);
}

void read(char *fname)
{
	int a;
	FILE *fp=fopen(fname,"rb");
	
	if(fp==NULL)
	{
		printf("\nLOI MO FILE");
	}
	else
	{
		fread(&a, sizeof(int), 1, fp);
		while(!feof(fp))
		{
			printf("\t%d", a);
			fread(&a, sizeof(int), 1, fp);
		}
	}
	fclose(fp);
}

void copyFile(char *fname0, char *fname1, int n)
{
	FILE *f0=fopen(fname0,"rb");
	FILE *f1=fopen(fname1,"wb");
	int a;
	int i=1;
	fread(&a, sizeof(int), 1, f0);
	while(!(feof(f0))&&(i<=n))
	{
		fwrite(&a, sizeof(int), 1, f1);
		i++;
		fread(&a, sizeof(int), 1, f0);
	}
	fclose(f0);
	fclose(f1);
}





