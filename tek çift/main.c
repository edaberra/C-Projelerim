#include <stdio.h>
#include <stdlib.h>

int main()
{
  //kullan�c�dan 2 adet sayi al�n�z b�y�kl�k k���kl�k durumunu kar��la�t�r�n�z
  int sayi1,sayi2;
  printf("lutfen iki sayi giriniz\n");
  scanf("%d%d",&sayi1,&sayi2);
  if(sayi1>sayi2)
  {
      printf("%d sayi1 daha buyuktur",sayi1);
  }
 else if(sayi2>sayi1)
  {
      printf("%d sayi2 daha buyuktur",sayi2);
  }
  else
  {
      printf("sayilar bir birine esittir");
  }
    return 0;
}
