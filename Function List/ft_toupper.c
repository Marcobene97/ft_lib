/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:15:14 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 14:23:48 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/*    int main(void)
   {
	printf("%c\n", ft_toupper('a')); // prints A
	printf("%c\n", ft_toupper('B')); // prints B
	printf("%c\n", ft_toupper('1')); // prints 1
   } */
