/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:58:09 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/27 18:27:19 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

 void strlcpy(char *dst, const char *src, size_t size)
 {
    /* get the length of src */
    // --> Wrong intuition: if srclen > 0, i++ until i = size;

    size_t i = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    size_t srclen = i;
    
    /* check =f dstsize is big enough to accomodate src length 
     * plus the NUL character
     */
    /* copy the whole src into dst */
    /* else */
    /* copy dstsize - 1 characters into dst */


 }


  int main(size_t)
 {
    char dst[12] = "helloworld";
    const char src[5] = "five";
    int size = 10;
    strlcpy(dst, src, 4);
    printf("%s\n", dst);
    return(0);
 }