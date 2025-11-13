/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 07:56:52 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 13:37:26 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/* int main(void)
{
	char *result1;
	char *result2;

	result1 = ft_strmapi("marco", to_upper);

	printf("to_upper      : %s\n", result1);

	free(result1);
	return (0);
} */
