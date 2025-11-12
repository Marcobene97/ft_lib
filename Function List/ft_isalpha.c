/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:04:03 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 15:08:50 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(unsigned char c)
{
    if  (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
        return (0);
}
/*

int main(void)
{
    int c;
    c = ft_isalpha('a');
    printf("%i\n", (int)c);
}

Function class of isalpha: 1. isalpha()
              checks  for an alphabetic character; in the standard "C" locale,
              it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
              cales, there may be additional characters for which isalpha() is
              true—letters which are neither uppercase nor lowercase.

Return value:
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.

*/
