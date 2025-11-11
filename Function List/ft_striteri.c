/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:38:18 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/11 22:02:22 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	if(s == NULL || f == NULL)
        return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void to_uppercase(unsigned int i, char *c)
{
	(void)i;
    if( *c >='a' && *c <= 'z')
    {
        *c = *c - 32;
    }
}

int main(void)
{
	 char d[] = "marco";
	ft_striteri(d, to_uppercase);
	printf("%s\n", d);  // should print "MARCO"

	char s[] = "";
	ft_striteri(s, to_uppercase);
	printf("Empty: '%s'\n", s); // should print ''
} */
