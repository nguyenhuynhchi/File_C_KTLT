#include <stdio.h>

const int MAX_SIZE = 1000; // gi? d?nh s? lu?ng kh�a t?i da l� 1000

int hashTable[MAX_SIZE] = {0}; // kh?i t?o b?ng bam v?i gi� tr? 0

// h�m bam h(k) = k mod M
int hash(int key, int tableSize) {
    return key % tableSize;
}

// h�m th�m kh�a v�o b?ng bam
bool insert(int key, int tableSize) {
    int index = hash(key, tableSize); // t�nh ch? s? hash cho kh�a
    int i = 0;
    while (hashTable[(index + i) % tableSize] != 0) { // t�m v? tr� tr?ng d? th�m kh�a
        i++;
        if (i == tableSize) {
            return false; // b?ng bam d� d?y, kh�ng th? th�m kh�a m?i
        }
    }
    hashTable[(index + i) % tableSize] = key; // th�m kh�a v�o b?ng bam
    return true;
}

// h�m t�m ki?m kh�a trong b?ng bam
bool search(int key, int tableSize) {
    int index = hash(key, tableSize); // t�nh ch? s? hash cho kh�a
    int i = 0;
    while (hashTable[(index + i) % tableSize] != 0) { // t�m kh�a trong b?ng bam
        if (hashTable[(index + i) % tableSize] == key) {
            return true; // kh�a du?c t�m th?y trong b?ng bam
        }
        i++;
        if (i == tableSize) {
            return false; // d� duy?t qua to�n b? b?ng bam m� kh�ng t�m th?y kh�a
        }
    }
    return false;
}

int main() {
    int tableSize;
    printf("Nhap kich thuoc bang bam: ");
    scanf("%d", &tableSize); // nh?p k�ch thu?c b?ng bam t? b�n ph�m
    int n;
    printf("Nhap so luong khoa: ");
    scanf("%d", &n); // nh?p s? lu?ng kh�a t? b�n ph�m

    // nh?p c�c kh�a t? b�n ph�m v� th�m v�o b?ng bam
    for (int i = 0; i < n; i++) {
        int key;
        printf("Nhap khoa thu %d: ", i + 1);
        scanf("%d", &key);
        bool isSuccess = insert(key, tableSize);
        if (!isSuccess) {
            printf("Them khoa that bai vi bang bam da day.\n");
        }
    }

    // t�m ki?m c�c kh�a trong b?ng bam
    int m;
    printf("Nhap so luong khoa can tim kiem: ");
    scanf("%d", &m); // nh?p s? lu?ng kh�a c?n t�m ki?m t? b�n ph�m
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

