/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/03 15:44:35 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function locates the first occurrence of c (converted to an unsigned char) in string s

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    c = (unsigned char)c;
    const unsigned char *p = (const unsigned char *)s;
    size_t i;

    i = 0;
    while(i < n)
    {
        if(p[i] == c)
        return((void *)(p + i));
        i++;
    }
    return(NULL);
}

int main(void)
{
    const char s[] = "abcde";
    char c = 'c';
    size_t n = 3;
    void *res = ft_memchr(s, c, n);
    printf("%p\n", res);
    return(0);
}


//returns a pointer to the byte located, or NULL if no such byte exists within n bytes
