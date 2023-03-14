#include <stdio.h>

int main(){

    //FORMAT SPECIFIER % = Defines and formats a type of data to be displayed

    // %c = character
    // %s = string
    // %f = float 
    // %lf = double float 
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: %1f\n",item1); //minimum field width
    printf("Item 1: %-9f\n",item2); // left align
    printf("Item 1: %-9.2f\n",item3); // decimal precision and left align




    return 0;
}