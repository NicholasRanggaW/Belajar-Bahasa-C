#include <stdio.h>

int main() {
    int x;   
    int *ptr;   

    x = 35;     
    ptr = &x;   

    printf("Variabel x : %d\n", x);      
    printf("Alamat variabel x (ptr) : %p\n", ptr);  

    x = x + 5;  
    printf("Hasil dari variabel x : %d\n", x);  

    *ptr = *ptr + 10;      
    printf("Alamat variabel x (ptr) : %p\n", ptr);  

    return 0;
}