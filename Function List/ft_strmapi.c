/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 07:56:52 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/11 11:12:13 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second.
A new string is created (using malloc(3)) to store the results from the successive applications of f.

	f(i, s[i]);
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	size_t len;

	char *str;
	if(s == NULL || f == NULL)
    return(NULL);
	len = ft_strlen(s);
	//count and split *s into singular components
	i = 0;
	while(s[i])
	{
		i++;
	}
	return(i)

	// allocate memory
	if(str == 0)
    return(NULL);
	*str = malloc(i + c +1);

}

int main(void)
{

}
/*
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
