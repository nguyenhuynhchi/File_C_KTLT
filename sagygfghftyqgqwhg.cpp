#include<stdio.h>
#include<string.h>
typedef struct HOCPHAN
{
	char mahocphan[7];
	char tenhocphan[30];
	int tinhtrangtailieu;
	int hocki;
	int tinchilythuyet;
	int tinchithuchanh;
}HP;
void NhapHocPhan(HP *hp);
void NhapNhieuHocPhan(HP hp[],int n);
void TinChiCaoNhat(HP hp[],int n);
void TinChiThapNhat(HP hp[],int n);
void HocPhancoTLGD(HP hp[],int n);
int main()
{
	int n;
	do
	{
		printf("Nhap so hoc phan 0<n<30:");
		scanf("%d",&n);
	}while(n<=0||n>=30);
	HP hp[n];
	NhapNhieuHocPhan(hp,n);
	TinChiCaoNhat(hp,n);
	TinChiThapNhat(hp,n);
	HocPhancoTLGD(hp,n);
	return 0;
}
void NhapHocPhan(HP *hp)
{
	printf("Nhap ma hoc phan:");
	fflush(stdin);
	scanf("%s",hp->mahocphan);
	printf("Nhap ten hoc phan:");
	fflush(stdin);
	gets(hp->tenhocphan);
	do
	{
		printf("Nhap tinh trang tai lieu (Co:1,Khong:0):");
		scanf("%d",&hp->tinhtrangtailieu);
	}while((hp->tinhtrangtailieu)!=1&&(hp->tinhtrangtailieu)!=0);
	printf("Nhap so tin chi ly thuyet:");
	scanf("%d",&hp->tinchilythuyet);
	printf("Nhap so tin chi thuc hanh:");
	scanf("%d",&hp->tinchithuchanh);
	do
	{
		printf("Nhap hoc ki to chuc hoc phan:");
		scanf("%d",&hp->hocki);
	}while((hp->hocki)>8||(hp->hocki)<=0);
}
void NhapNhieuHocPhan(HP hp[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		NhapHocPhan(&hp[i]);
	}
}
void TinChiCaoNhat(HP hp[],int n)
{
	int i,max;
	for(i=1;i<=n;i++)
	{
		max=hp[1].tinchilythuyet+hp[1].tinchithuchanh;
		if(max<hp[i].tinchilythuyet+hp[i].tinchithuchanh)	
		{
			max=hp[i].tinchilythuyet+hp[i].tinchithuchanh;
		}
	}
	printf("\n\nTHONG TIN HOC PHAN CO TIN CHI CAO NHAT:\n");
	for(i=1;i<=n;i++)
	{
		if(max==hp[i].tinchilythuyet+hp[i].tinchithuchanh)
		{
			printf("Ma hoc phan:%s\nTen hoc phan:%s\n",hp[i].mahocphan,hp[i].tenhocphan);
			printf("Tinh trang tai lieu giang day:");
			if(hp[i].tinhtrangtailieu==1)
			{
				printf("Co\n");
			}
			else
			{
				printf("Khong\n");
			}
				printf("So tin chi ly thuyet:%d\nSo tin chi thuc hanh:%d\nHoc phan duoc to chuc tai hoc ki:%d\n",hp[i].tinchilythuyet,hp[i].tinchithuchanh,hp[i].hocki);
		}	
	}
}
void TinChiThapNhat(HP hp[],int n)
{
	int i,min;
	for(i=1;i<=n;i++)
	{
		min=hp[1].tinchilythuyet+hp[1].tinchithuchanh;
		if(min>hp[i].tinchilythuyet+hp[i].tinchithuchanh)	
		{
			min=hp[i].tinchilythuyet+hp[i].tinchithuchanh;
		}
	}
	printf("\nTHONG TIN HOC PHAN CO TIN CHI THAP NHAT:\n");
	for(i=1;i<=n;i++)
	{
		if(min==hp[i].tinchilythuyet+hp[i].tinchithuchanh)
		{
			printf("Ma hoc phan:%s\nTen hoc phan:%s\n",hp[i].mahocphan,hp[i].tenhocphan);
			printf("Tinh trang tai lieu giang day:");
			if(hp[i].tinhtrangtailieu==1)
			{
				printf("Co\n");
			}
			else
			{
				printf("Khong\n");
			}
				printf("So tin chi ly thuyet:%d\nSo tin chi thuc hanh:%d\nHoc phan duoc to chuc tai hoc ki:%d\n",hp[i].tinchilythuyet,hp[i].tinchithuchanh,hp[i].hocki);
		}	
	}
}
void HocPhancoTLGD(HP hp[],int n)
{
	int i;
	printf("\nTHONG TIN HOC PHAN CO TAI LIEU GIANG DAY:\n");
	for(i=1;i<=n;i++)
	{
		if(hp[i].tinhtrangtailieu==1)
		{
			printf("Ma hoc phan:%s\nTen hoc phan:%s\n",hp[i].mahocphan,hp[i].tenhocphan);
			printf("Tinh trang tai lieu giang day:");
			if(hp[i].tinhtrangtailieu==1)
			{
				printf("Co\n");
			}
			else
			{
				printf("Khong\n");
			}
				printf("So tin chi ly thuyet:%d\nSo tin chi thuc hanh:%d\nHoc phan duoc to chuc tai hoc ki:%d\n",hp[i].tinchilythuyet,hp[i].tinchithuchanh,hp[i].hocki);
		}	
	}
}
void HocPhanToChucHKX(HP hp[],int n)
{
	int i;
	int x=2;
	printf("\nTHONG TIN HOC PHAN DUOC TO CHUC TAI HOC KI %d:\n",x);
	for(i=1;i<=n;i++)
	{
		if(hp[i].hocki==x)
		{
			printf("Ma hoc phan:%s\nTen hoc phan:%s\n",hp[i].mahocphan,hp[i].tenhocphan);
			printf("Tinh trang tai lieu giang day:");
			if(hp[i].tinhtrangtailieu==1)
			{
				printf("Co\n");
			}
			else
			{
				printf("Khong\n");
			}
				printf("So tin chi ly thuyet:%d\nSo tin chi thuc hanh:%d\nHoc phan duoc to chuc tai hoc ki:%d\n",hp[i].tinchilythuyet,hp[i].tinchithuchanh,hp[i].hocki);
		}
	}
}

