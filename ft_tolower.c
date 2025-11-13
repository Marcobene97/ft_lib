/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:48:17 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 16:51:23 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*  int main(void)
   {
	printf("%c\n", ft_toupper('A')); // prints A
	printf("%c\n", ft_toupper('b')); // prints B
	printf("%c\n", ft_toupper('1')); // prints 1
   } */