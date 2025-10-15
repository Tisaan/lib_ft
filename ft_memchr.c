/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:34:21 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 15:00:02 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The  memchr() function scans the initial n bytes of the memory area pointed
to by s for the first instance of c.  Both c and the bytes  of  the  memory
area pointed to by s are interpreted as unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n-- && *src && *src != c && src++)
		;
	if (*src == c)
		return (src);
	return (NULL);
}
