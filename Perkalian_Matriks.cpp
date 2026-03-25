#include <stdio.h>

int main() {
    int A[10][10], B[10][10], ab[10][10];
    int barisA, kolomA, barisB, kolomB;

    printf("PERKALIAN MATRIKS\n");
    printf("Masukkan ukuran matriks A (Gunakan spasi untuk input Baris & Kolom): ");
    scanf("%d %d", &barisA, &kolomA);
    printf("Masukkan ukuran matriks B (Gunakan spasi untuk input Baris & Kolom): ");
    scanf("%d %d", &barisB, &kolomB);

    printf("--------------------------------------------------------------------\n");
    if (kolomA != barisB) {
        printf("\nPerkalian ini tidak dapat dilakukan!\n");
        printf("Karena Perkalian memiliki syarat yaitu jumlah kolom matriks A harus sama dengan jumlah baris matriks B.\n");
        return 0;
    }

    printf("Masukkan elemen matriks A:\n");
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            printf("A[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Masukkan elemen matriks B:\n");
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            printf("B[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            ab[i][j] = 0;
            for (int k = 0; k < kolomA; k++) {
                ab[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\n--------------------------------------------------------------------\n");
    printf("Hasil Perkalian\n");
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            printf("%4d", ab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
