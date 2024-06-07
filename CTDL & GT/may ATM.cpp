#include <stdio.h>

int main() {
    int tien_rut, dem500k, dem200k, dem100k, dem50k, dem20k, dem10k;
	printf("Nhap so tien can rut: ");
    scanf("%d", &tien_rut);
	if(tien_rut%10000!=0)
	{
	    do
	    {
			printf("\nSo tien rut phai la boi cua 10,000 dong: ");
			printf("\nVui long nhap lai: ");
			scanf("%d", &tien_rut);    	
	    }while(tien_rut%10000!=0);
	}

    dem500k = tien_rut / 500000;
    tien_rut = tien_rut % 500000;
    
    dem200k = tien_rut / 200000;
    tien_rut = tien_rut % 200000;
    
    dem100k = tien_rut / 100000;
    tien_rut = tien_rut % 100000;
    
	dem50k = tien_rut / 50000;
	tien_rut = tien_rut % 50000;
    
	dem20k = tien_rut / 20000;
    tien_rut = tien_rut % 20000;
    
	dem10k = tien_rut / 10000;
	tien_rut = tien_rut % 10000;
	
    printf("So to 500,000 dong: %d\n", dem500k);
    printf("So to 200,000 dong: %d\n", dem200k);
    printf("So to 100,000 dong: %d\n", dem100k);
    printf("So to 50,000 dong: %d\n", dem50k);
	printf("So to 20,000 dong: %d\n", dem20k);
	printf("So to 10,000 dong: %d\n", dem10k);
	
    return 0;
}
