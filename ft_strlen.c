/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:13:23 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 21:05:55 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
checks for any printable character including space.
*/
size_t	ft_strlen(const char *src)
{
	char	*sc;

	sc = (char *)src;
	while (*src)
		src++;
	return (src - sc);
}
