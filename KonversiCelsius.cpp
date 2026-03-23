#include <stdio.h>

int main() {
    float c, f;

    printf("Masukkan suhu Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("Hasil Fahrenheit: %.2f\n", f);

    return 0;
}