#include <stdio.h>
#include <stdlib.h>
#include "stacklist.h"

/* Fungsi untuk menampilkan menu */
void printMenu()
{
    printf("\nMenu:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Destroy Stack\n");
    printf("4. View Stack\n");
    printf("5. Exit\n");
    printf("Pilih: ");
}

/* Fungsi untuk membersihkan input buffer -> fungsi yang bertujuan untuk menghapus sisa-sisa karakter yang masih ada didalam buffer seperti \n dll. */
void clearInputBuffer()
{
    while (getchar() != '\n')
        ;
}

/* Fungsi untuk menampilkan isi stack -> fungsi tambahan yang seharusnya ada dibagian body, berhubung pada header tidak mendeklarasikan fungsi ini maka dibuat pada main program. */
void viewStack(StackList *stack)
{
    if (IsStackEmpty(*stack))
    {
        printf("Stack masih kosong nihhh!.\n");
    }
    else
    {
        printf("Isi Stack (dari atas ke bawah):\n");
        address P = Top(*stack);
        while (P != NULL)
        {
            printf("%d\n", Info(P));
            P = Next(P);
        }
    }
}

int main()
{
    // KAMUS LOKAL
    StackList stack;
    CreateEmptyStack(&stack);
    int pilihan, value;

    // Membuat Do-While Loop untuk menampilkan menu dan melakukan operasi stack yang diinginkan oleh user
    do
    {
        printMenu();
        scanf("%d", &pilihan);
        clearInputBuffer(); // Membersihkan input buffer setelah menerima input pilihan

        switch (pilihan)
        {
        // Membuat kondisi jika pilihan yang dimasukkan adalah 1 maka akan menambahkan elemen ke dalam stack
        case 1:
            printf("Masukkan nilai yang ingin dipush: ");
            // Memeriksa apakah input yang dimasukkan adalah angka atau bukan
            if (scanf("%d", &value) != 1)
            {
                printf("Input tidak valid. Silakan masukkan angka.\n");
                clearInputBuffer();
            }
            else
            {
                Push(&stack, value);
                printf("Nilai %d berhasil dipush ke stack.\n", value);
            }
            break;
        // Membuat kondisi jika pilihan yang dimasukkan adalah 2 maka akan menghapus elemen teratas dari stack
        case 2:
            if (!IsStackEmpty(stack))
            {
                Pop(&stack, &value);
                printf("Nilai %d berhasil dipop dari stack.\n", value);
            }
            else
            {
                printf("Stack kosong bejirr.\n");
            }
            break;
        // Membuat kondisi jika pilihan yang dimasukkan adalah 3 maka akan menghapus stack
        case 3:
            Destroy(&stack);
            printf("Stack berhasil dihapus.\n");
            break;
        // Membuat kondisi jika pilihan yang dimasukkan adalah 4 maka akan menampilkan isi stack
        case 4:
            viewStack(&stack);
            break;
        // Membuat kondisi jika pilihan yang dimasukkan adalah 5 maka akan menampilkan pesan Terima Kasih!
        case 5:
            printf("Terima Kasih!\n");
            break;
        default:
            printf("Pilihan anda tidak valid. Silakan pilih lagi.\n");
            clearInputBuffer();
        }
        // Membuat kondisi jika pilihan yang dimasukkan tidak sama dengan 5 maka akan terus melakukan perulangan
    } while (pilihan != 5);

    return 0;
}
