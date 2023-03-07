#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float m;
    float v;
    float r;

    printf("Masukkan massa :");
    scanf("%f", &m);
    printf("Masukkan kecepatan :");
    scanf("%f", &v);
    printf("Masukkan jari-jari :");
    scanf("%f", &r);

    printf("Gaya sentripetal adalah %f", (m*(v*v)/r));

    return 0;
}
