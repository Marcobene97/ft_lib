/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:48:17 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/12 17:37:12 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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