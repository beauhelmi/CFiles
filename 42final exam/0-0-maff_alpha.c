/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beauhelmi <beauhelmi@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:55:17 by fwuensch          #+#    #+#             */
/*   Updated: 2023/03/18 23:43:18 by beauhelmi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//write a program that displays the alphabet, with even letter in uppercase, and odd letters in lowercase, followed by a new line

#include <stdio.h>

int main(void)
{ // main function
    char c; // variable c is equal to char

    c = 'a'; // variable c is equal to 'a'
    while (c <= 'z') // while c is less than or equal to 'z'
    { // open while
        if (c % 2 == 0) // if c is even
        { // open if
            printf("%c", c - 32); // print c in uppercase
        } // end if
        else // else
        { // open else
            printf("%c", c); // print c
        } // end else
        c++; // increment c
    } // end while
    printf("\n"); // print new line
    return (0);
}