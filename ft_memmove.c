/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:41:03 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 15:49:29 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > (unsigned char *)src && dest <= ((unsigned char *)src + n))
		return (ft_memcpyrev(dest, src, n));
	return (ft_memcpy(dest, src, n));
}
