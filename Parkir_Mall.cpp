#include <stdio.h>

int main() {
    int jenis, jam;
    int totalMotor = 0, totalMobil = 0;
    int totalPendapatan = 0;
    int lanjut = 1;

    while (lanjut == 1) {
        printf("\n=== PARKIR MALL ===\n");
        printf("1. Motor (Rp 4000/jam)\n");
        printf("2. Mobil (Rp 7000/jam)\n");
        printf("Pilih jenis kendaraan: ");
        scanf("%d", &jenis);

        printf("Masukkan lama parkir (jam): ");
        scanf("%d", &jam);

        int tarif = 0;
        int total = 0;

        if (jenis == 1) {
            tarif = 4000;
            total = tarif * jam;
            totalMotor++;
        } else if (jenis == 2) {
            tarif = 7000;
            total = tarif * jam;
            totalMobil++;
        } else {
            printf("Pilihan tidak valid!\n");
            continue;
        }

        totalPendapatan += total;

        printf("\n=== STRUK PARKIR ===\n");
        printf("Jenis kendaraan : %d\n", jenis);
        printf("Lama parkir     : %d jam\n", jam);
        printf("Biaya           : Rp %d\n", total);
        printf("=====================\n");

        printf("Input lagi? (1 = Ya / 0 = Tidak): ");
        scanf("%d", &lanjut);
    }

    printf("\n=== REKAP HARIAN ===\n");
    printf("Total Motor  : %d\n", totalMotor);
    printf("Total Mobil  : %d\n", totalMobil);
    printf("Total Kendaraan : %d\n", totalMotor + totalMobil);
    printf("Total Pendapatan: Rp %d\n", totalPendapatan);
    printf("=====================\n");

    return 0;
}