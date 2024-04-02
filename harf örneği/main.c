#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    printf("bir karakter giriniz:");
    scanf("%c",&karakter);

    if((karakter>='A')  && (karakter<='Z')){
        printf("%c buyuk bir harftir\n",karakter);
   } else if((karakter>='a')  && (karakter<='z')){
   printf("%c kucuk bir harftir\n",karakter);
   }else{
       printf("%c bu bir harf degildir",karakter);
   }
    return 0;
}
