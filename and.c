#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical opeators = && (AND) checks if two conditions are true

    float temp = 1000;

    if (temp >= 0 && temp <= 30){
        printf("The weather is good!\n");
    } else if (temp < 0 && temp > -10){
        printf("The weather is cold!\n");
    } else {
        printf("The weather is bad!\n");
    }
    return 0;
}