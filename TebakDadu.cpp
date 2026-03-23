#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dadu, tebak;

    srand(time(NULL));
    dadu = rand() % 6 + 1;

    printf("Tebak angka dadu (1-6): ");
    scanf("%d", &tebak);
    printf("Hasil dadu: %d\n", dadu);

    if(tebak == dadu)
        printf("Tebakan benar!\n");
    else
        printf("Salah!\n");

    return 0;
}