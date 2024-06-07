#include <stdio.h>

int main() {
    int tienrut;
    printf("Nhap so tien can rut: ");
    scanf("%d", &tienrut);
    
    if(tienrut%10000!=0)
	{
	    do
	    {
			printf("\nSo tien rut phai la boi cua 10,000 dong: ");
			printf("\nVui long nhap lai: ");
			scanf("%d", &tienrut);    	
	    }while(tienrut%10000!=0);
	}

    int menh_gia[] = {500000, 200000, 100000, 50000, 20000, 10000};
    int soluong_menhgia = 6;
    int counts[soluong_menhgia];

    for (int i = 0; i < soluong_menhgia; i++) 
	{
        counts[i] = 0;
        while (tienrut >= menh_gia[i]) 
		{
            counts[i]++;
            tienrut -= menh_gia[i];
        }
    }

    printf("So to tien can rut theo tung menh gia:\n");
    for (int i = 0; i < soluong_menhgia; i++) 
	{
        printf("%d VND: %d\n", menh_gia[i], counts[i]);
    }

    return 0;
}
