#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float s1;
    float s2;
    float d1;
    float d2;

    printf("Masukkan sisi satu layang-layang :");
    scanf("%f", &s1);
    printf("Masukkan sisi dua layang-layang :");
    scanf("%f", &s2);
    printf("Masukkan diagonal satu layang-layang :");
    scanf("%f", &d1);
    printf("Masukkan diagonal dua layang-layang :");
    scanf("%f", &d2);

    printf("Luas layang-layang adalah %f", (0.5*(d1*d2)));
    printf("Keliling layang-layang adalah %f", (2*(s1+s2)));

    return 0;
    }
