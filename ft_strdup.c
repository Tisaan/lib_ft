/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:27:51 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 15:17:46 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	l;

	l = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * l + 1);
	if (!ptr)
		return (NULL);
	ft_strcpy(ptr, s, l);
	return (ptr);
}
