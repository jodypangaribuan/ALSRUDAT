/*
======================================================================
Nama:           Jody Edriano Pangaribuan
NIM:            11323025
Topik:          Merge Sort
Tanggal:        04 April 2024

Deskripsi:
    Program ini merupakan implementasi dari algoritma Merge Sort
    yang menerima input berupa N elemen array dan mengurutkannya
    menggunakan Merge Sort.
    Program ini menerima input berupa N elemen array, lalu mengurutkan
    elemen-elemen tersebut menggunakan
======================================================================
*/

#include<stdio.h>
#include<stdlib.h>

void merge(int Array[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = Array[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = Array[q + 1 + j];
    
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2){
        if (L[i] <= M[j]){
            Array[k] = L[i];
            i++;
        }else{
            Array[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        Array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){
        Array[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int Array[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;

        mergeSort(Array, l, m);
        mergeSort(Array, m + 1, r);

        merge(Array, l, m, r);
    }
}

void inputArray(int Array[], int N){
    int i;
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
    }
}

void printArray(int Array[], int N){
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
}

int main() {
    int Array[100];
    int i, N;

    printf("Enter Number of Array: ");
    scanf("%d", &N);
    printf("Enter %d Element Array: ",N);
    inputArray(Array, N);
    printf("Original Sequence: ");
    printArray(Array, N);

    printf("Sorted using Merge Sort:  \n");
    mergeSort(Array,0,N-1);
    printArray(Array, N);
    
    return 0;
}