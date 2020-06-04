#include <stdio.h>
#include <math.h>

typedef struct {   float r, h; } silindir;
float hesapla(silindir Silindir)
{
    int pi = 3;
    float silindirAlan, kupunAlani, kupunKenari, k;
    silindirAlan = 2 * pi * Silindir.r * Silindir.h;
    kupunAlani = silindirAlan;
    kupunKenari = sqrt(kupunAlani / 6);
    return kupunKenari;
}
int main()
{
    float yaricap, uzunluk;
    printf("yaricap gir:  ");
    scanf("%f", &yaricap);
    printf("uzunluk gir:  ");
    scanf("%f", &uzunluk);
    silindir Silindir;
    Silindir.r = yaricap;
    Silindir.h = uzunluk;
    printf("%.2f", hesapla(Silindir));
    return 0;
}
