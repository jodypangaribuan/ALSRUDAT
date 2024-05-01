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

void selectionSort(int Array[], int N)
{
    int min_idx, temp;
    for (int i = 0; i < N - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < N; j++)
        {
            if (Array[j] < Array[min_idx])
            {
                min_idx = j;
            }
        }
        temp = Array[i];
        Array[i] = Array[min_idx];
        Array[min_idx] = temp;
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

    printf("Sorted using Selection Sort: \n");
    selectionSort(Array, N);
    printArray(Array, N);
}