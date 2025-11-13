/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 00:11:07 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 14:43:06 by mbenedet         ###   ########.fr       */
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