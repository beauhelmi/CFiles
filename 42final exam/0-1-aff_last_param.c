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

// write a program that takes strings as arguments, and displays its last argument followed by a \n.
// if the number of arguments is less than 1, the program displays a newline

#include <stdio.h>

int main(int argc, char **argv) // the reason why we are using argc and argv is because we are using command line arguments
{
    if (argc < 2) // if the number of arguments is less than 2
    {
        printf("\n"); // print a new line
    }
    else
    {
        printf("%s\n", argv[argc - 1]);     // print the last argument
    }
    return (0); 
}

