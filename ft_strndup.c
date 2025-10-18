/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:48:31 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 19:03:06 by tseche           ###   ########.fr       */
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
	str_dup = (char *)malloc(sizeof(char) * (size + 1));
	if (!str_dup)
		return (NULL);
	while (start <= finish)
	{
		str_dup[i] = src[start];
		i++;
		start++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
