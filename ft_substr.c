/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:38:36 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 17:38:38 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	
	ptr = (char *)malloc(sizeof(char) * (len - start));
	if (!ptr)
		return (NULL);
	return (ft_strlcpy(ptr, s, len - start));
} 
