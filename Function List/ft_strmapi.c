/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 07:56:52 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/11 21:22:51 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second.
A new string is created (using malloc(3)) to store the results from the successive applications of f.

	f(i, s[i]);
*/
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	size_t len;
    char *str;

	if(s == NULL || f == NULL)
        return(NULL);
	len = ft_strlen(s);
    str = malloc(len + 1);
    if(!str)
	    return (NULL);
    i = 0;
    while(i < len)
    {
        str[i] = f((unsigned int)i, s[i]);
        i++;
    }
    str[len] = '\0';
    return(str);
}
/*
// Example 1: make everything uppercase
char to_upper(unsigned int i, char c)
{
    (void)i; // index not used
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int main(void)
{
    char *result1;
    char *result2;

    result1 = ft_strmapi("marco", to_upper);

    printf("to_upper      : %s\n", result1);

    free(result1);
    return (0);
}

useful resources:
strlen
    c = 0;
    while (string[c] != '\0')
    {
        c++;
    }
       return (c);

calloc
    total = nmemb * size;
    if(nmemb != 0 && total / nmemb != size)
    {
        return(NULL);
    }

    arr = malloc(total);
    if(arr == NULL)
    {
        return(NULL);
    }

    for (i = 0; i < total; i++)
    {
        arr[i] = 0;
    }
*/
