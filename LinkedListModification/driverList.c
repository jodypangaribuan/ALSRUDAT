#include "list.h"

int main()
{
    List L;
    int choice;
    int x;

    // Create an empty list
    CreateList(&L);

    while (1)
    {
        printf("Menu:\n");
        printf("1. Insert element at the beginning\n");
        printf("2. Insert element at the end\n");
        printf("3. Delete element at the beginning\n");
        printf("4. Delete element at the end\n");
        printf("5. Print list\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to insert: ");
            scanf("%d", &x);
            InsVFirst(&L, x);
            break;
        case 2:
            printf("Enter element to insert: ");
            scanf("%d", &x);
            InsVLast(&L, x);
            break;
        case 3:
            DelVFirst(&L, &x);
            printf("Deleted element: %d\n", x);
            break;
        case 4:
            DelVLast(&L, &x);
            printf("Deleted element: %d\n", x);
            break;
        case 5:
            PrintInfo(L);
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}