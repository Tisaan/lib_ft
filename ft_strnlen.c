/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:55:58 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 21:38:11 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The  strnlen() function returns the number of bytes in the string pointed to
by s, excluding the terminating null byte ('\0'), but at  most  maxlen.   In
doing  this,  strnlen()  looks  only  at  the first maxlen characters in the
string pointed to by s and never beyond s[maxlen-1].
*/
size_t	ft_strnlen(const char *src, size_t maxlen)
{
	const char *p;
	
	p = memchr(s, 0, n);
	if (p)
		return (p - s);
	return n;
}
