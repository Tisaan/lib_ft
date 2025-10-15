/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:38:36 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 16:46:49 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	tmp;
	
	ptr = (char *)malloc(sizeof(char) * (len - start));
	if (!ptr)
		return (NULL);
	tmp = ft_strlcpy(ptr, s, len - start);
	return (tmp);
} 
