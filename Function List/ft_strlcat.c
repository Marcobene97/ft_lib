/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:44:15 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/13 13:26:41 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	space;

	i = 0;
	while (src[i] != '\0')
		i++;
	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	if (j >= size)
		return (size + i);
	space = size - j - 1;
	k = 0;
	while (k < space && src[k] != '\0')
	{
		dst[j + k] = src[k];
		k++;
	}
	if (size > j)
		dst[j + k] = '\0';
	return (j + i);
}
/* int main (void)
 {
		char dst[11] = "helloworld";
		const char src[] = "thisisMecna";
		size_t size = ft_strlcat(dst, src, 20);
		printf("%zu\n", size);
		printf("resulting string=%s\n", dst);
		return(0);
 } */
