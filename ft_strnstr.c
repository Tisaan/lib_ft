/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:27 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 16:25:29 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//pos_poss_match:
//sert a skip pour avoid des check redondant
//egal a la prochaine apparition du
//1st char du substr 
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	int		size_to_find;
	short	pos_poss_match;

	if (!*little || little[0] == '\0')
		return (big);
	size_to_find = ft_strlen(little);
	i = 0;
	j = 0;
	while (big[i] && len--)
	{
		pos_poss_match = 0;
		while (big[i + j] == little[j])
		{
			if (j == size_to_find - 1)
				return (&big[i]);
			if (big[i + j] == little[0] && !pos_poss_match)
				pos_poss_match = j;
			j++;
		}
		j = pos_poss_match;
		i++;
	}
	return (0);
}
