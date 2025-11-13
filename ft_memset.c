/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenedet <mbenedet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:59:31 by mbenedet          #+#    #+#             */
/*   Updated: 2025/11/13 12:11:07 by mbenedet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(ptr++) = (unsigned char) c;
		n--;
	}
	return (s);
}

/* int main(void)
{
    char c[] = "nooooot";  // writable memory (6 bytes including '\0')

    printf("Before: %s\n", c);

    // Test 1: replace first 3 bytes with 'A'
    ft_memset(c, 'v', 5);
    printf("After  (fill 'v', len 5): %s\n", c);

    // // Test 2: reset entire buffer to 0
    // ft_memset(buffer, 0, 6);
    // printf("After  (fill 0, len 6): \"%s\"\n", buffer); //prints empty string

    // // Test 3: view raw byte values (for non-printable fills)
    // char data[] = "okfh";
    // ft_memset(data, 255, 4);
    // printf("Raw bytes after fill 255: ");
    // for (int i = 0; i < 4; i++)
    //     printf("%d ", (unsigned char)data[i]);
    // printf("\n");

    return 0;
} */