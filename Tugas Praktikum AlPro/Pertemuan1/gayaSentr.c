/*
Nama Program  : gayaSentr.c
Deskripsi     : Menghitung dan menampilkan besar gaya sentripetal
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*Kamus*/
    float m;
    float v;
    float r;

/*Algoritma*/
    printf("Masukkan massa :");
    scanf("%f", &m);
    printf("Masukkan kecepatan :");
    scanf("%f", &v);
    printf("Masukkan jari-jari :");
    scanf("%f", &r);

    printf("Gaya sentripetal adalah %f", (m*(v*v)/r));

    return 0;
}
