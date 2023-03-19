/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beauhelmi <beauhelmi@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:55:17 by fwuensch          #+#    #+#             */
/*   Updated: 2023/03/18 23:42:18 by beauhelmi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);*/


#include <stdio.h>

void	ft_print_numbers(void) // function ft_print_numbers
{ // open function
	char c; // variable c is equal to char

	c = '0'; // variable c is equal to '0'
	while (c <= '9') // while c is less than or equal to '9'
	{ // open while
		printf("%c", c); // print c
		c++; // increment c
	} // end while 
	printf("\n"); // print new line
}

int		main(void) // main function
{
	ft_print_numbers(); // call function ft_print_numbers
	return (0); 
}