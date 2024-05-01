/*
======================================================================
Nama:           Jody Edriano Pangaribuan
NIM:            11323025
Topik:          Implementasi Stack dengan Linked List
Tanggal:        31 Maret 2024

Deskripsi:
Program ini adalah implementasi dari struktur data stack menggunakan
linked list. Fitur-fitur utama yang disediakan meliputi operasi
push, pop, dan destroy stack. Program juga menyediakan antarmuka
pengguna yang interaktif untuk memanipulasi stack, termasuk
pilihan untuk menambahkan elemen baru, menghapus elemen teratas,
menghapus seluruh stack, dan menampilkan isi stack. Setiap operasi
yang dilakukan pada stack diimplementasikan menggunakan linked list
sebagai struktur penyimpanannya.
======================================================================
*/

#include "boolean.h"

#define Nil NULL
#define Top(S) (S).Top
#define Count(S) (S).count
#define Info(P) (P)->Info
#define Next(P) (P)->Next

typedef int Infotype;

typedef struct tElmtlist *address;

typedef struct tElmtlist
{
	Infotype Info;
	address Next;
} ElmtList;
typedef struct
{
	address Top;
	int count;
} StackList;

address Alokasi(Infotype X);
/*Mengirim true jika stack penuh dan false jika tidak penuh*/

void CreateEmptyStack(StackList *S);
/*Membuat sebuah stack kosong*/

void Destroy(StackList *S);
/*Setiap alamat elemen stack di dealokasi, dikembalikan ke sistem*/

boolean IsStackEmpty(StackList S);
/*Mengirim true jika stack kosong dan false jika tidak kosong*/

void Push(StackList *S, Infotype v);
/* Prekondisi : stack tidak penuh */
/*Menambahkan sebuah elemen v sebagai TOP. TOP berubah nilainya*/

void Pop(StackList *S, Infotype *v);
/* Prekondisi : stack tidak kosong */
