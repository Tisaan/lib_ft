/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnumocc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:10:09 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 21:21:50 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
get the number of occurence of c in s;
*/
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
