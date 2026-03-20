#include <stdio.h>

int main() {
    int mieAyam = 0, baksoMalang = 0, baksoBiasa = 0;
    int hargaMieAyam = 12000;
    int hargaBaksoMalang = 15000;
    int hargaBaksoBiasa = 10000;
    int pilihan, jumlah;
    int total = 0;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Mie Ayam (Rp12000)\n");
        printf("2. Bakso Malang (Rp15000)\n");
        printf("3. Bakso Biasa (Rp10000)\n");
        printf("0. Selesai\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 3) {
            printf("Jumlah: ");
            scanf("%d", &jumlah);

            switch (pilihan) {
                case 1:
                    mieAyam += jumlah;
                    break;
                case 2:
                    baksoMalang += jumlah;
                    break;
                case 3:
                    baksoBiasa += jumlah;
                    break;
            }
        }

    } while (pilihan != 0);

    int totalMieAyam = mieAyam * hargaMieAyam;
    int totalBaksoMalang = baksoMalang * hargaBaksoMalang;
    int totalBaksoBiasa = baksoBiasa * hargaBaksoBiasa;
    total = totalMieAyam + totalBaksoMalang + totalBaksoBiasa;

    printf("\n===== STRUK PEMBELIAN =====\n");

    if (mieAyam > 0) printf("Mie Ayam      x%d = Rp%d\n", mieAyam, totalMieAyam);

    if (baksoMalang > 0) printf("Bakso Malang  x%d = Rp%d\n", baksoMalang, totalBaksoMalang);

    if (baksoBiasa > 0) printf("Bakso Biasa   x%d = Rp%d\n", baksoBiasa, totalBaksoBiasa);
    
    printf("----------------------------\n");
    printf("Total Bayar = Rp%d\n", total);
    printf("============================\n");

    return 0;
}