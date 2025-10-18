/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:27 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 16:16:50 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// pos_poss_match:
// sert a skip pour avoid des check redondant
// egal a la prochaine apparition du
// 1st char du substr
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_to_find;

	if (*little == '\0')
		return ((char *)big);
	size_to_find = ft_strlen(little);
	i = 0;
	j = 0;
	while (big[i] && i <= len)
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (j == size_to_find - 1)
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return ((void *)0);
}
