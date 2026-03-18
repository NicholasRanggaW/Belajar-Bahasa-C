#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(NULL)); 
    secret = rand() % 10 + 1; 

    printf("Game Tebak Angka (1-10)\n");

    do {
        printf("Tebak angka: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret) {
            printf("Angkanya terlalu kecil!\n");
        } else if (guess > secret) {
            printf("Angkanya terlalu besar!\n");
        } else {
            printf("Selamat! Kamu benar dalam %d percobaan.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}
