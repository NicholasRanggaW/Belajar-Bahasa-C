#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, skor = 0, salah = 0;
    int operand1, operand2;
    char op;
    float hasil, jawabanUser;

    srand(time(NULL));
    printf("Game Hitung Aritmatika\n");
    printf("Jawab dengan benar, pemain hanya diperbolehkan salah 3 kali saja.\n\n");

    for (i = 1; i <= 9; i++) {
        int batas, poin;
        if (i <= 3) {
            batas = 10;  
            poin = 5;
        } else if (i <= 6) {
            batas = 30;  
            poin = 10;
        } else {
            batas = 60;  
            poin = 15;
        }

        operand1 = rand() % batas + 1; 
        operand2 = rand() % batas + 1; 

        int pilihOp = rand() % 4;
        if (pilihOp == 0) op = '+';
        else if (pilihOp == 1) op = '-';
        else if (pilihOp == 2) op = '*';
        else op = '/';

        switch (op) {
            case '+': hasil = operand1 + operand2; break;
            case '-': hasil = operand1 - operand2; break;
            case '*': hasil = operand1 * operand2; break;
            case '/': 
                hasil = (float)operand1 / operand2;
                break;
        }

        printf("Soal %d: %d %c %d =  ", i, operand1, op, operand2);
        scanf("%f", &jawabanUser);

        if (op == '/') {
            if (jawabanUser >= hasil - 0.01 && jawabanUser <= hasil + 0.01) {
                printf("Kamu benar! +%d poin\n\n", poin);
                skor += poin;
            } else {
                printf("Yah salah! Jawaban yang benar = %.2f\n\n", hasil);
                salah++;
            }
        } else {
            if ((int)jawabanUser == (int)hasil) {
                printf("Kamu benar! +%d poin\n\n", poin);
                skor += poin;
            } else {
                printf("Yah salah! Jawaban yang benar = %.0f\n\n", hasil);
                salah++;
            }
        }
        if (salah >= 3) {
            printf("Kamu salah 3 kali. Ayo coba lagi !\n");
            break;
        }
    }

    printf("Skor akhir Kamu adalah %d\n", skor);
    printf("Terima kasih udah bermain!\n");

    return 0;
}
