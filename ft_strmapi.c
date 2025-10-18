/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:02:46 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 16:08:49 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*src;
	size_t	i;

	src = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!src)
		return (NULL);
	i = 0;
	while (s[i])
	{
		src[i] = (*f)(i, s[i]);
		++i;
	}
	src[i] = 0;
	return (src);
}
