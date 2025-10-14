/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/14 19:40:13 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>

 
void *ft_memset(void *s, int c, size_t n)
{
    //unsigned char *b;
    // size_t n;

    // n = 0;

    unsigned char *p = (unsigned char *)s; // converting to a byte pointer
    int c = unsigned char *b; // convert to a byte

    while (*p[n] != len(c))
    {
        n++;
    }
       return (*p[n]);
}


int main(int c, void *s)
{
    size_t n;
    ft_memset("ao", 48, 2);
    printf("%p\n", &n);
}