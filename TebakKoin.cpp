#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pilihan, hasil;

    srand(time(NULL));

    printf("TEBAK KOIN");
    printf("Pilih:\n1. Angka\n2. Gambar\nPilihan kamu: ");
    scanf("%d", &pilihan);

    hasil = rand() % 2; 

    printf("Hasil koin: ");
    if(hasil == 0)
        printf("Angka\n");
    else
        printf("Gambar\n");

    if((pilihan == 1 && hasil == 0) || (pilihan == 2 && hasil == 1))
        printf("Menang!\n");
    else
        printf("Kalah!\n");

    return 0;
}