/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/10 10:28:46 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

// "Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end."
/*
1. Inputs check
2. Find start(1st char to keep)
3.
*/

static int	in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	size_t len;
	size_t start;
	size_t end;
	size_t i;
	char *trimmedstr;

	if (!s1 || !set)
    return (NULL);
	len = ft_strlen(s1);

	start = 0;
	while(s1[start] && in_set(s1[start], set))
	start++;

	if(s1[start] == '\0')
	{
		trimmedstr = (char *)malloc(1);
		if (!trimmedstr)
			return (NULL);
		trimmedstr[0] = '\0';
		return (trimmedstr);
	}

	end = len - 1;
	while (end > start && in_set(s1[end], set))
    end--;

	trimmedstr = (char *)malloc(end - start + 2);
	if(!trimmedstr)
	return(NULL);

	i = 0;
	while(start <= end)
	{
		trimmedstr[i++] = s1[start++];
	}
	trimmedstr[i] = '\0';
	return(trimmedstr);
}

int main(void)
{
	char const *s1;
	char const *set;
	char *trimmedstr;

	s1 = "Marco";
	set = "M";
	trimmedstr = ft_strtrim(s1, set);
	printf("%s\n", trimmedstr);
	free(trimmedstr);
	return(0);
}
