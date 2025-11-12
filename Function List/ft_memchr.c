/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 13:31:11 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* int main(void)
{
    const char s[] = "abcde";
    char c = 'c';
    size_t n = 3;
    void *res = ft_memchr(s, c, n);
    printf("%p\n", res);
    return(0);
} */

// function locates the first occurrence of c (converted to an unsigned char) in string s
//returns a pointer to the byte located, or NULL if no such byte exists within n bytes
