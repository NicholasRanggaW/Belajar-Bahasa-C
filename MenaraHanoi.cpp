#include <stdio.h>

void Pindah(int J, char A, char B, char C) {
    if (J > 0) {
        Pindah(J - 1, A, C, B);
        printf("Pindahkan piringan dari tiang %c ke tiang %c\n", A, B);
        Pindah(J - 1, C, B, A);
    }
}

int main() {
    int J;

    printf("Masukkan jumlah piringan: ");
    scanf("%d", &J);
    Pindah(J, 'A', 'B', 'C');
    return 0;
}