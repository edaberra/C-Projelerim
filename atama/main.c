#include <stdio.h>
#include <stdlib.h>

int main()
{  //kullanýcýdan girilen 5 basamaklý bir sayýnýn rakamlarý toplamýný bulunuz

    int mynumber,bolum,kalan,sum;
    sum=0;
    printf("bes basamakli bir sayi giriniz");
    scanf("%d",&mynumber);
    //mynumber=64789
    //beþinci basamaðý bul
    bolum=mynumber/10000;//6
    sum+=bolum; //0+6=6
    kalan=mynumber%10000;//4789
    //dördüncü basamaðý bul
    bolum=kalan/1000;//4
    sum+=bolum;//4+6=10
    kalan=kalan%1000;//789
    //üçüncü basamaðý bul
    bolum=kalan/100;//7
    sum+=bolum;//10+7=17
    kalan=kalan%100;//89
    //ikinci basamaðý bul
    bolum=kalan/10;//8
    sum+=bolum;//17+8=25
    kalan=kalan%10;//9
    //birinci basamaðý bul
    sum+=kalan;
    printf("girdiginiz sayinin rakamlari toplami: %d",sum);
    return 0;
}
