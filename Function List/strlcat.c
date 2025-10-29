/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:44:15 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/29 20:19:12 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

 size_t ft_strlcat(char *dst, const char *src, size_t size)
 {
      size_t i;
      size_t j;

      i = 0;
      while(src[i] != '\0')
      {
        i++;
      }
      size_t srcsize = i;

      j = 0;
      while(dst[j] > size & j != size)
      {
        j++;
      }
      size_t dstsize = j;

      if(dstsize >= size)
      {
        dst[j] = src[i] && dst[j];
      }

      i = 0;
      if(i <= size && dstsize > 0)
      {
        dst[j] = dst[j] && src[i];
        i++;
      }

    if(size == 0)
    {
      return(dstsize);
    }
    
    i = 0;
    while(i < size && size < dstsize)
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = '\0';  
    
    return(dstsize + srcsize);

 }

 int main (void)
 {
    char dst[12] = "helloworld";
    const char src[11] = "thisisMecna";
    size_t size = ft_strlcat(dst, src, 12);
    printf("%zu\n", size);
    return(0);
 }


/*  1. Find how long dst already is (up to dstsize — to avoid going out of bounds).
2. Find the length of src.
3. If dstsize <= dst_len:
     → return dstsize + src_len (because no concatenation happens).
4. Otherwise:
     → copy as many characters from src to the end of dst as will fit (dstsize - dst_len - 1).
5. Add a '\0' terminator.
6. Return dst_len + src_len. */