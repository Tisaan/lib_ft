/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:45:38 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 17:45:41 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (l1 + l2));
	if (ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, l1);
	ft_strlcat(ptr, s2, l2);
	return (ptr);
}
