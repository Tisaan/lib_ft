/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:41:03 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 22:29:41 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	if (!dest && !src)
		return (NULL);
	if (!n)
		return (dest);
	
	if (dest > src)
		tmp = ft_memcpyrev(dest, src, n);
	else
		tmp = ft_memcpy(dest, src, n);
	return (tmp);
}
