#include<stdio.h>
#include<stdlib.h>
#include "boolean.h"
#include "list.h"


int main(){
	List L1;
	address P;
	
	CreateList(&L1);
	if(IsListEmpty(L1)==1){
		printf("List Masih Kosong\n");
	}else{
		printf("List Sudah Berisi\n");
	}
	
	Alokasi(100);
	InsVFirst(&L1, 10);
	InsVLast(&L1, 20);
	InsVLast(&L1, 30);
	InsVLast(&L1, 40);
	if(IsListEmpty(L1)==1){
		printf("List Masih Kosong\n");
	} else{
		printf("List Sudah Berisi\n");
	}
	PrintInfo(L1);
	return 0;
}