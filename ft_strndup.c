/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:48:31 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 16:02:25 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *src, int start, int finish)
{
	int		i;
	int		size;
	char	*str_dup;

	i = 0;
	size = finish - start + 1;
	str_dup = (char *)ft_calloc(1, sizeof(char) * (size + 1));
	while (start <= finish)
	{
		str_dup[i] = src[start];
		i++;
		start++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
