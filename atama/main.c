#include <stdio.h>
#include <stdlib.h>

int main()
{  //kullan�c�dan girilen 5 basamakl� bir say�n�n rakamlar� toplam�n� bulunuz

    int mynumber,bolum,kalan,sum;
    sum=0;
    printf("bes basamakli bir sayi giriniz");
    scanf("%d",&mynumber);
    //mynumber=64789
    //be�inci basama�� bul
    bolum=mynumber/10000;//6
    sum+=bolum; //0+6=6
    kalan=mynumber%10000;//4789
    //d�rd�nc� basama�� bul
    bolum=kalan/1000;//4
    sum+=bolum;//4+6=10
    kalan=kalan%1000;//789
    //���nc� basama�� bul
    bolum=kalan/100;//7
    sum+=bolum;//10+7=17
    kalan=kalan%100;//89
    //ikinci basama�� bul
    bolum=kalan/10;//8
    sum+=bolum;//17+8=25
    kalan=kalan%10;//9
    //birinci basama�� bul
    sum+=kalan;
    printf("girdiginiz sayinin rakamlari toplami: %d",sum);
    return 0;
}
