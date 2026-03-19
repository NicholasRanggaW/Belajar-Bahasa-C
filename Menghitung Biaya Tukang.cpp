#include <stdio.h>

int main() {
    float biaya_material, biaya_tukang, luas, total_biaya;

    printf("Masukkan biaya material per m2: ");
    scanf("%f", &biaya_material);

    printf("Masukkan biaya tukang per m2: ");
    scanf("%f", &biaya_tukang);

    printf("Masukkan luas tembok (m2): ");
    scanf("%f", &luas);

    total_biaya = (biaya_material + biaya_tukang) * luas;

    printf("Total biaya pembuatan tembok: %.2f\n", total_biaya);

    return 0;
}
