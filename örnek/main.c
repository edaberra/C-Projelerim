#include <stdio.h>
#include <stdlib.h>

int main()
{
    //girilen yedi sayýnýn ortalamasýný veren uygulama

    float a,b,c,d,e,f,g,ortalama;
    printf("7 adet pozitif sayi giriniz");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    ortalama=(a+b+c+d+e+f+g)/7;
    printf("aritmetik ortalama:%f\n",ortalama);
    return 0;
}
