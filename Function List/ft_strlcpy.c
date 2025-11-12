/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:58:09 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 17:35:20 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t i = 0; 
  while(src[i] != '\0') 
  {
    i++; 
  } 
  size_t lenstr = i;
  
  if(size == 0)
  {
    return(lenstr);
  }
  
  i = 0;
  while(i < size - 1 && i < lenstr)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';  
  
  return lenstr;
}


/*   int main(void)
 {
    char dst[12] = "helloworld";
    const char src[] = "fiveeee";
    size_t size = ft_strlcpy(dst, src, 0);
    printf("%zu\n", size);
    return(0);
 }

     //len + 1 for dest
        /* get the length of src */
    // --> Wrong intuition: if srclen > 0, i++ until i = size;
    

    /* check if dstsize is big enough to accomodate src length 
     * plus the NUL character
     */
    /* copy the whole src into dst */
    /* else */
    /* copy dstsize - 1 characters into dst */ 