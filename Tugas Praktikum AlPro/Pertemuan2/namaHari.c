/*
Nama Program  : namaHari.c
Deskripsi     : Mengecek dan menampilkan nama hari berdasarkan nomornya
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

/* Kamus */
    int n;
/* Algoritma */
  printf("Masukkan nomor hari:");

    if(scanf("%d", &n)){
            if(n == 1){
                printf("Senin");
            }
            else if(n == 2){
                printf("Selasa");
            }
            else if(n == 3){
                printf("Rabu");
            }
            else if(n == 4){
                printf("Kamis");
            }
            else if(n == 5){
                printf("Jumat");
            }
            else if(n == 6){
                printf("Sabtu");
            }
            else if(n == 7){
                printf("Minggu");
            }
            else{
                printf("Masukan nomor hari tidak tepat");
            }
        }
    else{
        printf("Masukan nomor hari tidak tepat");
    }

  return 0;
}
