#include <stdio.h>

int main() {
    int bilangan[10];     
    int i, a = 0, b = 0;    
    int ganjil[10], genap[10]; 

    printf("Masukkan 10 angka\n");
    for (i = 0; i < 10; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &bilangan[i]);
    }
    for (i = 0; i < 10; i++) {
        if (bilangan[i] % 2 == 0) {
            genap[b] = bilangan[i];
            b++;
        } else {
            ganjil[a] = bilangan[i];
            a++;
        }
    }
    printf("-----------------------------------");
    printf("\nHasil");
    printf("\nBilangan Genap: ");
    for (i = 0; i < b; i++) {
        printf("%d ", genap[i]);
    }
    printf("\nBilangan Ganjil: ");
    for (i = 0; i < a; i++) {
        printf("%d ", ganjil[i]);
    }

    return 0;
}
