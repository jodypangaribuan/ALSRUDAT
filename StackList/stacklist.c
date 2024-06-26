#include <stdio.h>
#include <stdlib.h>
#include "stacklist.h"

/* fungsi untuk melakukan alokasi memori */
address Alokasi(Infotype X)
{
    address P = (address)malloc(sizeof(ElmtList));
    if (P != Nil)
    {
        Info(P) = X;
        Next(P) = Nil;
        return P;
    }
    else
    {
        return Nil;
    }
}

/* fungsi untuk membuat stack kosong */
void CreateEmptyStack(StackList *S)
{
    Top(*S) = Nil;
    Count(*S) = 0;
}

/* fungsi untuk menghapus semua elemen di dalam stack */
void Destroy(StackList *S)
{
    address P = Top(*S);
    address Temp;
    while (P != Nil)
    {
        Temp = Next(P);
        free(P);
        P = Temp;
    }
    CreateEmptyStack(S);
}

/* fungsi untuk mengecek apakah stack kosong atau tidak */
boolean IsStackEmpty(StackList S)
{
    return (Top(S) == Nil);
}

/* fungsi untuk menambahkan elemen ke dalam stack */
void Push(StackList *S, Infotype v)
{
    address P = Alokasi(v);
    if (P != Nil)
    {
        Next(P) = Top(*S);
        Top(*S) = P;
        Count(*S)++;
    }
}

/* fungsi untuk menghapus elemen dari stack */
void Pop(StackList *S, Infotype *v)
{
    address P = Top(*S);
    *v = Info(P);
    Top(*S) = Next(P);
    Count(*S)--;
    free(P);
}