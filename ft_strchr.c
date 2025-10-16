/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:12:10 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 16:09:48 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The  strchr()  function  returns  a  pointer
to the first occurrence of the
character c in the string s.
*/
char	*ft_strchr(const char *s, int c)
{
	if (!c)
	{
		s += ft_strlen(s);
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (s == NULL)
		return ((char *)s);
	return (NULL);
}
