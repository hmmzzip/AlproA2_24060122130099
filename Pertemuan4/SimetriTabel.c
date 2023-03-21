/*
Nama Program  : SimetriTabel.c
Deskripsi     : Menentukan apakah dua tabel simetris atau tidak
Nama Pembuat  : Hamam Azidani
NIM           : 24060122130099
Tanggal       : 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Kamus Lokal
    int *T1; //tabel T1
    int *T2; //tabel T2
    int n; //panjang tabel T1
    int m; //panjang tabel T2
    int i; //counter
    // Algoritma

    printf("Masukkan panjang tabel T1 : ");
    scanf("%d", &n);
    T1 = (int*)malloc(n*sizeof(int));

    for (i=0;i<n;i++){
        printf("Masukan nilai tabel T1 ke-%d : ",i);
        scanf("%d",&T1[i]);
    }

    printf("Masukkan panjang tabel T2 : ");
    scanf("%d", &m);
    T2 = (int*)malloc(m*sizeof(int));

    for (i=0;i<m;i++){
        printf("Masukan nilai tabel T2 ke-%d : ",i);
        scanf("%d",&T2[i]);
    }

    if (n != m) {
        printf("T1 dan T2 Tidak Simetri.");
        return 0;
    }

    for (i=0; i<n; i++) {
        if (T1[i] != T2[i]) {
            printf("T1 dan T2 Tidak Simetri.");
            return 0;
        }
    }
    printf("T1 dan T2 Simetri.");
    return 0;
}
