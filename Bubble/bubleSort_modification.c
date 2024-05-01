#include "stdio.h"
#include "stdlib.h"

void printArray(int Array[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
}

void bubleSort(int Array[], int N)
{
    int temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (Array[j] > Array[j + 1])
            {
                temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
        printf("Pass-%d: ", i + 1);
        printArray(Array, N);
    }
}

void inputArray(int Array[], int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
    }
}

int main()
{
    int Array[100];
    int N;

    printf("Enter Number of Array: ");
    scanf("%d", &N);
    printf("Enter %d Element Array: ", N);
    inputArray(Array, N);
    printf("Original Sequence: ");
    printArray(Array, N);

    printf("Sorted using Bubble Sort: \n");
    bubleSort(Array, N);
    printArray(Array, N);
    return 0;
}