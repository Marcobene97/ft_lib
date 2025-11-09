/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/09 22:43:28 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t len1;
	size_t lenset;
	size_t i;
	size_t j;
	size_t start;
	char *trimmedstr;

	if (!s1 || !set)
	return(NULL);

	len1 = ft_strlen(s1);
	lenset = ft_strlen(set);
	if (ft_strchr(set, c) != NULL)
    // check32

	while(s1[start] == set)
	start++;

	trimmedstr = malloc(len1 +  + 1);
	if(trimmedstr == NULL)
	return(NULL);
	i = 0;
	while(i < len1)
	{
		trimmedstr[i] = s1[i];
		i++;
	}
	j = 0;

	trimmedstr[i - j] = '\0';
	return(trimmedstr);
}

int main(void)
{
	char const *s1;
	char const *set;
	char *trimmedstr;

	s1 = "Marco";
	set = "arc";
	trimmedstr = ft_strtrim(s1, set);
	printf("%s\n", trimmedstr);
	free(trimmedstr);
}
