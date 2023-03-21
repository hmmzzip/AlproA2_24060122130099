/*
Nama Program  : JumBarKolMat.c
Deskripsi     : Menghitung dan menampilkan jumlah nilai elemen per baris dan per kolom dari tabel 2 dimensi (matriks persegi)
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Kamus Lokal
    int n; //ukuran matriks
    int i; //counter
    int j; //counter
    int sum; //penjumlah nilai elemen
    // Algoritma
    printf("Masukkan ukuran tabel matriks persegi: ");
    scanf("%d", &n);
    int tabel[n][n]; //tabel matriks persegi

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("Masukkan nilai matriks baris ke-%d , kolom ke-%d = ", i, j);
            scanf("%d", &tabel[i][j]);
        }
    }

    for (i=0; i<n; i++) {
        sum = 0;
        for (j=0; j<n; j++) {
            sum += tabel[i][j];
        }
        printf("Jumlah nilai Baris ke-%d = %d\n",i + 1,sum);
    }

    for (i=0; i<n; i++) {
        sum = 0;
        for (j=0; j<n; j++) {
            sum += tabel[j][i];
        }
        printf("Jumlah nilai Kolom ke-%d = %d\n",i + 1,sum);
    }

    return 0;
}
