/*
Nama Program  : hitungTahanan.c
Deskripsi     : Menghitung dan menampilkan jumlah dari nilai 3 tahanan
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

/* Kamus */
    int t1, t2, t3;
/* Algoritma */
    printf("Masukkan nilai tahanan 1: ");
    scanf("%d", &t1);
    printf("Masukkan nilai tahanan 2: ");
    scanf("%d", &t2);
    printf("Masukkan nilai tahanan 3: ");
    scanf("%d", &t3);

    if(t1 >= 0 && t2 >= 0 && t3 >= 0){
        printf("%d",t1+t2+t3);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }

  return 0;
}
