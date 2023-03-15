#include <stdio.h>

int main(){

    char name[25]; //bytes
    int age;

    printf("What's your name?");
    scanf("%s", name);

    printf("\nHow old are you?");
    scanf("%d", &age);

    printf("Hello %s, how are you? \n", name);
    printf("You are %d years old \n", age);

    return 0;
}