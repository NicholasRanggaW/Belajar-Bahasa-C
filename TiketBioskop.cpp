#include <stdio.h>

int main() {
    int harga = 75000;
    int pesanan[10];
    int kursi[10] = {0}; 
    int pilih, jumlah, total = 0;

    printf("PEMESANAN TIKET BIOSKOP\n");

    printf("Masukkan jumlah tiket: ");
    scanf("%d", &jumlah);

    for(int i = 0; i < jumlah; i++) {
        printf("\nPilih kursi (1-10): ");
        scanf("%d", &pilih);

        if(pilih < 1 || pilih > 10) {
            printf("Kursi tidak valid!\n");
            i--;
        }
        else if(kursi[pilih-1] == 1) {
            printf("Kursi sudah dipesan!\n");
            i--;
        }
        else {
            kursi[pilih-1] = 1;
            pesanan[i] = pilih; 
            total += harga;
            printf("Kursi %d berhasil dipesan\n", pilih);
        }
    }

    printf("\n---STRUK PEMBELIAN---\n");
    printf("Jumlah tiket : %d\n", jumlah);
    printf("Kursi dipilih: ");

    for(int i = 0; i < jumlah; i++) {
        printf("%d ", pesanan[i]);
    }

    printf("\nHarga/tiket  : Rp %d\n", harga);
    printf("Total bayar  : Rp %d\n", total);

    return 0;
}