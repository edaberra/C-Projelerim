#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kullan�c�dan 3 say� al�n�z en b�y�k say�y� if kullanarak bulunuz
    /*int x,y,z;
    printf("sayilari giriniz\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("%d en buyuk sayidir",x);

    }
    if(y>x && y>z)
    {
        printf("%d en buyuk sayidir",y);
    }
    if(z>x && z>y)
    {
        printf("%d en buyuk sayidir",z);
    }
    if(x==z && z==y)
    {
        printf("tum sayilar esittir");
    }*/
    int x,y,z;
    printf("sayilari giriniz\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("%d en buyuk sayidir",x);

    }
    else if(y>x && y>z)
    {
        printf("%d en buyuk sayidir",y);
    }
     else if(z>x && z>y)
    {
        printf("%d en buyuk sayidir",z);
    }
   else
    {
        printf("tum sayilar esittir");
    }
    return 0;
}
