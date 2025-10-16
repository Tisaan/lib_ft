/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:48:31 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 17:25:20 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * n);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, n);
	return (ptr);
}
