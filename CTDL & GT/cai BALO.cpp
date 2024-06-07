#include <stdio.h>

int main()
 {
    int n, W;
    printf("Nhap so luong do vat: ");
    scanf("%d", &n);
    printf("Nhap khoi luong toi da cua ba lo: ");
    scanf("%d", &W);

    int weights[n], values[n];
    printf("Nhap khoi luong va gia tri cua tung do vat:\n");
    
    for (int i = 0; i < n; i++) 
	{
        printf("Do vat %d: ", i + 1);
        scanf("%d %d", &weights[i], &values[i]);
    }

    int dp[n + 1][W + 1];
    
    for (int i = 0; i <= n; i++) 
	{
        for (int j = 0; j <= W; j++) 
		{
            if (i == 0 || j == 0) 
			{
                dp[i][j] = 0;
            }
            
			else if (weights[i - 1] <= j) 
			{
                dp[i][j] = (values[i - 1] + dp[i - 1][j - weights[i - 1]]) > dp[i - 1][j] ? (values[i - 1] + dp[i - 1][j - weights[i - 1]]) : dp[i - 1][j];
            }
            
			else 
			{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    printf("Gia tri lon nhat cua cac do vat co the chua duoc trong ba lo la: %d", dp[n][W]);

    return 0;
}
