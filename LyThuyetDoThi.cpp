#include<stdio.h>
#include<stdlib.h>
int a[10][10],n;

void docFile()
{
	FILE *f;
	
	f=fopen("mt.txt","rb");
	
	if(f==NULL)
	{
		printf("Khong tim thay tap tin!");
		exit(0);
	}
	else
	{
		fscanf(f,"%d",&n);
		for(int i=1;i<=n;i++) 
		{
			for(int j=1;j<=n;j++)
			{
				fscanf(f,"%d",&a[i][j]);
			}
		}
	}
	fclose(f);
}

void inFile()
{
	printf("Ma Tran ke:\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void kiemTraMT(int a[10][10],int n)
{
	int DoThiFake=0;
	int DonDT=0;
	int CoHuong=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j && a[i][j]!=0)
			{
				DoThiFake++;
			}
			
			if(i!=j && a[i][j]!=a[j][i])
			{
				CoHuong++;
			}
			
			if(i!=j && a[i][j]>1)
			{
				DonDT++;
			}
			
		
		}
	}
	
	if(CoHuong==0 && DoThiFake!=0)
	{
		printf("Ten: Gia do thi.");
	}
	else
	{
		if(DonDT==0)
		{
			printf("Ten: Don do thi ");
		}
		else
		{
			printf("Ten: Da do thi ");
		}
		
		if(CoHuong!=0)
		{
			printf("co huong.\n");
		}
		else
		{
			printf("vo huong.\n");
		}
	}
}

int main() {
	docFile();
	inFile();
	kiemTraMT(a,n);
	return 0;
}
