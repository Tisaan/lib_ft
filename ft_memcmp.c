/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:06:02 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 20:09:53 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *lhv;
	unsigned char *lhr;

	lhv = (unsigned char *)s1;
	lhr = (unsigned char *)s2;
	while (n && *lhv == *lhr)
	{
		lhv++;
		lhr++;
		n--;
	}
	if (n)
		return (*lhv - *lhr);
	return (0);
}
/*
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i + 1 < n)
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
*/