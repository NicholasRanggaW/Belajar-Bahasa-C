#include <stdio.h>

int main() {
    float a, b, hasil;
    int pilihan;

    printf("=== KALKULATOR SEDERHANA ===\n");
    printf("1. Penjumlahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");

    printf("Pilih operasi (1-4): ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);

    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    switch (pilihan) {
        case 1:
            hasil = a + b;
            printf("Hasil = %.2f", hasil);
            break;
        case 2:
            hasil = a - b;
            printf("Hasil = %.2f", hasil);
            break;
        case 3:
            hasil = a * b;
            printf("Hasil = %.2f", hasil);
            break;
        case 4:
            if (b != 0) {
                hasil = a / b;
                printf("Hasil = %.2f", hasil);
            } else {
                printf("Error: tidak bisa dibagi dengan 0");
            }
            break;
        default:
            printf("Pilihan tidak valid");
    }

    return 0;
}