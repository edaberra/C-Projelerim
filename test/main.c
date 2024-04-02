#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


 void myFunction(char name1[], char name2[], char name3[]) {
  printf("Hello %s\n", name1);
  printf("Hello %s\n", name2);
  printf("Hello %s\n", name3);
}

int main() {
  myFunction("Liam","Emre", "Eda");
  return 0;
}

