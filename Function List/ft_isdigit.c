/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 13:28:02 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
    {
        return (1);
    }
    else
        return (0);
}


// int main(void)
// {
//     int c;
//     c = ft_isdigit('a');
//     printf("%i\n", (int)c);
// }

/*
isdigit() checks for a digit (0 through 9).
trl_l,  is‐
l, isxdigit_l -

*/
