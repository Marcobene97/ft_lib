/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/13 19:19:32 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//  #include <unistd.h>
//  #include <stdio.h>

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
    {
        return (1);
    }
    else 
        return (0);
}


// int main(void)
// {
//     int c;
//     c = ft_isascii(5);
//     printf("%i\n", (int)c);
// }
