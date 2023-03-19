// write a program that takes strings as arguments, and displays its first argument followed by a \n.

// If the number of arguments is less than 1, the program displays \n.

#include <stdio.h>

/*int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("\n");
    } else {
        printf("%s\n", argv[1]);
    }
    return 0;
}*/

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("\n");
    }
    else
    {
        printf("%s\n", argv[1]);
    }
    return (0);
}