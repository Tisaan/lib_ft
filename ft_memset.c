/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:22:29 by tseche            #+#    #+#             */
/*   Updated: 2025/10/13 17:22:31 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (*tmp && ((tmp - (unsigned char *)s) <= n))
	{
		*tmp++ = c;
	}
	return (s);
}
