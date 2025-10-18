/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:54:23 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 21:16:48 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The  memcpy()  function  copies  n bytes from memory area src to memory area
       dest in ascending order.  The memory areas must not overlap.  Use memmove(3) if the memory  ar‐
       eas do overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ret;

	ret = dest;
	if (!dest && !src)
		return ((void *) NULL);
	while (n--)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		++dest;
		++src;
	}
	return (ret);
}
