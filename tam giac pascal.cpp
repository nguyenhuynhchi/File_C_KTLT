#include <stdio.h>

int main() {
    int numRows;
    printf("Nh?p s? hàng c?a tam giác Pascal: ");
    scanf("%d", &numRows);

    int pascal[numRows][numRows];

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
