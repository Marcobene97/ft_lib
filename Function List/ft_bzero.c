/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 15:07:59 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *p = (unsigned char *)s;

    while (n>0)
    {
        *p++ = 0;
        n--;
    }
}

// int main (void)
// {
//     char c[] = "hello";
//     ft_bzero(c,4);
//    for (size_t i = 0; i < sizeof c; i++)
//     printf("%u\n", (unsigned)c[i]);
//     puts("");

// }
