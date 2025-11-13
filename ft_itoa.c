/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:03:28 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/13 14:41:34 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	getabsolute(int n, int *isnegative)
{
	long	nb;

	*isnegative = 0;
	nb = (long)n;
	if (nb < 0)
	{
		*isnegative = 1;
		nb = -nb;
	}
	return (nb);
}

static int	count_digits(long nb)
{
	int	len;

	if (nb == 0)
		return (1);
	len = 0;
	while (nb > 0)
	{
		nb /= 10;
		len ++;
	}
	return (len);
}

static void	fill_digits(char *str, long nb, int index_end)
{
	int	digit;

	if (nb == 0)
	{
		str[index_end] = '0';
		return ;
	}
	while (nb > 0)
	{
		digit = nb % 10;
		str[index_end] = digit + '0';
		index_end -= 1;
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	size_t		total_len;
	int			len;
	char		*str;
	long		nb;
	int			isnegative;

	nb = getabsolute(n, &isnegative);
	len = count_digits(nb);
	total_len = len + isnegative;
	str = malloc(total_len + 1);
	if (!str)
		return (NULL);
	fill_digits(str, nb, total_len - 1);
	str[total_len] = '\0';
	if (isnegative)
		str[0] = '-';
	return (str);
}

/* int main(void)
{
	char *res;
// Test case 1: Negative number
	res = ft_itoa(-123);
	printf("Test 1 - Negative: %s (expected: -123)\n", res);
	free(res);

	// Test case 2: Positive number
	res = ft_itoa(456);
	printf("Test 2 - Positive: %s (expected: 456)\n", res);
	free(res);

	// Test case 3: Zero
	res = ft_itoa(0);
	printf("Test 3 - Zero: %s (expected: 0)\n", res);
	free(res);

	// Test case 4: Single digit negative
	res = ft_itoa(-5);
	printf("Test 4 - Single negative: %s (expected: -5)\n", res);
	free(res);

	// Test case 5: Single digit positive
	res = ft_itoa(7);
	printf("Test 5 - Single positive: %s (expected: 7)\n", res);
	free(res);

	// Test case 6: INT_MIN (-2147483648)
	res = ft_itoa(-2147483648);
	printf("Test 6 - INT_MIN: %s (expected: -2147483648)\n", res);
	free(res);

	// Test case 7: INT_MAX (2147483647)
	res = ft_itoa(2147483647);
	printf("Test 7 - INT_MAX: %s (expected: 2147483647)\n", res);
	free(res);

	// Test case 8: Large negative
	res = ft_itoa(-999999);
	printf("Test 8 - Large negative: %s (expected: -999999)\n", res);
	free(res);

	return (0);
} */
