/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:37:19 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/10 12:36:01 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

 char *ft_strrchr(const char *s, int c)
 {
    const char *p = s;

    while(*p != '\0')
    {
        p++;
    }

    while(p >= s)
    {
        if(*p == (unsigned char)c)
        return((char *)p);
        p--;
    }
    return(NULL);
 }

 /* int main(void)
 {
    int c;
    const char *s;

    c = '\0';
    s = "+=!2c!4c";
    char *res = ft_strrchr(s, c);
    if (res)
        printf("Found at offset: %ld\n", (long)(res - s));
    else
        printf("Character not found.\n");
 } */
