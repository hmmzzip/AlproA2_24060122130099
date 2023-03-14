/*
Nama Program  : JumDeret.c
Deskripsi     : Menghitung dan menampilkan jumlah bilangan integer dari 1 hingga bilangan n
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 13 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/* Kamus */
    int n;
    int i;
    int jumlah = 0;
/* Algoritma */
    printf("Masukkan nilai n : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        jumlah += i;
    }
    printf("Jumlah deret bilangan adalah %d", jumlah);

    return 0;
}
