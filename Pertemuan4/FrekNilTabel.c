/*
Nama Program  : FrekNilTabel.c
Deskripsi     : Menentukan dan menampilkan elemen yang frekuensi kemunculannya lebih dari sekali dari suatu tabel
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Kamus Lokal//
    int *tabel; //tabel
    int n; //panjang elemen
    int i; //counter
    int j; //counter
    int count; //penghitung kemunculan
    // Algoritma//

    printf("Masukkan panjang tabel: ");
    scanf("%d", &n);
    tabel = (int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++){
        printf("Masukan nilai ke-%d : ",i);
        scanf("%d",&tabel[i]);
    }
    printf("Nilai yang frekuensi kemunculannya lebih dari satu = ", count);
    for (i=0;i<n;i++) {
        count = 0;
        for (j=i+1;j<n;j++){
            if (tabel[i] == tabel[j]){
                count ++;
        }
    }
        if (count > 0) {
            printf("%d ", tabel[i]);
        }
      }
    return 0;
}
