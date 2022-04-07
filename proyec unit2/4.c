#include<stdio.h>

int i, numero;

int main(){
  
  
  printf("In the range from 0 to: ");
  scanf("%d", &numero);
  
  printf("The numbers divisible by 3 and 5 from 0 to %d are: \n", numero);
  for (i = 1; i <= numero; i++){
    if (i % 3 == 0 && i % 5 == 0){
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}