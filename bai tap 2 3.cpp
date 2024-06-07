#include<stdio.h>
#include<string.h>
void ghi(char vanban[]);
void demKiTu(char vanban[]);
void demKhoangTrang(char vanban[]);
int kiemTra(char c);
int main()
{
	char vanban[300];
	printf("Nhap van ban:");
	fflush(stdin);
	gets(vanban);
	ghi(vanban);
	demKiTu(vanban);
	demKhoangTrang(vanban);
	return 0;
}
void ghi(char vanban[])
{
	FILE *f=fopen("output.txt","wt");
	if(f==NULL)
	{
		printf("Loi mo file");
	}
	else
	{
		fprintf(f,vanban);
		fclose(f);
	}
}
void demKiTu(char vanban[])
{
	char s[300];
	int dem=0,i;
	FILE *f=fopen("output.txt","rt");
	if(f==NULL)
	{
		printf("Loi mo file");
	}
	else
	{
			fgets(s,300,f);
			for(i=0;i<strlen(s);i++)
			{
				if(s[i]!=' ')
				{
					dem++;
				}
			}
			printf("So ki tu la:%d\n",dem);
		fclose(f);
	}
}
void demKhoangTrang(char vanban[])
{
	char s[300];
	int sotu=0,sodong=0,i,size;
	FILE *f=fopen("output.txt","rt");
	if(f==NULL)
	{
		printf("Loi mo file");
	}
	else
	{
		while(fgets(s,300,f))
		{
			sodong++;
		}
		size=strlen(s);
		for(i=0;i<size-1;i++)
		{
			if(!kiemTra(s[i])&&kiemTra(s[i+1])||!kiemTra(s[i])&&!kiemTra(s[i+1])&&i+1==size-1)
			{
				sotu++;
			}
		}
		printf("So tu:%d\nSo dong:%d",sotu,sodong);
		fclose(f);
	}
}
int kiemTra(char c)
{
	return (c==' ');
}
