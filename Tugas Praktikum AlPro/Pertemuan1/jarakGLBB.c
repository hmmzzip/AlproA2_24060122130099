/*
Nama Program  : jarakGLBB.c
Deskripsi     : Menghitung dan menampilkan besaran dari jarak GLBB
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
    float a;

/*Algoritma*/
    printf("Masukkan kecepatan awal :");
    scanf("%f", &v0);
    printf("Masukkan waktu :");
    scanf("%f", &t);
    printf("Masukkan percepatan :");
    scanf("%f", &a);

    printf("Jarak GLBB adalah %f", (v0*t)+0.5*(a*(t*t)));

    return 0;
}
