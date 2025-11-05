/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:23:00 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/05 14:21:06 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    //count string s till \0'
    //set new substring name
    //Allocate memory to it within constraints of start for start and len to finish
    //Set start iteration till len i++
    //Copy string portion into new substring as you did in strdup
    //Return char of new string

    size_t i;
    size_t j;
    size_t lenstr;
    char *destring;

    if(s == NULL)
    return(NULL);

    i = 0;
    while(s[i])
    {
        i++;
    }
    lenstr = i;
    while(start + len > lenstr)
    {
        destring = malloc(len + 1);   
    }
    if(destring)
    return(NULL);
    if(start > lenstr)
    return(malloc(1) + '\0');
    
    j = 0;
    for (i = start; len == i; j++)
    destring[j] = s[start+i];
    return(destring);
}

int main(void)
{
    char *s = ft_substr("abcde", 2,4);
    printf("%s\n",s);
    free(s);
    return(0);
}

/* 
Function name ft_substr
Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);
Turn in files -
Parameters 
1. s: The original string from which to create the substring.
2. start: The starting index of the substring within ’s’.
3. len: The maximum length of the substring.
Return value:
 1. The substring.
 2. NULL if the allocation fails.
 3. External functs. malloc
Description:
Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.
*/