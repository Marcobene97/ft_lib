/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:10:58 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/11 23:43:22 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;

	if(!s)
	return;
	i = 0;
	while(s[i])
	{
		ft_putchar_fd(s[i],fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
