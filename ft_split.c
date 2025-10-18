/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:36:17 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 16:08:10 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char charset)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		while (str[i] == charset)
			i++;
		if (!str[i])
			break ;
		while (str[i] != charset && str[i])
			i++;
		++count;
	}
	return (count);
}

char	**ft_split(char const *str, char charset)
{
	char	**split;
	int		start;
	int		size;
	int		j;
	int		i;

	i = -1;
	j = 0;
	size = count_words((char *)str, charset);
	split = (char **)ft_calloc(size + 1, sizeof(char *));
	if (!split)
		return (NULL);
	start = 0;
	while (str[++i])
	{
		if (str[i] != charset && (i == 0 || str[i - 1] == charset))
			start = i;
		if (str[i] != charset && (str[i + 1] == charset || !str[i + 1]))
		{
			split[j] = ft_strndup((char *)str, start, i);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
