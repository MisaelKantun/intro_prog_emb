#include<stdio.h>
#include <stdbool.h>


int n;
int c;

int main() {
  printf("welcome to the problem\n");
  printf("enter the number\n");
  scanf("%d", &n);
 int c = n % 2;

  if (c==0){
      printf("its even\n");

  }
  else {
    printf("its odd\n");

  }






 return 0;
 
}