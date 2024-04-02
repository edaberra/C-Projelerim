#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,k;
   //int sum=0;
 int dizi[4][3];
   for(i=0;i<4;i++)
   {
    for(int j=0;j<3;j++)
   {

   scanf("%d",&dizi[i][j]);
   }
   }
   for(i=0;i<4;i++)
   {
       for(k=0;k<3;k++)
   {
     printf("%d\t",dizi[i][k]);
      // if(i==k)
   }
   printf("\n");

      // sum=sum+dizi[i][k];
   }

 //  printf("%d satir sayilarinin toplami=%d",i+1,sum);
   //printf("\n");
  // sum=0;

    return 0;
}
