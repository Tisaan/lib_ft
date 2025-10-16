/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpyrev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:00:14 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 22:30:38 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpyrev(void *dest, const void *src, size_t n)
{
	while (n)
	{
		--n;
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return ((void *)dest);
}
