/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beauhelmi <beauhelmi@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:55:17 by fwuensch          #+#    #+#             */
/*   Updated: 2023/03/19 18:12:18 by beauhelmi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write a program that displays the alphabet in reverse, with even letters in uppercase, and odd letters in lowercase, followed by a new line

#include <stdio.h>

int main(void){ // main function
    char c; // over here we are declaring a variable c that is equal to char

    c = 'z'; // over here we are declaring a variable c that is equal to 'z'
    while (c >= 'a') // the reason why we are using >= is because we want to print the alphabet in reverse
    { // the reason we use while is because we want to check the condition first
        if (c % 2 == 0) // if c is even then we want to print it in uppercase
        {
            printf("%c", c - 32); // this is how we print in uppercase
        } else { 
            printf("%c", c); // if c is odd then we want to print it in lowercase
        } c--; // since we are printing the alphabet in reverse, we want to decrement c
    }
    printf("\n"); // since the requirement is to print a new line, we want to print a new line
    return (0);
}