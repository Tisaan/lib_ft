/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:46:48 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 16:32:54 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)src;
	while (*src && ((unsigned char *)src - tmp) <= size)
		*(dst++) = *(src++);
	*dst = '\0';
	while (*(src++))
		;
	return ((unsigned char *)src - tmp);
}
