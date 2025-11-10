/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:03:47 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/10 09:13:15 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strdup(const char *s)
{
    size_t i;
    size_t j;
    size_t lenstr;
    char *memstr;

    if(s == NULL)
    return(NULL);

    i = 0;
    while(s[i])
    {
        i++;
    }
    lenstr = i;
    memstr = malloc(lenstr + 1);
    if(memstr == 0)
    return(NULL);
    for (j = 0; j <= i; j++)
    memstr[j] = s[j];
    return(memstr);
}

/*
int main(void)
{
    char *s = ft_strdup("ok");
    printf("%p\n",s);
    printf("%s\n",s);
    free(s);
    return(0);
}

    The strdup() function returns a pointer to a new string which is a duplicate of the string s.
Memory for the new string is obtained with malloc, and can later be freed with free().
On error, it returns NULL.

Procedural:
You give it a source string (s).

It figures out how long that string is.

It allocates enough memory to hold a copy of it (including the final '\0').

It copies every character one-by-one from the original string into the new memory.

It returns the pointer to that new copy.
*/
