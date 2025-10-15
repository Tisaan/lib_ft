/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:12:10 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 14:45:15 by tseche           ###   ########.fr       */
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
	while (*s && *s++ != c)
		;
	if (!*s)
		return (NULL);
	return (s);
}
