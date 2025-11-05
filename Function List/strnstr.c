/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:31:02 by marcobenede       #+#    #+#             */
/*   Updated: 2025/11/04 16:14:53 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
//#include <stdio.h> 

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t len_little;
    size_t j;

    
    if(*little == '\0')
    return((char *)big);
    
    i = 0;
    while(little[i] != '\0') i++;
    len_little = i;

    i = 0;
    while(i + len_little <= len && big[i])
    {
        j = 0;
        while( j < len_little && big[i + j] == little[j]) j++;
        if (j == len_little)
        return (char *)(big + i);
        i++;
    }
    if (len_little > len)
    return(NULL);

    return(NULL);
}
/* int main(void)
{
    const char *big = "helloworld";
    const char *little = "wo";
    size_t len = 8;
    char *res = ft_strnstr(big,little,len);
    if (res) 
    printf("found: %p\n", res);
    else
    printf("not found\n");
} */
