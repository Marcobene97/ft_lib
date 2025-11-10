/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:23:00 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/10 08:47:31 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	lenstr;
	size_t	available;
	size_t	copy_len;
	size_t	realstart;
	char	*destring;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	realstart = (size_t)start;
	lenstr = i;
	if (realstart >= lenstr || len == 0)
	{
		destring = (char *)malloc(1);
		if (!destring)
			return (NULL);
		destring[0] = '\0';
		return (destring);
	}
	available = lenstr - realstart;
	copy_len = (len < available) ? len : available;
	destring = (char *)malloc(copy_len + 1);
	if (!destring)
		return (NULL);
	i = 0;
	while (i < copy_len)
	{
		destring[i] = s[realstart + i];
		i++;
	}
	destring[copy_len] = '\0';
	return (destring);
}
/*
int	main(void)
{
	char	*s = ft_substr("abcde", 1, 4);

	printf("%s\n", s);
	free(s);
}

Function name ft_substr
Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);
Turn in files -
Parameters
1. s: The original string from which to create the substring.
2. start: The starting index of the substring within ’s’.
3. len: The maximum length of the substring.
Return value:
 1. The substring.
 2. NULL if the allocation fails.
 3. External functs. malloc
Description:
Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.
*/
