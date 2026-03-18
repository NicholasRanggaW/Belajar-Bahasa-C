#include <stdio.h>

int main() {
    float jajanPerHari, totalJajan;

    printf("Masukkan uang jajan per hari: ");
    scanf("%f", &jajanPerHari);

    totalJajan = jajanPerHari * 7;

    printf("Total uang jajan selama 1 minggu: %.2f\n", totalJajan);

    return 0;
}
