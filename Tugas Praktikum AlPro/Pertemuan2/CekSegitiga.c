#include <stdio.h>
#include <stdlib.h>

int main(void){

/* Kamus */
    int s1, s2, s3;
/* Algoritma */
    printf("Masukkan nilai sisi segitiga 1: ");
    scanf("%d", &s1);
    printf("Masukkan nilai sisi segitiga 2: ");
    scanf("%d", &s2);
    printf("Masukkan nilai sisi segitiga 3: ");
    scanf("%d", &s3);

    if(s1 > 0 && s2 > 0 && s3 > 0){
        if(s1 == s2 && s1 == s3 && s2 == s3){
            printf("Segitiga Sama Sisi");
        }
        else if(s1 == s2 || s1 == s3 || s2 == s3){
            printf("Segitiga Sama Kaki");
        }
         else{
            printf("Segitiga Sembarang");
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }

  return 0;
}
