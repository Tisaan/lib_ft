/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:12:10 by tseche            #+#    #+#             */
/*   Updated: 2025/10/17 15:26:07 by tseche           ###   ########.fr       */
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
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (s == NULL || *s == (char)c)
		return ((char *)s);
	return (NULL);
}
