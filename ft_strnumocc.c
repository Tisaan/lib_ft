/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnumocc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:10:09 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 23:44:48 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnumocc(char *s, char c)
{
	size_t	count;
	size_t	l;

	l = ft_strlen(s);
	count = 0;
	while (s && *s == c && ++count)
		s++;
	return (count);
}
