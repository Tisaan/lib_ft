/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:36:17 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 18:00:55 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	index_find;

	if (!s || !*s || !c)
	 	return (NULL);
	arr = malloc(sizeof(char *) * ft_strnumocc((char *)s, c));
	index_find = ft_strchr(s, c) - s;
	if (!index_find)
	{
		*arr = ft_strdup(s);
		if (!arr)
			return (NULL);
		*++arr = 0;
		return (arr);
	}
	while (s)
	{
		index_find = ft_strchr(s, c) - s;
		if (!index_find)
			break ;
		*arr = ft_strndup(s, index_find);
		if (!*arr++)
		{
			ft_freeptr((void **)arr);
			return (NULL);
		}
		s += index_find;
	}
	*arr = "\0";
	return (arr);
}

int main()
{
	char *string = "      split       this for   me  !       ";
	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void*)0)});
	char **result = ft_split(string, ' ');
	for (int i = 0; expected[i]; i++)
	{
		printf("Expected: %s, ", expected[i]);
		printf("Got: %s\n", result[i]);
	}

}