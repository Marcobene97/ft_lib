/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/12 13:30:40 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

 void *ft_memmove(void *dest, const void *src, size_t n)
 {
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d < s)
   {
      for (size_t i = 0; i < n; i++) d[i] = s[i];
   }
    else
   {
      for (size_t i = n; i !=0; i--) d[i-1] = s[i-1];
   }

   return dest;
 }
 
/*  int main(void)
 {
    char dest[15] = "sonounfallito";
    ft_memmove(dest + 4, dest, 4);
    printf("%s\n", dest);
    return(0);
 } */

/*  Alternative Approaches:

1.  unsigned char *pd = d + (i - 1);
const unsigned char *ps = s + (i - 1);
*pd = *ps;
 */

 /*
1. Declare x two pointer strings, one of them constant
2. Function logic: assuming src bigger than dest:
- Dereference pointers turning them into chars for bits counting
- Assuming string s > d ; initialise i var as counter, associating it to n (length of bit to copy)
- Add each time i till i reaches n (i should

*/
