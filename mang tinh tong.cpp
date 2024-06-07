#include <stdio.h>
#define N 20
int sum(int arr[],int n);
int main()
{
	int n;
	int arr[N];
	MOC:
		printf("ENTER N : ");
		scanf("%d",&n);
	if(n<0||n>20) goto MOC;
	for(int i=0;i<n;i++)
	{
		printf("A[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("ANSWER : %d",sum(arr,n));
	return 0;
}
int sum(int arr[],int n)
{
	int tong=0; int du,nguyen;
	for (int i=0; i<n; i++)
	{
		int s=arr[i]; int soSo5=0;
		while(s!=0)
		{
			du=s%10;
			if(du==5)
			{
				soSo5+=1; break;
			}
			nguyen=s/10;
			s=nguyen;
		}
		if(soSo5==1)
		{
			tong+=arr[i];
		}
	}
	return tong;
}





