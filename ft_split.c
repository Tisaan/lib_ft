/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:36:17 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 16:44:15 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	index;
	size_t	i;
	size_t	j;

	arr = (char **)malloc(sizeof(char *) * (ft_strnocc(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (!ft_strchr(s[i + j], c) != (s + 1))
			++j;
		*arr[index++] = ft_strndup(s[i + j], j - (ft_strchr(s[i + j], c) - s));
		if (!arr)
		{
			ft_freeptr(arr);
			return (NULL);
		}
		s += (j + (ft_strchr(s[i + j], c) - s));
	}
	*arr = "\0";
	return (arr);
}
