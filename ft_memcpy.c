/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:54:23 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 16:02:45 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
