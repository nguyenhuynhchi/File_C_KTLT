#include <stdio.h>

void write(char *fname, int m);
void read(char *fname);
void phan_phoi_luan_phien(char *fname0, char *fname1, char *fname2) ;
void tronRun(char *fname0, char *fname1, char *fname2) ;

int main()
{
	int m, n;
	char f0[]="D:\\f0";
	char f1[]="D:\\f1";
	char f2[]="D:\\f2";
	
	// nhap so phan tu 
	printf("\nNhap m phan tu so nguyen: ");
	scanf("%d", &m);
	
	write(f0, m);
	printf("\nFILE F0: ");
	read(f0);
	
	//phan phoi luan phien tu tap tin f0 vao tap tin f1 va f2
	phan_phoi_luan_phien(f0, f1, f2);
	printf("\nPhuong phap phan phoi luan phien: ");
	printf("\nFILE F1: ");
	read(f1);
	printf("\nFILE F2: ");
	read(f2);
	
	printf("\n=================================================");
	
	//Phuong phap tron lan luot run tu nhien tu tap tin f1 va f2 vao tap tin f0
	tronRun(f0, f1, f2);
	printf("\nPhuong phap tron lan luot run tu nhien: ");
	printf("\nFILE F0: ");
	read(f0);


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


void phan_phoi_luan_phien(char *fname0, char *fname1, char *fname2) 
{
    	FILE *f0=fopen(fname0,"rb");
	FILE *f1=fopen(fname1,"wb");
    	FILE *f2=fopen(fname2,"wb");
	
	int a;
    	int i = 1;
    
	fread(&a, sizeof(int), 1, f0);
    	while(!(feof(f0))) 
	{
     	fread(&a, sizeof(int), 1, f0);
     	if (i % 2 == 0) 
		{
			fread(&a, sizeof(int), 1, f0);
          	fwrite(&a, sizeof(int), 1, f1);
     	} 
		else 
		{
			fread(&a, sizeof(int), 1, f0);
          	fwrite(&a, sizeof(int), 1, f2);
     	}
     	i++;
	}
    
    	fclose(f0);
	fclose(f1);
	fclose(f2);
}

void tronRun(char *fname0, char *fname1, char *fname2) 
{
    int num1, num2;
    FILE *f1 = fopen(fname1, "rb");
    FILE *f2 = fopen(fname2, "rb");
    FILE *f0 = fopen(fname0, "wb");

    if(f1 == NULL || f2 == NULL || f0 == NULL) 
	{
     	printf("\nLOI MO FILE");
	}
     else 
	{
     	// Doc gia tri dau tien cua 2 taptin f1 và f2
     	fread(&num1, sizeof(int), 1, f1);
     	fread(&num2, sizeof(int), 1, f2);

     	// Tron lan luot tung so tu hai tap tin cho den khi ket thúc
     	while (!feof(f1) && !feof(f2)) 
		{
          	if (num1 < num2) 
			{
          		fwrite(&num1, sizeof(int), 1, f0);
               	fread(&num1, sizeof(int), 1, f1);
            	}
			else
			{
               	fwrite(&num2, sizeof(int), 1, f0);
               	fread(&num2, sizeof(int), 1, f2);
          	}
     	}

     	// Ðua toàn bo so còn lai tu tap tin f1 vào f0 neu f2 dã ket thúc
     	while (!feof(f1)) 
		{
          	fwrite(&num1, sizeof(int), 1, f0);
          	fread(&num1, sizeof(int), 1, f1);
     	}

     	// Ðua toàn bo so còn lai tu tap tin f2 vào f0 neu f1 dã ket thúc
     	while (!feof(f2)) 
		{
          	fwrite(&num2, sizeof(int), 1, f0);
          	fread(&num2, sizeof(int), 1, f2);
     	}
	}

    	fclose(f1);
   	fclose(f2);
	fclose(f0);
}



