/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 00:11:07 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/02 15:56:19 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    const char *p = s;
    
    for(;;)
    {
        if(*p == (unsigned char) c)
        return((char *)p);
        if(*p == '\0')
        return(NULL);
        p++;
    }
 }

int main(void)
{
    int c;
    const char *s;
    
    c = 'c';
    s = "+=!24c";
    char *res = ft_strchr(s, c);
    if (res)
        printf("Found at offset: %ld\n", (long)(res - s));
    else
        printf("Character not found.\n");
}
/* 
1. Locates 1st occurrance of c (converted to a char) in the string s

- Define string 
- Convert to char
- While string != "/0"
- i++
- if i = c, return c
- if /0, return Null.

- ++i

for (init; condition; step) 

 */
