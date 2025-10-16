/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/10/16 19:36:54 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>

 
// void *ft_memset(void *s, int c, size_t n)
// {
//     //unsigned char *b;
//     // size_t n;

//     // n = 0;

//     unsigned char *p = (unsigned char *)s; // converting to a byte pointer
//     int c = unsigned char *b; // convert to a byte

//     while (*p[n] != len(c))
//     {
//         n++;
//     }
//        return (*p[n]);
// }


// int main(int c, void *s)
// {
//     size_t n;
//     ft_memset("ao", 48, 2);
//     printf("%p\n", &n);
// }
ggg

void    *ft_memset(void *s, int c, size_t n)
{
    /* declaring our temporary pointer */
    unsigned char    *ptr;
    
    /* making our temporary pointer equal to s converted to unsigned char * */
    ptr = (unsigned char *) s;
    /* looping on our temporary pointer while we didn't reach n */
    while (n > 0)
    {
    /* assigning the unsigned char value of c to the current byte in our temporary pointer */
        *(ptr++) = (unsigned char) c;
        /* reducing the len by one so we only set n bytes */
        n--;
    }
    /* return the function's first parameter, void *s */
    return (s);
}


// void    *ft_memset(void *s, int c, size_t n);

// int main(void)
// {
//     char c[] = "nooooot";  // writable memory (6 bytes including '\0')
//void    *ft_memset(void *s, int c, size_t n);

// int main(void)
// {
//     char c[] = "nooooot";  // writable memory (6 bytes including '\0')

//     printf("Before: %s\n", c);

//     // Test 1: replace first 3 bytes with 'A'
//     ft_memset(c, 'v', 5);
//     printf("After  (fill 'v', len 5): %s\n", c);

//     // // Test 2: fill all bytes (including '\0') with 'Z'
//     // ft_memset(buffer, 'Z', 6);
//     // printf("After  (fill 'Z', len 6): %s\n", buffer);  // may print garbage, since '\0' is gone

//     // // Test 3: reset entire buffer to 0
//     // ft_memset(buffer, 0, 6);
//     // printf("After  (fill 0, len 6): \"%s\"\n", buffer);  // prints empty string

//     // // Test 4: view raw byte values (for non-printable fills)
//     // char data[] = "okfh";
//     // ft_memset(data, 255, 4);
//     // printf("Raw bytes after fill 255: ");
//     // for (int i = 0; i < 4; i++)
//     //     printf("%d ", (unsigned char)data[i]);
//     // printf("\n");

//     return 0;
// }
//     printf("Before: %s\n", c);

//     // Test 1: replace first 3 bytes with 'A'
//     ft_memset(c, 'v', 5);
//     printf("After  (fill 'v', len 5): %s\n", c);

//     // // Test 2: fill all bytes (including '\0') with 'Z'
//     // ft_memset(buffer, 'Z', 6);
//     // printf("After  (fill 'Z', len 6): %s\n", buffer);  // may print garbage, since '\0' is gone

//     // // Test 3: reset entire buffer to 0
//     // ft_memset(buffer, 0, 6);
//     // printf("After  (fill 0, len 6): \"%s\"\n", buffer);  // prints empty string

//     // // Test 4: view raw byte values (for non-printable fills)
//     // char data[] = "okfh";
//     // ft_memset(data, 255, 4);
//     // printf("Raw bytes after fill 255: ");
//     // for (int i = 0; i < 4; i++)
//     //     printf("%d ", (unsigned char)data[i]);
//     // printf("\n");

//     return 0;
// }