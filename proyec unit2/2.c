#include <stdio.h>
#include<stdlib.h>



int main(int argc , char** argv){
    
    int number = atoi(argv[1]);
    int i = 0;
    int sum = atoi(argv[1]) +  atoi(argv[2]);
    printf(" the sum of the numbers is:%d \n",sum);
    
    int sub = atoi(argv[1]) -  atoi(argv[2]);
    printf("the sum of the numbers is:%d \n",sub);

    int mult = atoi(argv[1]) *  atoi(argv[2]);
    printf("the sum of the numbers is:%d \n",mult);

    int div = atoi(argv[1]) /  atoi(argv[2]);
    printf("the sum of the numbers is::%d \n",div);

    
    return 0;
    

    }