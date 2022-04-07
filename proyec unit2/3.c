#include <stdio.h>
#include <stdlib.h>

int edad;          
char yourname[20];                          

int main() {
	
    printf("Enter your name:");
    scanf("%s", yourname);
    
    printf("Enter your age:");
    scanf("%d", &edad);
    if(edad<18){
        printf("you are not 18 you cannot enter.\n");
    }else{
        
        printf("Welcome to the program,%s\n", yourname);   
    };
	

return 0;


}