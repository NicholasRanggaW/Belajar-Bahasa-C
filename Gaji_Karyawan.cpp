#include <stdio.h>

int main() {
    int jam, lembur;
    float gaji;

    printf("Jam kerja: "); 
    scanf("%d",&jam);

    printf("Lembur: "); 
    scanf("%d",&lembur);

    gaji = jam*100000 + lembur*50000;
    printf("Total gaji: %.2f", gaji);
}