#include<stdio.h>

char firstname[255];
char lastname[255];
float yearsold = 0;
char state[255];

int main(){
    printf("welcome to the program\n");
    printf("enter your first name:\n");
    scanf("%s", firstname);
    printf("Enter your last name:\n");
    scanf("%s", lastname);
    printf("enter your years old:\n");
    scanf("%f", &yearsold);
    printf("enter your  state;\n");
    scanf("%s", state);



 return 0;
}
