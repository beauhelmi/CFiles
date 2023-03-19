/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beauhelmi <beauhelmi@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:55:17 by fwuensch          #+#    #+#             */
/*   Updated: 2023/03/19 18:29:18 by beauhelmi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write a program that displays a 'a' character on the standard output

#include <stdio.h>

int main(void) { // open main function
    printf("a\n"); // state what we want to print in this case we want to print a
    return (0); // important to return 0
}

//the old ways of doing things

/*include <unistd.h>

int main (void){
    write(1, "a", 1);
    return (0);
}
*/