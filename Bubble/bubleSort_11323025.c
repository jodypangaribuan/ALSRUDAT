/*
======================================================================
Nama:           Jody Edriano Pangaribuan
NIM:            11323025
Topik:          Bubble Sorting
Tanggal:        04 April 2024

Deskripsi:
======================================================================
*/

#include "stdio.h"
#include "stdlib.h"

void bubleSort(int Array[], int N){
    int temp;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (Array[j] > Array[j+1]){
                temp = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temp;
            }
        }
    }
}

void inputArray(int Array[], int N){
    for (int i = 0; i < N; i++) {
        scanf("%d", &Array[i]);
    }
}

void printArray(int Array[], int N){
    for (int i = 0; i < N; i++) {
        printf("%d\n", Array[i]);
    }
    printf("\n");
}

int main(){
    int Array[100];
    int N;

    printf("Enter Number of Array: ");
    scanf("%d", &N);
    printf("Enter %d Element Array: ", N);
    inputArray(Array, N);
    printf("Original Sequence: ");
    printArray(Array, N);

    printf("Sorted using Bubble Sort: ");
    bubleSort(Array, N);
    printArray(Array, N);
    return 0;
}