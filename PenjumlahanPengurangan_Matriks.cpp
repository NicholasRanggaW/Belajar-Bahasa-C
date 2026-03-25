#include <stdio.h>

int main() {
    int A[10][10], B[10][10], a[10][10], b[10][10];
    int baris, kolom;

    printf("PENJUMLAHAN & PENGURANGAN MATRIKS\n");
    printf("Masukkan jumlah baris : ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom : ");
    scanf("%d", &kolom);

    printf("--------------------------------------------------------------------\n");
    printf("Masukkan elemen matriks A:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("A[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Masukkan elemen matriks B:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("B[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("--------------------------------------------------------------------\n");
    printf("Hasil Penjumlahan \n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            a[i][j] = A[i][j] + B[i][j];
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("Hasil Pengurangan \n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            b[i][j] = A[i][j] - B[i][j];
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
