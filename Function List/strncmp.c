/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:31:02 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/04 15:39:13 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h> 

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
 
    if(n == 0)
    {
        return(0);
    }

    i = 0;
    while(i < n && s1[i] !='\0' && s2[i] !='\0' && s1[i] == s2[i])
    {
        i++;
    }
    if(i == n)
        return(0);
    
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int main(void)
{
    const char *s1 = "abcd";
    const char *s2 = "abcd";
    size_t n = 6;
    int res = ft_strncmp(s1,s2,n);
    printf("%i\n", res);
    return(res);
}

/* ft_strncmp("abc","abc",3) → 0

ft_strncmp("abc","abd",3) → 'c' - 'd' → negative

ft_strncmp("ab","abc",3) → compares 'a'=='a', 'b'=='b', then '\0' vs 'c' → negative (0 - 'c')

ft_strncmp("abc","ab",3) → positive ('c' - 0)

ft_strncmp("abc","abc",0) → 0 (by definition) */