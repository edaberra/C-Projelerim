#include <stdio.h>
#include <stdlib.h>

int main()
{   //bir sayinin pozitif olup olmadýðýný bulan program
    int sayi;
    printf("bir sayi giriniz:");
      scanf("%d",&sayi);
    if(sayi>0){
       if(sayi==100){
        printf("basarili\n\n");

    }else{
     printf("basarili degil\n\n");
}
   printf("bu sayi pozitif bir sayidir\n\n");
 }else if(sayi<0){
        printf("bu sayi negatif bir sayidir\n\n");
}else{
    printf("bu sayi 0 dir\n\n");

}
return 0;
}
