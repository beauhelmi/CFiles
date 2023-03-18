/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beauhelmi <beauhelmi@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:55:17 by fwuensch          #+#    #+#             */
/*   Updated: 2023/03/18 13:18:18 by beauhelmi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//write a program that displays all digits in descending order, followerd by a new line

#include <stdio.h> 

int main(){ // main function
    int i = 9; // variable i is equal to 9
    while (i >= 0){ // while i is greater than or equal to 0
        printf("%d", i); // print i
        i--; // decrement i
    } // end while
    printf("\n"); // print new line
    return 0; 
}