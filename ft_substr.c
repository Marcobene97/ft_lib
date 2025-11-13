/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:23:00 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/13 14:22:33 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenstr;
	char	*destring;

	if (!s)
		return (NULL);
	lenstr = ft_strlen(s);
	if ((size_t)start >= lenstr)
		return (ft_strdup(""));
	if (len > lenstr - (size_t)start)
		len = lenstr - (size_t)start;
	destring = (char *)malloc(len + 1);
	if (!destring)
		return (NULL);
	i = 0;
	while (i < len)
	{
		destring[i] = s[start + i];
		i++;
	}
	destring[i] = '\0';
	return (destring);
}

/* int	main(void)
{
	char	*s = ft_substr("abcde", 1, 4);
	printf("%s\n", s);
	free(s);
} */