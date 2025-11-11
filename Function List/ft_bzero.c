/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/03 15:05:16 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

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
