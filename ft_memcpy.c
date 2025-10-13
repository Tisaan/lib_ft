/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:54:23 by tseche            #+#    #+#             */
/*   Updated: 2025/10/13 17:54:26 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ret;

	ret = dest;
	while (*(unsigned char *)dest && ((ret - (unsigned char *)src) <= n))
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		++dest;
		++src;
	}
	return (ret);
}
