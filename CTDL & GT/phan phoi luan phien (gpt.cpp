#include <stdio.h>

void doc_tap_tin(FILE* f, int arr[], int n) {
    for(int i = 0; i < n; i++) {
        fread(&arr[i], sizeof(int), 1, f);
        printf("\t%d", arr[i]);
    }
}

void ghi_tap_tin(FILE* f, int arr[], int n) {
    for(int i = 0; i < n; i++) {
        fwrite(&arr[i], sizeof(int), 1, f);
    }
}

void phan_phoi_luan_phien(FILE* f0, FILE* f1, FILE* f2) {
    int n;
    int i = 0;
    while(fread(&n, sizeof(int), 1, f0) > 0) {
        if (i % 2 == 0) {
            fwrite(&n, sizeof(int), 1, f1);
        } else {
            fwrite(&n, sizeof(int), 1, f2);
        }
        i++;
    }
}

int main() {
    FILE* f0 = fopen("D:\\f0", "rb");
    FILE* f1 = fopen("D:\\f1", "wb");
    FILE* f2 = fopen("D:\\f2", "wb");

    if(f0 == NULL || f1 == NULL || f2 == NULL) {
        printf("Khong mo duoc tap tin\n");
        return 0;
    }

    int n;
    fread(&n, sizeof(int), 1, f0);

    int arr[n];
    
    printf("\nFILE F0:");
    doc_tap_tin(f0, arr, n);
    
    phan_phoi_luan_phien(f0, f1, f2);
    
    printf("\nFILE F1:");
    doc_tap_tin(f1, arr, n);
    
    printf("\nFILE F2:");
    doc_tap_tin(f2, arr, n);
    

    fclose(f0);
    fclose(f1);
    fclose(f2);
    return 0;
}

