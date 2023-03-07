#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float r;
    const float phi = 3.14;

    printf("Masukkan jari-jari :");
    scanf("%f", &r);

    printf("Volume bola adalah %f", (4*(phi*(r*r*r)/3)));

    printf("Volume kerucut adalah %f", (0.5*(4*(phi*(r*r*r)/3))));

    return 0;
}
