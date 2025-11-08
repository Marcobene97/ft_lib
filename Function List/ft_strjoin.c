/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 01:37:15 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/08 04:45:34 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len1;
	size_t len2;
	size_t i;
	size_t j;
	char *jointstring;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
	return(NULL);
	jointstring = malloc(len1 + len2 + 1);
	if(jointstring == NULL)
	return(NULL);
	i = 0;
	while(i < len1)
	{
		jointstring[i] = s1[i];
		i++;
	}
	j = 0;
	while(j < len2)
	{
		jointstring[i + j] = s2[j];
		j++;
	}
	jointstring[i + j] = '\0';
	return(jointstring);
}

/* int main(void)
{
	char const *s1;
	char const *s2;
	char *joint;

	s1 = "Marco";
	s2 = "Benedettelli";
	joint = ft_strjoin(s1, s2);
	printf("%s\n", joint);
	free(joint);
} */
