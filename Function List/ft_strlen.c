/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/08 04:30:40 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <unistd.h>
// #include <stdio.h>
#include <string.h>
#include "libft.h"

size_t ft_strlen(const char *string)
{
    size_t c;

    c = 0;
    while (string[c] != '\0')
    {
        c++;
    }
       return (c);
}


// int main(void)
// {
//     int c;
//     c = ft_strlen("okfh");
//     printf("%i\n", c);
// }
