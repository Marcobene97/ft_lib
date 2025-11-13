/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 00:11:07 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 13:10:22 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*p;
	unsigned char	u;

	p = s;
	u = (unsigned char)c;
	while (*p)
	{
		if (*p == (unsigned char) u)
			return ((char *)p);
		p++;
	}
	if (u == '\0')
		return ((char *)p);
	return (NULL);
}

/* int main(void)
{
	int c;
	const char *s;
	
	c = 'c';
	s = "+=!24c";
	char *res = ft_strchr(s, c);
	if (res)
		printf("Found at offset: %ld\n", (long)(res - s));
	else
		printf("Character not found.\n");
} */
/* 
1. Locates 1st occurrance of c (converted to a char) in the string s

- Define string 
- Convert to char
- While string != "/0"
- i++
- if i = c, return c
- if /0, return Null.

- ++i

for (init; condition; step) 

 */
