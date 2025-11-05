/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:39:45 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/05 11:22:48 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i;
    unsigned char *arr;
    size_t total;

    total = nmemb * size;
    if(nmemb != 0 && total / nmemb != size)
    {
        return(NULL);
    }
    
    arr = malloc(total);
    if(arr == NULL)
    {
        return(NULL);
    }
    
    for (i = 0; i < total; i++)
    {
        arr[i] = 0;   
    }
    
    return arr;
}
/* 
int main(void)
{
    void *arr = ft_calloc(5, sizeof(int));
    if(arr == 0) 
    {
        return 1;
    }
    printf("%p\n", arr);
    free(arr);
    return(0);
}

Subfucntions:

1. It computes how many bytes are needed:
total = nmemb * size
2. allocate that much memory
3. sets every byte of that memory to zero 

edge case:
Accept nmemb == 0 or size == 0

Still call malloc(0) (which returns a valid, unique pointer)

Return that pointer

1st iteration:
    i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }

Key knowledge:
For integers, “all zero bytes” means the integer value is 0.

For pointers, “all zero bytes” means the pointer is NULL.

For chars, it’s the character '\0'.

Unnecessary if:
    if(nmemb == 0 || size == 0)
    { 
        arr = malloc(total);
        return(arr);
    }
*/
