/*
Nama Program  : NilMax2Tabel.c
Deskripsi     : Menentukan dan menampilkan elemen yang merupakan nilai maksimum dari suatu tabel
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Kamus Lokal//
    int *tabel; //tabel
    int n; //panjang elemen
    int i; //counter
    int j; //counter
    int max; //nilai maksimum
    // Algoritma//
    max = 0;
    printf("Masukkan panjang tabel: ");
    scanf("%d", &n);
    tabel = (int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++){
        printf("Masukan nilai ke-%d : ",i);
        scanf("%d",&tabel[i]);
    }

    for (j=0;j<n;j++){
        if (max < tabel[j]){
            max = tabel[j];
        }
    }
    printf("Nilai Maks = %d", max);
    return 0;
}
