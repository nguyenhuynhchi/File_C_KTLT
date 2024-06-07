#include <stdio.h>
#include <string.h>

// Khai báo c?u trúc SinhVien
struct SinhVien
{
    char mssv[10];
    char hoTen[30];
    int namSinh;
    char maLop[10];
};

// Hàm nh?p thông tin SinhVien
void nhapThongTinSV(SinhVien &sv)
{
    printf("Nhap MSSV: ");
    fflush(stdin);
    gets(sv.mssv);
    printf("Nhap ho ten: ");
    gets(sv.hoTen);
    printf("Nhap nam sinh: ");
    scanf("%d", &sv.namSinh);
    fflush(stdin);
    printf("Nhap ma lop: ");
    gets(sv.maLop);
}

// Hàm xu?t thông tin SinhVien
void xuatThongTinSV(SinhVien sv)
{
    printf("%-10s %-30s %-4d %-10s\n", sv.mssv, sv.hoTen, sv.namSinh, sv.maLop);
}

int main()
{
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    SinhVien dsSinhVien[n];

    // Nh?p thông tin sinh viên
    for (int i = 0; i < n; i++)
    {
        printf("\n--- Nhap thong tin sinh vien thu %d ---\n", i + 1);
        nhapThongTinSV(dsSinhVien[i]);
    }

    // Xu?t thông tin sinh viên
    printf("\nDanh sach sinh vien:\n");
    printf("%-10s %-30s %-10s %-10s\n", "MSSV", "Ho va ten", "Nam sinh", "Ma lop");
    for (int i = 0; i < n; i++)
    {
        xuatThongTinSV(dsSinhVien[i]);
    }

    return 0;
}
