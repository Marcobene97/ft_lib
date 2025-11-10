/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:03:28 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/10 22:12:57 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument.
ft_itoa takes an integer (like 42, -17, or 0)
and returns a new string in memory (allocated with malloc)
that contains the text version of that number.

basically converts integer into a string
 */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static long	get_abs_and_flag(int n, int *isnegative)
{
	long nb;

	*isnegative = 0;
	nb = (long)n;
	if(nb < 0)
	{
		*isnegative = 1;
		nb = -nb;
	}
	return(nb);
}

static int	count_digits(long nb)
{
	int len;
	if(nb == 0)
	return(1);

	len = 0;
	while(nb >0)
	{
		nb /= 10;
		len ++;
	}
	return(len);
}

static void fill_digits(char *str, long nb, int index_end)
{

}

char *ft_itoa(int n)
{
	size_t i;
	size_t total_len;
	int len;
	char *str;
	long nb;
	int isnegative;

	nb = get_abs_and_flag(n, &isnegative);
	len = count_digits(nb);
	total_len = len + isnegative;
	str = malloc(total_len + 1);
	if(!str)
	return(NULL);

	fill_digits(str, nb, total_len - 1);
	str[total_len] = '\0';

	if (isnegative)
    str[0] = '-';
	return (str);
}
int main(void)
{
	int n = "-43342"
	char *str = ft_itoa(-123);
	printf("%s\n", str);
	free(str);
}
#include <stdio.h>

/*
- 1ST CHECK TO CHECK 1ST HELPER
int main(void)
{
	int neg;
	long res;

	res = get_abs_and_flag(-2147483648, &neg);
	printf("res=%ld, neg=%d\n", res, neg);
} */
