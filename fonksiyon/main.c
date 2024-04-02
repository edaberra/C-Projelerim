#include <stdio.h>
#include <stdlib.h>


void fon();
int main()
{





    fon();

return 0;

    }
    void fon(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j||i+j==4){
                printf("1");
            }
        else {
            printf("0");
        }
        }
        printf("\n");


    }
    }
