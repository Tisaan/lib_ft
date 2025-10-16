/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:27 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 19:58:42 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//pos_poss_match:
//sert a skip pour avoid des check redondant
//egal a la prochaine apparition du
//1st char du substr 
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		size_to_find;
	size_t		pos_poss_match;

	if (*little == '\0')
		return ((char *)big);
	if (len < ft_strlen(little))
		return (NULL);
	size_to_find = ft_strlen(little) - 1;
	i = 0;
	j = 0;
	while (big[i])
	{
		pos_poss_match = 0;
		while (big[i + j] == little[j])
		{
			if (j == size_to_find)
				return ((char *)&big[i]);
			if (big[i + j] == little[0] && !pos_poss_match)
				pos_poss_match = j;
			j++;
		}
		j = pos_poss_match;
		i++;
	}
	return (0);
}
