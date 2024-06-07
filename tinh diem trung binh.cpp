#include<stdio.h>
int main()
{
	float toan, ly, hoa;
	float dtb;
	printf("\nNhap vao diem cac mon:");
	
	printf("\nToan: ");
	scanf("%f", &toan);
	if(toan>10||toan<0)
	{
		do
		{
			printf("\nNhap lai diem toan (0 <= toan <=10): ");
			scanf("%f", &toan);
		}while(toan>10||toan<0);
	}
	
	printf("\nLy: ");
	scanf("%f", &ly);
	if(ly>10||ly<0)
	{
		do
		{
			printf("\nNhap lai diem ly (0 <= ly <=10): ");
			scanf("%f", &ly);
		}while(ly>10||ly<0);
	}
	
	printf("\nHoa: ");
	scanf("%f", &hoa);
	if(hoa>10||hoa<0)
	{
		do
		{
			printf("\nNhap lai diem hoa (0 <= hoa <=10): ");
			scanf("%f", &hoa);
		}while(hoa>10||hoa<0);
	}
	
	dtb=(toan*2+ly+hoa)/4;
	if(dtb<5)
	{
		printf("/nDiem trung binh: %.2f", dtb);
		printf("\n  -> CHUA DAT");
	}
	else
	{
		printf("/nDiem trung binh: %.2f", dtb);
		printf("\n  -> DAT");
	}
	return 0;
}


