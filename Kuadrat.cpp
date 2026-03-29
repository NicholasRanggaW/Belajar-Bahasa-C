#include <stdio.h>

int Sumsq(int m, int n) {
    if (m == n)
        return m * m;
    else
        return (m * m) + Sumsq(m + 1, n);
}

int main() {
    int m = 4, n = 10;

    printf("Hasil = %d\n", Sumsq(m, n));
    return 0;
}