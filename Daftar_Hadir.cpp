#include <stdio.h>

int main() {
    int n, i;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    char nama[n][50];
    int hadir[n];

    for (i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);

        printf("Nama: ");
        scanf(" %[^\n]", nama[i]);  
        printf("Status (1 = Hadir, 0 = Tidak Hadir): ");
        scanf("%d", &hadir[i]);
    }

    printf("\n=== DAFTAR ABSENSI ===\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s - ", i + 1, nama[i]);

        if (hadir[i] == 1) {
            printf("Hadir\n");
        } else {
            printf("Tidak Hadir\n");
        }
    }

    return 0;
}