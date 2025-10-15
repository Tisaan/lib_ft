/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:27:51 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 17:27:53 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	l;

	l = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * l);
	if (!ptr)
		return (NULL);
	return (ft_strlcpy(ptr, s, l));
}
