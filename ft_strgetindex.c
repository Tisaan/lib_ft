/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strgetindex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:17:41 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 21:20:42 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
get the position of a char pointer in a string
*/
size_t	ft_strgetindex(char *s, char *pos)
{
	size_t	i;

	i = 0;
	while (s != pos && s++ && i++)
		;
	if (!*s)
		return (NULL);
	return (i);
}
