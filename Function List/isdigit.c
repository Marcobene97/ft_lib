/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/08 19:06:01 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
isdigit() checks for a digit (0 through 9).
*/


#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    if(c >= 0 && c <= 9)
    write(1, &c, 1);
    else 
    return (0);
}

int main(void)
{
    int c;
    ft_isdigit(c);
    write(1, &c ,1);
}
