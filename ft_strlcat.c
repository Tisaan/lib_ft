/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:04:58 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 21:08:59 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The strlcpy() and strlcat() functions copy and concatenate strings respec‐
     tively.  They are designed to be safer, more consistent, and less error prone
     replacements for strncpy(3) and strncat(3).  Unlike those functions, strlcpy()
     and strlcat() take the full size of the buffer (not just the length) and guar‐
     antee to NUL-terminate the result (as long as size is larger than 0 or, in the
     case of strlcat(), as long as there is at least one byte free in dst).  Note
     that a byte for the NUL should be included in size.  Also note that strlcpy()
     and strlcat() only operate on true “C” strings.  This means that for strlcpy()
     src must be NUL-terminated and for strlcat() both src and dst must be NUL-ter‐
     minated.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	l;

	l = ft_strnlen(dest, size);
	if (l == size)
	{
		l += ft_strlen(src);
		return (l);
	}
	l += ft_strlcpy(dest + l, src, size - l);
	return (l);
}
