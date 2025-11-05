/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:48:17 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/01 00:10:44 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

   int ft_toupper(int c)
   {
    if( c >='A' && c <= 'Z')
    {
        c = c + 32;
    } 
    return(c);
   }

  /*  int main(void)
   {
    printf("%c\n", ft_toupper('A')); // prints A
    printf("%c\n", ft_toupper('b')); // prints B
    printf("%c\n", ft_toupper('1')); // prints 1
   } */