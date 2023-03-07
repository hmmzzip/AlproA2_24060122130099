/*
Nama Program  : kallSS.c
Deskripsi     : Menghitung dan menampilkan operasi bilangan berdasarkan opsi operasi yang dipilih
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/* Kamus */
    int iA,iB;
    char pO;
/* Algoritma */
    printf("Masukkan nilai A :");
    scanf("%d", &iA);
    printf("Masukkan nilai B :");
    scanf("%d", &iB);
    printf("Masukkan pilihan operasi :");
    scanf(" %c", &pO);

switch (pO)
{
case 'a':
    printf("%d", iA + iB);
    break;
case 'b':
    printf("%d", iA - iB);
    break;
case 'c':
    printf("%d", iA * iB);
    break;
case 'd':
    printf("%f", ((float)iA) / ((float)iB));
    break;
case 'e':
    printf("%d", iA / iB);
    break;
case 'f':
    printf("%d", iA %= iB);
    break;
default:
    printf("Bukan pilihan menu yang benar");
}

return 0;
}
