#include <stdio.h>
#include <stdlib.h>

int main(void){

/* Kamus */
    int n;
/* Algoritma */
  printf("Masukkan nomor bulan:");

    if(scanf("%d", &n)){
            if(n == 1){
                printf("Januari");
            }
            else if(n == 2){
                printf("Februari");
            }
            else if(n == 3){
                printf("Maret");
            }
            else if(n == 4){
                printf("April");
            }
            else if(n == 5){
                printf("Mei");
            }
            else if(n == 6){
                printf("Juni");
            }
            else if(n == 7){
                printf("Juli");
            }
            else if(n == 8){
                printf("Agustus");
            }
            else if(n == 9){
                printf("September");
            }
            else if(n == 10){
                printf("October");
            }
            else if(n == 11){
                printf("November");
            }
            else if(n == 12){
                printf("Desember");
            }
            else{
                printf("Masukan nomor bulan tidak tepat");
            }
        }
    else{
        printf("Masukan nomor bulan tidak tepat");
    }

  return 0;
}
