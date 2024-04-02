#include <stdio.h>
#include <stdlib.h>

int main()
{    int number,number2,number3,sum,extraction,division;
     number=6;
     number2=3;
     number3=12;
     sum=number+number2+number3;
     extraction=(number3-number)-number2;
     division=number3/(number/number2);
    printf("sum: %d\n",sum);
    printf("extraction: %d\n",extraction);
    printf("division: %d\n",division);
    return 0;
}
