#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,t,sub,multi,div;
    x=12;
    y=2;
    z=8;
    t=4;
    sub=(x-y)-(z-t);
    multi=x*y*z*t;
    div=(x/y)/(z/t);
    printf("substraction: %d",sub);
    printf("multiplication: %d",multi);
    printf("division: %d",div);
    return 0;
}
