#include <stdio.h>
#include <stdlib.h>

int main()
{   //bir dizideki sayýlarýn çift mi tek mi olduðunu bulan program
    int i,deger;
    int sayi[50];
    //printf("pozitif bir sayi giriniz:");
    //scanf("%d",&deger);
    printf("bir dizi sayisi giriniz:");
    for(i=0;i<deger;i++){
        scanf("%d",&sayi[i]);
    }
    printf("tek sayilar:");
    for(i=0;i<deger;i++){
        if(sayi[i]%2==1)
    printf("%d ",sayi[i]);
    }
    printf("cift sayilar:");
    for(i=0;i<deger;i++){
        if(sayi[i]%2==0)
    printf("%d ",sayi[i]);
    }
    return 0;
}
