#include<stdio.h>
#include<stdlib.h>


int main (int argc, char ** argv){
float number1 = atoi(argv[1]);
float number2 = atoi(argv[2]);
float number3 = atoi(argv[3]);
float number4 = atoi(argv[4]);
float number5 = atoi(argv[5]);

float sum = number1 + number2 + number3 + number4 +number5;
float mean = sum/5;

printf("the mean of your numbers is: %f \n",mean);

return 0;


}