#include <stdio.h>

typedef struct {
    char namaitem[100];
    int jumlahitem;
} Item;

int main() {
    Item item;
    int pilihan;

    FILE *shoppinglist;

    do {
        printf("\n--- Soal No 2 ---\n");
        printf("1. Tambah Item\n");
        printf("2. Tampilkan Isi Shopping List\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                shoppinglist = fopen("ShoppingList.txt", "a");
                if (shoppinglist == NULL) {
                    printf("Gagal membuka file.\n");
                    return 1;
                }
                printf("Masukkan nama item yang ingin kamu masukkan dalam list: ");
                scanf("%s", item.namaitem);
                printf("Masukkan jumlah item ke dalam list: ");
                scanf("%d", &item.jumlahitem);

                fprintf(shoppinglist, "%s %d\n", item.namaitem, item.jumlahitem);
                fclose(shoppinglist);
                printf("Item berhasil ditambahkan ke dalam list!\n");
                break;

            case 2:
                shoppinglist = fopen("ShoppingList.txt", "r");
                if (shoppinglist == NULL) {
                    printf("File ShoppingList.txt belum ada.\n");
                } else {
                    printf("\nIsi Shopping List:\n");
                    while (fscanf(shoppinglist, "%s %d", item.namaitem, &item.jumlahitem) != EOF) {
                        printf("Item : %s (%d)\n", item.namaitem, item.jumlahitem);
                    }
                    fclose(shoppinglist);
                }
                break;

            case 3:
                printf("Program selesai.\n");
                break;

            default:
                printf("Pilihan tidak valid.\n");
                break;
        }
    } while (pilihan != 3);

    return 0;
}
