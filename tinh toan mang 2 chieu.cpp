#include <stdio.h>

void nhapMaTran(int a[][10], int sd, int sc);
void xuatMaTran(int a[][10], int sd, int sc);
void congMaTran(int a1[][10], int a2[][10], int sd, int sc);
void truMaTran(int a1[][10], int a2[][10], int sd, int sc);
void tichMaTran(int a1[][10], int a2[][10], int sd, int dc, int sc);

int main()
{
	int sodong, socot, socot1, sodong2;
	int list1[10][10];
	int list2[10][10];
	
	char calculation;
	begin:
	printf("\nChon phep toan (+, -, *): ");
	scanf("%c", &calculation);
	
	switch(calculation)
	{
		case '*':
			do
			{
				//dong va cot ma tran 1
				printf("\nNhap so dong va cot ma tran 1: ");
				printf("\nNhap so dong: ");
				scanf("%d", &sodong);
				printf("\nNhap so cot: ");
				scanf("%d", &socot1);
				
				//dong va cot ma tran 2
				printf("\nNhap so dong va cot ma tran 2: ");
				printf("\nNhap so dong: ");
				scanf("%d", &sodong2);
				printf("\nNhap so cot: ");
				scanf("%d", &socot);
				
				if(socot1!=sodong2)
				{
					printf("\n// LOI KICH THUOC// \nSo cot ma tran 1 phai bang so dong ma tran 2\n");
				}
			}while(socot1!=sodong2);
			
			//nhap gia tri dong va cot cho 2 ma tran
			printf("\nNhap cac gia tri cua ma tran 1: ");
			nhapMaTran(list1, sodong, socot1);
			
			printf("\nNhap cac gia tri cua ma tran 2: ");
			nhapMaTran(list2, sodong2, socot);			
			
			break;
			
		case '+': 
			//nhap so dong va cot cho 2 ma tran
			printf("\nNhap so dong: ");
			scanf("%d", &sodong);
		
			printf("\nNhap so cot: ");
			scanf("%d", &socot);
			
			//nhap gia tri dong va cot cho 2 ma tran
			printf("\nNhap cac gia tri cua ma tran 1: ");
			nhapMaTran(list1, sodong, socot);
			
			printf("\nNhap cac gia tri cua ma tran 2: ");
			nhapMaTran(list2, sodong, socot);

			break;
		
		default:
		goto begin;
		
		break;	
	}
	
	

	switch(calculation)
	{
		case '+':
		printf("\nKet qua cong 2 ma tran: \n\n");
		congMaTran(list1, list2, sodong, socot);
		break;
	
		case '-':
		printf("\nKet qua tru  2 ma tran: \n\n");
		truMaTran(list1, list2, sodong, socot);
		break;
		
		case '*':
		printf("\nKet qua tich 2 ma tran: \n\n");
		tichMaTran(list1, list2, sodong, socot1, socot); //socot1 = sodong2
	}
	
	return 0;
}


void nhapMaTran(int a[][10], int sd, int sc)
{
	for(int i=1; i<=sd; i++)
	{
		for(int j=1; j<=sc; j++)
		{
			printf("\n[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatMaTran(int a[][10], int sd, int sc)
{
	for(int i=1; i<=sd; i++)
	{
		for(int j=1; j<=sc; j++)
		{
			printf("\t%d", a[i][j]);			
		}
		printf("\n");
	}
}

void congMaTran(int a1[][10], int a2[][10], int sd, int sc)
{
	int a3[10][10];
	for(int i=1; i<=sd; i++)
	{
		for(int j=1; j<=sc; j++)
		{
			a3[i][j]=a1[i][j]+a2[i][j];
		}
	}
	xuatMaTran(a3, sd, sc);
}

void truMaTran(int a1[][10], int a2[][10], int sd, int sc)
{
	int a3[10][10];
	for(int i=1; i<=sd; i++)
	{
		for(int j=1; j<=sc; j++)
		{
			a3[i][j]=a1[i][j]-a2[i][j];
		}
	}
	xuatMaTran(a3, sd, sc);
}

void tichMaTran(int a1[][10], int a2[][10], int sd, int dc, int sc) //so cot ma tran a1 = so dong ma tran a2 (dc)
{
	int temp;
	int a3[10][10];
	for(int i=1; i<=sd; i++)
	{
		for(int j=1; j<=sc; j++)
		{
			a3[i][j]=0;
			for(int k=1; k<=dc; k++)
			{
				a3[i][j]+=a1[i][k]*a2[k][j];
			}
		}
	}
	xuatMaTran(a3, sd, sc);
}










