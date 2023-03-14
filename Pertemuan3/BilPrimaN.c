/*
Nama Program  : BilPrimaN.c
Deskripsi     : Menampilkan baris bilangan prima sampai dengan bilangan n
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
    int apakah_prima;

/* Algoritma */
    printf("Masukkan bilangan n : ");
    scanf("%d", &n);

    printf("Bilangan prima sampai dengan %d adalah : ", n);

    for (i = 2; i <= n; i++) {
        apakah_prima = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                apakah_prima = 0;
            }
        }
        if (apakah_prima) {
            printf("%d ", i);
        }
    }
    return 0;
}
