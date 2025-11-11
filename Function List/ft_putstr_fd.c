/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:51:35 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/11 23:39:40 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_putstr_fd(char *s, int fd)
{
	int i;

	if(!s)
	return;
	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
