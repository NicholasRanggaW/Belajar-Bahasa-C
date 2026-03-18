#include <stdio.h>

void Angka(int *angka) {
    printf("Masukkan angka yang diinginkan : ");
    scanf("%d", angka);
}

void Dobel(int *nilai) {
    *nilai = *nilai * 2;
}

int main() {
    int bilangan;

    Angka(&bilangan);
    Dobel(&bilangan);
    printf("Hasil angka tadi setelah dikalikan 2 = %d\n", bilangan);

    return 0;
}