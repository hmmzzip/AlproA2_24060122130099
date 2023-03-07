/*
Nama Program  : jarakPBola.c
Deskripsi     : Menghitung dan menampilkan besaran dari jarak gerak parabola
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*Kamus*/
    float v0;
    float t;
    const float g = 9.8;

/*Algoritma*/
    printf("Masukkan kecepatan awal :");
    scanf("%f", &v0);
    printf("Masukkan waktu :");
    scanf("%f", &t);

    printf("Jarak gerak parabola adalah %f", (v0*t)-0.5*(g*(t*t)));

    return 0;
}
