#include <stdio.h>

int main() {
    int baris, kolom, i, j;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);

    printf("\nMatriks bintang:\n");

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}