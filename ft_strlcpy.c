/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:46:48 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 12:46:54 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*tmp;

	tmp = src;
	while (*src && (src - tmp) <= size)
		*(dst++) = *(src++);
	dst = '\0';
	while (*(src++))
		;
	return (src - tmp);
}
