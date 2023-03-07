#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float v0;
    float t;
    const float g = 9.8;

    printf("Masukkan kecepatan awal :");
    scanf("%f", &v0);
    printf("Masukkan waktu :");
    scanf("%f", &t);

    printf("Jarak gerak parabola adalah %f", (v0*t)-0.5*(g*(t*t)));

    return 0;
}
