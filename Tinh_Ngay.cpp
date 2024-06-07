#include<stdio.h>
int soNamBangNhau(int d, int m, int y, int d0, int m0, int y0, int month[] );
int soNamKhongBangNhau(int d, int m, int y, int d0, int m0, int y0, int month[]);
int main()
{
	int sng0, st0, sn0, sng, st, sn;
//	sng: so ngay; st: so thang; sn: so nam
	
//	ngay bat dau 
	printf("Nhap ngay thang nam bat dau. ");	
	
	printf("\n  So nam(0 < nam): ");
	scanf("%d", &sn0);
	if(sn0<=0)
	{
		do
		{
			printf("Nhap lai so nam(0 < nam): ");
			scanf("%d", &sn0);
		}while(sn0<=0);	
	}
	
	printf("  So thang(0 < thang <= 12): ");
	scanf("%d", &st0);
	if(st0<=0||st0>12)
	{
		do
		{
			printf("Nhap lai so thang(0 < thang <= 12): ");
			scanf("%d", &st0);
		}while(st0<=0||st0>12);
	}

	if(st0==1 || st0==3 || st0==5 || st0==7 || st0==8 || st0==10 || st0==12)
	{
		printf("  So ngay(0 < ngay <= 31): ");
		scanf("%d", &sng0);
		if(sng0<=0||sng0>31)
		{
			do
			{
				printf("Nhap lai so ngay(0 < ngay <= 31): ");
				scanf("%d", &sng0);
			}while(sng0<=0||sng0>31);
		}
	}
	else if(st0==2)
	{
		if(sn0%4!=0)
		{
			printf("  So ngay(0 < ngay <= 28): ");
			scanf("%d", &sng0);
			if(sng0<=0||sng0>28)
			{
				do
				{
					printf("Nhap lai so ngay(0 < ngay <= 28): ");
					scanf("%d", &sng0);
				}while(sng0<=0||sng0>28);
			}
		}
		
		else if(sn0%4==0)
		{
			printf("  So ngay(0 < ngay <= 29): ");
			scanf("%d", &sng0);
			if(sng0<=0||sng0>29)
			{
				do
				{
					printf("Nhap lai so ngay(0 < ngay <= 29): ");
					scanf("%d", &sng0);
				}while(sng0<=0||sng0>29);
			}
		}
	}
	
	else
	{
		printf("  So ngay(0 < ngay <= 30): ");
		scanf("%d", &sng0);
		if(sng0<=0||sng0>30)
		{
			do
			{
				printf("Nhap lai so ngay(0 < ngay <= 30): ");
				scanf("%d", &sng0);
			}while(sng0<=0||sng0>30);
		}
	}	
	
//	ngay ket thuc
	printf("\nNhap ngay thang nam ket thuc.");
	
	printf("\n  So nam(0 < nam): ");
	scanf("%d", &sn);
	if(sn<=0)
	{
		do
		{
			printf("Nhap lai so nam(0 < nam > nam bat dau): ");
			scanf("%d", &sn);
		}while(sn<=0 && sn<sn0);	
	}
	
	printf("  So thang(0 < thang <= 12): ");
	scanf("%d", &st);
	if(st<=0||st>12)
	{
		do
		{
			printf("Nhap lai so thang(0 < thang <= 12): ");
			scanf("%d", &st);
		}while(st<=0||st>12);
	}

	if(st==1 || st==3 || st==5 || st==7 || st==8 || st==10 || st==12)
	{
		printf("  So ngay(0 < ngay <= 31): ");
		scanf("%d", &sng);
		if(sng<=0||sng>31)
		{
			do
			{
				printf("Nhap lai(0 < ngay <= 31): ");
				scanf("%d", &sng);
			}while(sng<=0||sng>31);
		}
	}
	else if(st==2)
	{
		if(sn%4!=0)
		{
			printf("  So ngay(0 < ngay <= 28): ");
			scanf("%d", &sng);
			if(sng<=0||sng>28)
			{
				do
				{
					printf("Nhap lai so ngay(0 < ngay <= 28): ");
					scanf("%d", &sng);
				}while(sng<=0||sng>28);
			}
		}
		
		else if(sn%4==0)
		{
			printf("  So ngay(0 < ngay <= 29): ");
			scanf("%d", &sng);
			if(sng<=0||sng>29)
			{
				do
				{
					printf("Nhap lai so ngay(0 < ngay <= 29): ");
					scanf("%d", &sng);
				}while(sng<=0||sng>29);
			}
		}
	}
	
	else
	{
		printf("  So ngay(0 < ngay <= 30): ");
		scanf("%d", &sng);
		if(sng<=0||sng>30)
		{
			do
			{
				printf("Nhap lai so ngay(0 < ngay <= 30): ");
				scanf("%d", &sng);
			}while(sng<=0||sng>30);
		}
	}
	
	int	thang[]={31,28,31,30,31,30,31,31,30,31,30,31};
//nam k nhuan       1  2  3  4  5  6  7  8  9 10 11 12
		
/*	int	thangN[]={31,29,31,30,31,30,31,31,30,31,30,31};
//nam nhuan          1  2  3  4  5  6  7  8  9 10 11 12    */	
	
	
//	so nam bang nhau 
	if(sn0==sn)
	{
		printf("So ngay chenh lech la: %d", soNamBangNhau(sng, st, sn, sng0, st0, sn0, thang));
	}

//	so nam khong bang nhau 
	if(sn0<sn) 
	{
		printf("So ngay chenh lech la: %d", soNamKhongBangNhau(sng, st, sn, sng0, st0, sn0, thang));
	}
	
	return 0;
}

int soNamBangNhau(int d, int m, int y, int d0, int m0, int y0, int month[])
{
	int sum=0;
	int i;
	if(y0%4==0)
	{
		month[1]=29;
	}
	else if(y0%4!=0)
	{
		month[1]=28;
	}
	
	int sngbd=month[m0-1]-d0;
	sum=sum+sngbd;
	
	for(i=m0; i<m; i++)
		{
			sum=sum+month[i];
		}
	sum=sum-(month[m-1]-d);
	return sum;
}

int soNamKhongBangNhau(int d, int m, int y, int d0, int m0, int y0, int month[])
{
	int sum=0;
	int i;
	
	if(y0%4==0)
	{
		month[1]=29;
	}
	else if(y0%4!=0)
	{
		month[1]=28;
	}

//	so ngay cua thang dau	
	int sngbd=month[m0-1]-d0;
	sum=sum+sngbd;
	
	for(i=m0; i<=11; i++)
	{		
		sum=sum+month[i];
	}
	
	y0=y0+1;	
		
	while(y0<y)
	{
	//cong so ngay cac nam giua
	
	//	nam khong nhuan
		if(y0%4!=0)
		{
			sum+=364;
		}
			
	//	nam nhuan
		else if(y0%4==0)
		{  
			sum+=365;
		}
		y0++;
	}
		
	if(y0==y)
	{	
		if(y0%4==0)
		{
			month[1]=29;
		}
		
		else if(y0%4!=0)
		{
			month[1]=28;
		}

		for(i=0; i<m; i++)		
		{
			sum=sum+month[i];
		}
	
		sum=sum-(month[m-1]-d);
	}
	
	return sum;
}
















