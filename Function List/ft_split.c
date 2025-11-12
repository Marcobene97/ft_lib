/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:24:05 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/12 17:13:14 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_words(char const *s,char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while(s[i])
	{
		while(s[i] && s[i] == c)
		i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while(s[i] && s[i] != c)
			i++;
		}
	}
	return(count);
}

static void	free_words(char **arr, size_t w)
{
	size_t i;

	i = 0;
	while (i < w)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char **ft_split(char const *s, char c)
{
	char **arr;
	size_t i[3];
	ft_bzero(i, sizeof(i));
	
	if(!s)
		return (NULL);
	i[1] = count_words(s,c);
	arr = malloc((i[1] + 1) * sizeof(char *));
	if(!arr)
		return(NULL);
	i[1] = 0;
	while(s[i[0]])
	{
		while(s[i[0]] && s[i[0]] == c)
			i[0]++;
		if(!s[i[0]])
			break;
		i[2] = i[0];
		while(s[i[0]] && s[i[0]] != c)
			i[0]++;
		arr[i[1]] = ft_substr(s, i[2], i[0] - i[2]);
		if(!arr[i[1]++] && --i[1])
			return(free_words(arr, i[1]), NULL);
	}
	return(arr[i[1]] = (NULL),arr);
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
/*
substitute i[0] = i
i[1] = i
*  static char *make_word(char const *s, size_t start, size_t end)
{
	char *word;
	size_t i;

	word = malloc((start - end + 1) *sizeof(char));
	if(!word)
		return(NULL);
	i = 0;
	while(end > start)
		word[i++] = s[start++];
	word[i] = '\0';
	return(word);
} 
Function name ft_split Prototype char **ft_split(char const *s, char c);
Turn in filesParameters
s: The string to be split.
c: The delimiter character.
Return value
The array of new strings resulting from the split.
NULL if the allocation fails.
External functs. malloc, free
Description
Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.

- guard for s1 == NULL || char c == NULL
- compute len of s
- check for char in s
- return new substring for each char c recognised in (can be a single char or a string of chars within char c)
- Create a new substring for each occurrence of c in s
- conglomerate the substrings into an array of strings.


/*
// TODO:
    // 1. Walk through s again
    // 2. For each word:
    //      - find start & end
    //      - allocate (len + 1)
    //      - copy characters
    //      - store pointer in arr[index]
    // 3. End with arr[words] = NULL
    // 4. On malloc failure: free everything & return NULL
 */

