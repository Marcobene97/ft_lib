/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/03 15:14:23 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
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
