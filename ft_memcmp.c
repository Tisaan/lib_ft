/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:02 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 16:06:03 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*lhv;
	unsigned char	*lhr;

	lhv = (unsigned char *)s1;
	lhr = (unsigned char *)s2;
	while (n-- && *lhv++ == *lhr++)
		;
	if (n)
		return (*lhv - *lhr);
	return (0);
}
