/*
Nama Program  : BilSempN.c
Deskripsi     : Menampilkan baris bilangan sempurna sampai dengan bilangan n
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 13 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
/* Kamus */
    int n;
    int i;
    int j;
    int jumlah;

/* Algoritma */
    printf("Masukkan bilangan n : ");
    scanf("%d", &n);

    printf("Bilangan sempurna sampai dengan %d adalah : ", n);

    for (i = 2; i <= n; i++) {
        jumlah = 0;

        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                jumlah += j;
            }
        }
        if (jumlah == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
