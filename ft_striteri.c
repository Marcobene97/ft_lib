/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:38:18 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 13:16:01 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* int main(void)
{
	 char d[] = "marco";
	ft_striteri(d, to_uppercase);
	printf("%s\n", d);  // should print "MARCO"

	char s[] = "";
	ft_striteri(s, to_uppercase);
	printf("Empty: '%s'\n", s); // should print ''
} */
