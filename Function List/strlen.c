/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/13 20:35:12 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>

const char* ft_strlen(const char *i)
{
    while (i >= 33 && i <= 127 && i != '\0')
    {
        i++;
    } 
       return (const char *i);
}


int main(void)
{
    const char *i;
    *i = ft_strlen("2356");
    printf("%i\n", (const char)i);
}
