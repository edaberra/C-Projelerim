#include <stdio.h>
#include <stdlib.h>

void yerdegistirme(int x,int y)
{   int gecici;
    gecici=x;
    x=y;
    y=gecici;
    printf("x:%d y:%d",x,y);
}
int main()
{   int x,y;
    printf("lutfen iki adet sayi giriniz\n");
    scanf("%d%d",&x,&y);
    printf("x:%d y:%d",x,y);
    yerdegistirme(x,y);

    return 0;
}
