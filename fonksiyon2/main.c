#include <stdio.h>
#include <stdlib.h>

float dortislem(float sayi1,float sayi2,char islem)
{
    if (islem=='+')
    {
        return sayi1+sayi2;
    }
    else if (islem=='-')
    {
        return sayi1-sayi2;
    }
    else if (islem=='*')
    {
        return sayi1*sayi2;
    }
    else if (islem=='/')
    {
        return sayi1/sayi2;
    }
    else
    {
        printf("yanlis operator girdiniz");
    }
}




int main()
{
    int sayi1,sayi2;
    char islem;
    printf("hangi islemi yaptirmak istiyorsunuz (+ - * /)\n");
    scanf("%c",&islem);
    printf("lutfen iki sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("islemin sonucu %.3f",dortislem(sayi1,sayi2,islem));
    return 0;
}
