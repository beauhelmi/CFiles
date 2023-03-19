/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beauhelmi <beauhelmi@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:55:17 by fwuensch          #+#    #+#             */
/*   Updated: 2023/03/19 19:01:18 by beauhelmi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no 'z' characters in the string,
the program writes 'z' followed by a newline. If the number of parameters is not 1, the 
program displays 'z' followed by a newline.*/

#include <stdio.h>

int main(int argc, char *argv[]) // open main function
{
   if (argc != 2){ // over here we are checking if the number of arguments is not equal to 2
    printf("z\n"); // if it is not equal to 2 we print z
   } else { // if it is equal to 2 we do the following
    char *str = argv[1]; // we create a pointer to the first argument, *str is string while argv[1] is the first argument
    int i,found = 0; // we create a variable i and found and set found to 0
    for (i = 0; str[i] != '0'; i++){ // we create a for loop that will loop through the string until it finds a 0
        if (str[i] == 'z'){ // if the string is equal to z
            printf("%c\n",str[i]); // print the string
            found = 1; // set found to 1
            break;  // break the loop
        }
    }
    if (found == 0){    // if found is equal to 0
        printf("z\n");  // print z
    }
   }
    return 0; // return 0
}