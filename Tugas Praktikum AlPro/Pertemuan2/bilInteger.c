#include <stdio.h>
#include <stdlib.h>

int main(void){

/* Kamus */
    int i;
/* Algoritma */
  printf("Masukkan i:");

    if(scanf("%d", &i)){
            if(i > 0){
                printf("Bilangan Bulat Positif");
            }
            else if(i == 0){
                printf("Nol");
            }
            else if(i < 0 ){
                printf("Bilangan Bulat Negaif");
            }
        }
    else{
        printf("Bukan Termasuk Sebuah Bilangan");
    }

  return 0;
}
