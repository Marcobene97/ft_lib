/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:03:47 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/16 18:08:41 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	j;
	size_t	lenstr;
	char	*memstr;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	lenstr = i;
	memstr = malloc(lenstr + 1);
	if (memstr == 0)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		memstr[j] = s[j];
		j++;
	}
	return (memstr);
}

/* int main(void)
{
	char *s = ft_strdup("ok");
	printf("%p\n",s);
	printf("%s\n",s);
	free(s);
	return(0);
} */
/* int main(void)
{
    char *s = ft_strdup(NULL);
    printf("%p\n", (void *)s);
    if (s)
    {
        printf("%s\n", s);
        free(s);
    }
    return 0;
} */