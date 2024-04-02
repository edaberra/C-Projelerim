#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pointer kullanarak iki sayýyý toplayýnýz
    int sayi1,sayi2,toplam;
    int *ptr1,*ptr2;
    ptr1=&sayi1;
    ptr2=&sayi2;
    printf("lutfen iki sayi giriniz\n");
    scanf("%d%d",ptr1,ptr2);
    toplam=*ptr1+*ptr2;
    printf("Toplam : %d",toplam);
    return 0;
}
