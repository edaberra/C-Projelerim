#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dizi deðerlerini ekrana yazdýrma iþlemi
    int dizi[2][3]={{4,2,1},{5,8,7}};
    for(i=0;i<2;i++){
        for(k=0;k<3;k++)
    {
        printf("%d",dizi[i][k]);
    }
    }
    return 0;
}
