#include <stdio.h>

int main() {
    float alas, tinggi, luas;

    printf("Masukkan alas: ");
    scanf("%f", &alas);

    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);

    luas = 0.5 * alas * tinggi;

    printf("Luas segitiga = %.2f", luas);

    return 0;
}