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

// write a program that takes strings as arguments, and displays its first argument followed by a \n.

// If the number of arguments is less than 1, the program displays \n.

#include <stdio.h>

int main(int argc, char **argv) // argc = argument count // argv = argument vector
{
    if (argc < 2) // over here, we are checking if the number of arguments is less than 2
    {
        printf("\n"); // over here, we are printing a new line
    } else { 
        printf("%s\n", argv[1]); // over here, we are printing the first argument, which is argv[1]
    }
    return 0;
}