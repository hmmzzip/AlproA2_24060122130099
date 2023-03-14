/*
Nama Program  : CekBilPrima.c
Deskripsi     : Mengecek dan menampilkan apakah bilangan n merupakan bilangan prima atau bukan
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
    int faktor = 0;

/* Algoritma */
    printf("Masukkan bilangan n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            faktor++;
        }
    }

    if (faktor == 2) {
        printf("Bilangan %d adalah bilangan prima", n);
    }
    else {
        printf("Bilangan %d bukan bilangan prima", n);
    }

    return 0;
}
