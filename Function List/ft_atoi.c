/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 15:08:24 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int acc;
    int digit;

    i = 0;
    sign = 1;
    acc = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        digit = nptr[i] - '0';
        acc = acc * 10 + digit;
        i++;
    }
    return(sign * acc);
}
/*
The atoi() function converts the initial portion of the string pointed to by str to int representation 

int main(void)
{
  const char *nptr = "5rj42lc2";
  int res = ft_atoi(nptr);
  printf("res is %d\n", res);
  return(0);
} */
