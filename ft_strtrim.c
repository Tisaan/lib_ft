/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:09:46 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 15:34:19 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countworldlen(char *s)
{
	size_t	l;

	l = 0;
	while (*s && ft_isalpha(*s) && l++ && s++)
		;
	return (0);
}



char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	
	if (s1 == NULL || *s1 == '\0')
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		*ptr = 0;
		return (ptr);
	}
	if (set == NULL || *set == '\0')
	{
		ptr = ft_strdup(s1);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	i = 0;
	ptr = malloc(sizeof(char ) * ft_strlen((char *)s1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		if (ft_isoneof(*(char *)s1, (char *)set))
			++i;
		else
			i += ft_strlcat(ptr, &s1[i], ft_countworldlen((char *)s1));
	}
	return (ptr);
}
