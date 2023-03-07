/*
Nama Program  : volBolaKerct.c
Deskripsi     : Menghitung dan menampilkan volume dari bola dan kerucut
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*Kamus*/
    float r;
    const float phi = 3.14;

/*Algoritma*/
    printf("Masukkan jari-jari :");
    scanf("%f", &r);

    printf("Volume bola adalah %f", (4*(phi*(r*r*r)/3)));
    printf("\n");
    printf("Volume kerucut adalah %f", (0.5*(4*(phi*(r*r*r)/3))));

    return 0;
}
