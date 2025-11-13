/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:39:45 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/13 14:39:35 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*arr;
	size_t			total;

	total = nmemb * size;
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	arr = malloc(total);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}

/* int main(void)
{
	void *arr = ft_calloc(5, sizeof(int));
	if(arr == 0) 
	{
		return 1;
	}
	printf("%p\n", arr);
	free(arr);
	return(0);
} */