/*
Nama Program  : luasKellLayang.c
Deskripsi     : Menghitung dan menampilkan luas dan keliling dari sebuah layang-layang
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 5 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
/*Kamus*/
    float s1;
    float s2;
    float d1;
    float d2;

/*Algoritma*/
    printf("Masukkan sisi satu layang-layang :");
    scanf("%f", &s1);
    printf("Masukkan sisi dua layang-layang :");
    scanf("%f", &s2);
    printf("Masukkan diagonal satu layang-layang :");
    scanf("%f", &d1);
    printf("Masukkan diagonal dua layang-layang :");
    scanf("%f", &d2);

    printf("Luas layang-layang adalah %f", (0.5*(d1*d2)));
    printf("\n");
    printf("Keliling layang-layang adalah %f", (2*(s1+s2)));

    return 0;
    }
