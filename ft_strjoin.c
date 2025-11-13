/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 01:37:15 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 13:17:28 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*jointstring;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	jointstring = malloc(len1 + len2 + 1);
	if (jointstring == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		jointstring[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		jointstring[i] = s2[i - len1];
		i++;
	}
	jointstring[i] = '\0';
	return (jointstring);
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
