 #include <stdio.h>
int nhapMang(int A[], int n);
int tinhTong(int A[], int n);
int main()
{
    	int n, A[n];
	
	// nhap va kiem tra n   
    	printf("Nhap vao so gia tri trong mang (0 < n < 20): ");
    	scanf("%d", &n);
    	if(n<=0||n>=20)
	{
    		do
		{
    			printf("Nhap lai (0 < n < 20):");
    			scanf("%d", &n);
    		}while(n<=0||n>=20);
    }
    
	nhapMang(A, n);
	
	//in ket qua tinh tong 
	printf("\nKet qua tinh tong cac gia tri trong mang: %d", tinhTong(A, n) );
    
	return 0;
}

//nhap gia tri mang
int nhapMang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap vao gia tri tai vi tri A[%d]:", i);
		scanf("%d", &A[i]);
	}
	
}

//tinh tong gia tri co chu so 5 trong mang
int tinhTong(int A[], int n)
{
	int i, du, nguyen, tong=0;
	for(i=0;i<n;i++)
	{
		int s=A[i], so5=0;
		while(s>0)
		{
			du=s%10;
			if(du==5)
			{
				so5++;break;	
			}
			nguyen=s/10;
			s=nguyen;
		} 	
		if(so5==1)
		{
			tong+=A[i];
		}
	}
	return tong;
}

