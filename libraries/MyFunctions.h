#include <stdio.h>

bool isEvenFunct(int numberToTest) {
    printf("Function was excuted\n");

    bool isEven = (numberToTest % 2 == 0);
    if(isEven) {
    return true;
    };
    return false;
}

    void swap(int param1, int param2) {
        int temp = param2;
        param2 = param1;
        param1 = temp;

        return;
    }