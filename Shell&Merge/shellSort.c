#include <stdio.h>
#include <stdlib.h>

void shellSort(int Array[], int N)
{
    int k;
    for (int interval = N / 2; interval > 0; interval /= 2)
    {
        for (int i = interval; i < N; i += 1)
        {
            int temp = Array[i];
            int j;
            for (j = i; j >= interval && Array[j - interval] > temp; j -= interval)
            {
                Array[j] = Array[j - interval];
            }
            Array[j] = temp;
        }
        printf("Gap-%d: ", interval);
        for (k = 0; k < N; k++)
        {
            printf("%d", Array[k]);
        }
        printf("\n");
    }
}

void inputArray(int Array[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
    }
}

void printfArray(int Array[], int N)
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
}

int main()
{
    int Array[100];
    int i, N;

    printf("Enter Number of Array: ");
    scanf("%d", &N);
    printf("Enter %d Elemen Array: ", N);
    inputArray(Array, N);
    printf("Original Sequence: ");
    printfArray(Array, N);

    printf("Sorted using Shell Sort: \n");
    shellSort(Array, N);
}