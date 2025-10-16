/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:17:54 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 18:57:38 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src, size_t size)
{
	char	*tmp;

	tmp = (char *)src;
	while (*src && size && size--)
		*(dst++) = *(src++);
	*dst = '\0';
	return (tmp);
}
