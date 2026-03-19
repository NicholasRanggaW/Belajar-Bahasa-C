#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pemain, komputer;
    int skorPemain = 0, skorKomputer = 0;
    int lanjut = 1;

    srand(time(NULL)); 

    while (lanjut == 1) {
        printf("\n=== GAME GUNTING BATU KERTAS ===\n");
        printf("1. Gunting\n");
        printf("2. Batu\n");
        printf("3. Kertas\n");
        printf("Pilih: ");
        scanf("%d", &pemain);

        komputer = rand() % 3 + 1;

        printf("Pilihan komputer: %d\n", komputer);

        if (pemain == komputer) {
            printf("Hasil: Seri\n");
        }
        else if (
            (pemain == 1 && komputer == 3) ||
            (pemain == 2 && komputer == 1) ||
            (pemain == 3 && komputer == 2)
        ) {
            printf("Hasil: Pemain Menang\n");
            skorPemain++;
        }
        else if (pemain >= 1 && pemain <= 3) {
            printf("Hasil: Komputer Menang\n");
            skorKomputer++;
        }
        else {
            printf("Input tidak valid!\n");
            continue;
        }

        printf("Skor Pemain: %d | Komputer: %d\n", skorPemain, skorKomputer);

        printf("Main lagi? (1 = Ya / 0 = Tidak): ");
        scanf("%d", &lanjut);
    }

    printf("\n=== HASIL AKHIR ===\n");
    printf("Pemain: %d\n", skorPemain);
    printf("Komputer: %d\n", skorKomputer);

    if (skorPemain > skorKomputer) {
        printf("Pemenang: Pemain\n");
    } else if (skorKomputer > skorPemain) {
        printf("Pemenang: Komputer\n");
    } else {
        printf("Pemenang: Seri\n");
    }

    return 0;
}