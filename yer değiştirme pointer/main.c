#include <stdio.h>
#include <stdlib.h>

void yerdegistirme(int *sayi1,int *sayi2)
{
  int gecici;
  gecici=*sayi1;
  *sayi1=*sayi2;
  *sayi2=gecici;

  printf("yer degistirdikten sonra \n");
  printf("ilk sayim = %d",*sayi1);
  printf("ikinci sayim = %d",*sayi2);
}
int main()
{ //kullanýcý tarafýndan girilen iki sayýnýn yer deðiþtirmesini pointer ile yapýnýz

 int sayi1,sayi2;
 printf("lutfen 2 adet sayi giriniz\n");
 scanf("%d%d",&sayi1,&sayi2);
 printf("yer degistirmeden once\n");
 printf("ilk sayim = %d\n",sayi1);
 printf("ikinci sayim = %d\n",sayi2);
  yerdegistirme(&sayi1,sayi2);
 return 0;
}
