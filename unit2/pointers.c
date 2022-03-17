#include<stdio.h>

int edad= 25;
int mes = 2;

int main(int argc, char** argv){
   printf("la variable edad = %d\n",edad);
   printf("la direccion de la variable edad = %p\n",&edad);
// creacion de pointer//

int* myPtr = NULL;
myPtr = &edad;
printf ("la varieble pointer 'myPtr' es igual a : %p\n ", myPtr);
printf ("la direccion de la variable 'my Ptr' = %p\n", &myPtr);
// modificar un pointer:

  edad= edad * 2;
  myPtr = &mes;
  myPtr= &edad;

  printf("el valor de lo que apunta ptr =%d\n", *myPtr);
return 0;
}