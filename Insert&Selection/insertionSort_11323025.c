/*
======================================================================
Nama:           Jody Edriano Pangaribuan
NIM:            11323025
Topik:          Insertion Sorting
Tanggal:        02 April 2024

Deskripsi:
======================================================================
*/

#include "stdio.h"
#include "stdlib.h"

void insertionSort(int Array[], int N){
    int key;
    for (int i = 1; i < N; i++) {
        key = Array[i];
        int j = i - 1;
        while (j >= 0 && key < Array[j]){
            Array[j+1] = Array[j];
            j = j - 1;
        }
        Array[j+1] = key;
    }
}

void inputArray(int Array[], int N){
    for (int i = 0; i < N; i++) {
        scanf("%d", &Array[i]);
    }
}

void printArray(int Array[], int N){
    for (int i = 0; i < N; i++) {
        printf("%d ", Array[i]);
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
    printf("Sorted using Insertion Sort: ");
    insertionSort(Array, N);
    printArray(Array, N);
}