#include <stdio.h>
#include <stdlib.h>

int main()
{
    float not[8];
    not[0]=4;
    not[1]=47;
    not[2]=12;
    not[3]=65;
    not[4]=74;
    not[5]=8;
    not[6]=3;
    not[7]=7;
    float i,sum=0;
    sum=not[4]*not[7]/not[0];
    printf("%f\n",sum);
    return 0;
}
