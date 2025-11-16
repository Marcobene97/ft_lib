/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:24:05 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/16 15:53:32 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_words(char **arr, size_t w)
{
	size_t	i;

	i = 0;
	while (i < w)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i[3];

	ft_bzero (i, sizeof(i));
	if (!s)
		return (NULL);
	i[1] = count_words(s, c);
	arr = malloc((i[1] + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i[1] = 0;
	while (s[i[0]])
	{
		while (s[i[0]] && s[i[0]] == c)
			i[0]++;
		if (!s[i[0]])
			break ;
		i[2] = i[0];
		while (s[i[0]] && s[i[0]] != c)
			i[0]++;
		arr[i[1]] = ft_substr(s, i[2], i[0] - i[2]);
		if (!arr[i[1]++] && --i[1])
			return (free_words(arr, i[1]), NULL);
	}
	return (arr[i[1]] = NULL, arr);
}
/* int main(void)
{
	char const	*s = "yo who is this";
	char		c = ' ';
	char	  **arr;
	size_t		i;
	arr = ft_split(s, c);
	if (!arr)
		return (1);
	i = 0;
	while (arr[i])
	{
		printf("word[%zu]: %s\n", i, arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
} */
