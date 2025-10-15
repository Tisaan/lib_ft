/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpyrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:00:14 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 15:00:16 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpyrev(void *dest, const void *src, size_t n)
{
	unsigned char	*ret;

	ret = dest;
	src += n;
	while (n--)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		++dest;
		--src;
	}
	return ((void *)ret);
}
