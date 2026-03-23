#include <stdio.h>

int main() {
    char nama[100][50];
    char jurusan[100][50];
    int nim[100];
    int jumlah, i;

    printf("=== PROGRAM PENDAFTARAN SEMINAR ===\n");
    printf("Masukkan jumlah peserta: ");
    scanf("%d", &jumlah);

    for(i = 0; i < jumlah; i++) {
        printf("\nPeserta ke-%d\n", i + 1);

        printf("Nama     : ");
        scanf(" %[^\n]", nama[i]);

        printf("NIM      : ");
        scanf("%d", &nim[i]);

        printf("Jurusan  : ");
        scanf(" %[^\n]", jurusan[i]);
    }

    printf("\n=== DATA PESERTA SEMINAR ===\n");
    for(i = 0; i < jumlah; i++) {
        printf("\nPeserta ke-%d\n", i + 1);
        printf("Nama     : %s\n", nama[i]);
        printf("NIM      : %d\n", nim[i]);
        printf("Jurusan  : %s\n", jurusan[i]);
    }

    return 0;
}