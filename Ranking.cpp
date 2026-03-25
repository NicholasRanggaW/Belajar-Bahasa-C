#include <stdio.h>

typedef struct {
    char nama[50];
    float nilaiAkhir;
    int ranking;
} Siswa;

int main() {
    int n;

    printf("Masukkan jumlah siswa: ");
    scanf("%d", &n);

    Siswa s[n];

    for(int i = 0; i < n; i++) {
        printf("\nSiswa ke-%d\n", i+1);

        printf("Nama  : ");
        scanf(" %[^\n]", s[i].nama);

        printf("Nilai : ");
        scanf("%f", &s[i].nilaiAkhir);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(s[j].nilaiAkhir < s[j+1].nilaiAkhir) {
                Siswa temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            s[i].ranking = 1;
        } else {
            if(s[i].nilaiAkhir == s[i-1].nilaiAkhir) {
                s[i].ranking = s[i-1].ranking;
            } else {
                s[i].ranking = i + 1;
            }
        }
    }

    printf("\n=== HASIL RANKING ===\n");
    printf("Ranking\tNama\t\tNilai\n");

    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", s[i].ranking, s[i].nama, s[i].nilaiAkhir);
    }

    return 0;
}