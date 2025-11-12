/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 13:31:34 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && s1 && s2)
    {
        if(s1 == s2)
        return(0);
        if(s1 != s2)
        {
            return(s1 - s2);
        }
        i++;
    }
}

/* int main(void)
{
    const char s1[] = "abcde";
    const char s2[] = "efgba";
    size_t n = 4;
    int res = ft_memcmp(s1, s2, n);
    printf("%lu\n", res);
    return(0);
} */


// function locates the first occurrence of c (converted to an unsigned char) in string s
//returns a pointer to the byte located, or NULL if no such byte exists within n bytes
