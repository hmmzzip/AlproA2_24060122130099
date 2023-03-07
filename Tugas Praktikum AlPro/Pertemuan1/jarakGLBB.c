#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float v0;
    float t;
    float a;

    printf("Masukkan kecepatan awal :");
    scanf("%f", &v0);
    printf("Masukkan waktu :");
    scanf("%f", &t);
    printf("Masukkan percepatan :");
    scanf("%f", &a);

    printf("Jarak GLBB adalah %f", (v0*t)+0.5*(a*(t*t)));

    return 0;
}
