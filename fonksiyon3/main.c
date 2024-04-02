#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    int i;
    int sonuc=1;

    for(i=1;i<=sayi;i++)
    {
        sonuc=sonuc*i;
    }
    return sonuc;
}





int main()
{
   int sayi;
   printf("lutfen bir sayi giriniz\n");
   scanf("%d",&sayi);
   printf("%d! = %d",sayi,fakrotiyel(sayi));
    return 0;
}
