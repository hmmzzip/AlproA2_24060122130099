/*
Nama Program  : FaktorBil.c
Deskripsi     : Menampilkan baris bilangan integer berupa faktor bilangan dari bilangan n
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
/* Algoritma */
    printf("Masukkan bilangan n : ");
    scanf("%d", &n);

    printf("Faktor dari bilangan %d adalah : ", n);
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
