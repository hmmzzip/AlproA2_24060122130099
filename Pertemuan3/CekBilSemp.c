/*
Nama Program  : CekBilSemp.c
Deskripsi     : Mengecek dan menampilkan apakah bilangan n merupakan bilangan sempurna atau bukan
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
    int jumlah = 0;

/* Algoritma */
    printf("Masukkan bilangan n : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            jumlah += i;
        }
    }

    if (jumlah == n) {
        printf("Bilangan %d adalah bilangan sempurna", n);
    }
    else {
        printf("Bilangan %d bukan bilangan sempurna", n);
    }

    return 0;
}
