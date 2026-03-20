#include <stdio.h>

int main() {
    int n, i;
    int faktorial = 1;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    printf("\nProses perhitungan:\n");

    for (i = 1; i <= n; i++) {
        printf("%d", i);

        if (i < n) {
            printf(" x ");
        }

        faktorial *= i;
    }

    printf(" = %d", faktorial);

    printf("\n\nHasil Faktorial = %d", faktorial);

    return 0;
}