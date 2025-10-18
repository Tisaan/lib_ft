/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:46:48 by tseche            #+#    #+#             */
/*   Updated: 2025/10/17 23:06:14 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*tmp;

	tmp = dst;
	if (!size--)
		return (dst - tmp + ft_strlen(src));
	while (*src && size && size--)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - tmp + ft_strlen(src));
}
