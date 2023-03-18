/* Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline. */

#include <stdio.h>

int main (int argc, char **argv) // main function
{  // argc = argument count
    // argv = argument vector
    if (argc != 2){ // if argc is equal to 2
    printf("a\n");
    } else {
        char* str = argv[1]; // char pointer str is equal to argv[1]
        for (int i = 0; str[i] != '\0'; i++){ // for loop
            if (str[i] == 'a'){ // if str[i] is equal to 'a'
                printf("a\n"); // print 'a'
                return 0; // return 0
            }
        }
        printf("\n"); // print new line
    }
    return 0; // return 0
}