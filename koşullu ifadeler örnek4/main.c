#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kitabinfiyati,siparismiktari;
    float indirimorani,indirimsizfiyat,indirimlifiyat,toplam;
    kitabinfiyati=35;
    siparismiktari=0;

    printf("kac adet kitap siparis vermek istiyorsunuz:");
    scanf("%d",&siparismiktari);
    if(siparismiktari>= 54){
        indirimorani=0.33;

    }else{
        if(siparismiktari>=26 && siparismiktari <54){
        indirimorani=0.21;
        }else if(siparismiktari>=13 && siparismiktari <26){
        indirimorani=0.16;

        }else{

          indirimorani=0.03;

        }
    }

        indirimsizfiyat=siparismiktari*kitabinfiyati;
        printf("kitabin indirimsiz tutari:%f TL\n",indirimsizfiyat);
        indirimlifiyat=siparismiktari*kitabinfiyati*indirimorani;
        printf("indirim tutariniz:%f TL\n",indirimlifiyat);
        toplam=indirimsizfiyat-indirimlifiyat;
        printf("siparislerinizin toplam tutari:%.2f TL\n",toplam);
    return 0;
}


