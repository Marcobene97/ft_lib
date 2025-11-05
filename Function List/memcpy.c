/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/04 14:41:38 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{

    void *start = dest;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    while(n--)
    {
        *d++ = *s++;
    }
    return(start);
}


/* int main(void)
{
    char dest[10] = "Marco";
    char src[] = "Benedettelli";
    size_t n = 3;
    //ft_memcpy(dest + 2, "Benedettelli", 3);
    memcpy(dest + 2, "Benedettelli", n);
    printf("%s\n", dest);
    return(0);
} */
