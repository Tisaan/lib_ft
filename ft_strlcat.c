/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:04:58 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 00:05:02 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//if (l == size)
//pqs de byte dispo dans dest
//
//return (l + ft_strlcpy(dest + l, src, size - l));
//copy at the end of dest
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	l;

	l = ft_strnlen(dest, size);
	if (l == size)
		return (l + ft_strlen(src));
	return (l + ft_strlcpy(dest + l, src, size - l));
}
