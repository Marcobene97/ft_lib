/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/13 19:30:51 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
    {
        return (1);
    }
    else 
        return (0);
}


// int main(void)cc 
// {
//     int c;
//     c = ft_isprint('\n');
//     printf("%i\n", (int)c);
// }
