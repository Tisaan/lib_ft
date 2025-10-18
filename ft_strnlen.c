/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:55:58 by tseche            #+#    #+#             */
/*   Updated: 2025/10/17 15:55:39 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *src, size_t maxlen)
{
	char	*sc;

	sc = (char *)src;
	while (*src && maxlen && maxlen--)
		src++;
	return (src - sc);
}
