/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/13 14:00:41 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmedstr;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = len - 1;
	while (end > start && in_set(s1[end], set))
		end--;
	trimmedstr = (char *)malloc(end - start + 2);
	if (!trimmedstr)
		return (NULL);
	i = 0;
	while (start <= end)
		trimmedstr[i++] = s1[start++];
	trimmedstr[i] = '\0';
	return (trimmedstr);
}

/* int main(void)
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
} */