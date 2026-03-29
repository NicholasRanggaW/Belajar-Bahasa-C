#include <stdio.h>

void Pesan_Iteratif(int n) {
    int a;

    for (a = 1; a <= n; a++) {
        printf("Hallo, sehat selalu\n");
    }
}

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    Pesan_Iteratif(n);

    return 0;
}