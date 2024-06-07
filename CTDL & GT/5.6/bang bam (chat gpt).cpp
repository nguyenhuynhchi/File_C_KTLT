#include <stdio.h>

const int MAX_SIZE = 1000; // gi? d?nh s? lu?ng khóa t?i da là 1000

int hashTable[MAX_SIZE] = {0}; // kh?i t?o b?ng bam v?i giá tr? 0

// hàm bam h(k) = k mod M
int hash(int key, int tableSize) {
    return key % tableSize;
}

// hàm thêm khóa vào b?ng bam
bool insert(int key, int tableSize) {
    int index = hash(key, tableSize); // tính ch? s? hash cho khóa
    int i = 0;
    while (hashTable[(index + i) % tableSize] != 0) { // tìm v? trí tr?ng d? thêm khóa
        i++;
        if (i == tableSize) {
            return false; // b?ng bam dã d?y, không th? thêm khóa m?i
        }
    }
    hashTable[(index + i) % tableSize] = key; // thêm khóa vào b?ng bam
    return true;
}

// hàm tìm ki?m khóa trong b?ng bam
bool search(int key, int tableSize) {
    int index = hash(key, tableSize); // tính ch? s? hash cho khóa
    int i = 0;
    while (hashTable[(index + i) % tableSize] != 0) { // tìm khóa trong b?ng bam
        if (hashTable[(index + i) % tableSize] == key) {
            return true; // khóa du?c tìm th?y trong b?ng bam
        }
        i++;
        if (i == tableSize) {
            return false; // dã duy?t qua toàn b? b?ng bam mà không tìm th?y khóa
        }
    }
    return false;
}

int main() {
    int tableSize;
    printf("Nhap kich thuoc bang bam: ");
    scanf("%d", &tableSize); // nh?p kích thu?c b?ng bam t? bàn phím
    int n;
    printf("Nhap so luong khoa: ");
    scanf("%d", &n); // nh?p s? lu?ng khóa t? bàn phím

    // nh?p các khóa t? bàn phím và thêm vào b?ng bam
    for (int i = 0; i < n; i++) {
        int key;
        printf("Nhap khoa thu %d: ", i + 1);
        scanf("%d", &key);
        bool isSuccess = insert(key, tableSize);
        if (!isSuccess) {
            printf("Them khoa that bai vi bang bam da day.\n");
        }
    }

    // tìm ki?m các khóa trong b?ng bam
    int m;
    printf("Nhap so luong khoa can tim kiem: ");
    scanf("%d", &m); // nh?p s? lu?ng khóa c?n tìm ki?m t? bàn phím
    for (int i = 0; i < m; i++) {
        int key;
        printf("Nhap khoa thu %d can tim kiem: ", i + 1);
        scanf("%d", &key);
        bool isFound = search(key, tableSize);
        if (isFound) {
            printf("Khoa %d co trong bang bam.\n", key);
        } else {
            printf("Khoa %d khong co trong bang bam.\n", key);
        }
    }

    return 0;
}

