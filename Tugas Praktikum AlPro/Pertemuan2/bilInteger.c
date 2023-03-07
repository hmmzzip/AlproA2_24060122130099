/*
Nama Program  : bilInteger.c
Deskripsi     : Mengecek dan menampilkan jenis bilangan integer
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

/* Kamus */
    int i;
/* Algoritma */
  printf("Masukkan i:");

    if(scanf("%d", &i)){
            if(i > 0){
                printf("Bilangan Bulat Positif");
            }
            else if(i == 0){
                printf("Nol");
            }
            else if(i < 0 ){
                printf("Bilangan Bulat Negaif");
            }
        }
    else{
        printf("Bukan Termasuk Sebuah Bilangan");
    }

  return 0;
}
