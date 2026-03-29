#include <stdio.h>

int faktorial(int n) {
    int i, hasil = 1;

    for (i = 1; i <= n; i++) {
        hasil = hasil * i;
    }
    return hasil;
}

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Hasil faktorial = %d\n", faktorial(n));
    return 0;
}