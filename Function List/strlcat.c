/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcobenedettelli <marcobenedettelli@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:44:15 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/31 10:12:49 by marcobenede      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

 size_t ft_strlcat(char *dst, const char *src, size_t size)
 {
      size_t i;
      size_t j;
      size_t k;
      size_t space;


      i = 0;
      while(src[i] != '\0')
      {
        i++;
      }
      size_t srclen = i;

      j = 0;
      while(dst[j] != '\0' && j < size)
      {
        j++;
      }
      size_t dstlen = j;

      if(dstlen >= size)
      {
        return(size + srclen);
      }
      
      space = size - dstlen - 1;
      k = 0;
      
      while(k < space && src[k] != '\0')
      {
        dst[dstlen + k] = src[k];
        k++;
      }

      if(size > dstlen)
      {
        dst[dstlen + k] = '\0';
      }
      
    return(dstlen + srclen);

 }

 /*
 #include <stdio.h>
 
 int main (void)
 {
    char dst[11] = "helloworld";
    const char src[] = "thisisMecna";
    size_t size = ft_strlcat(dst, src, 20);
    printf("%zu\n", size);
    printf("resulting string=%s\n", dst);
    return(0);
 }

  1. Find how long dst already is (up to dstsize — to avoid going out of bounds).
2. Find the length of src.
3. If dstsize <= dst_len:
     → return dstsize + src_len (because no concatenation happens).
4. Otherwise:
     → copy as many characters from src to the end of dst as will fit (dstsize - dst_len - 1).
5. Add a '\0' terminator.
6. Return dst_len + src_len. 

i = 0;
      if(i <= size && dstlen > 0)
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
    



*/