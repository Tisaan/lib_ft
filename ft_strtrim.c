/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:09:46 by tseche            #+#    #+#             */
/*   Updated: 2025/10/14 18:09:48 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		deb;
	int		end;
	int		l;
	char	*ptr;
	char	*s;

	deb = 0;
	end = 0;
	l = ft_strlen(s1);
	s = s1;
	while (*s1++ && ft_isoneof(s1, set), deb++)
		;
	s1 += l;
	while (*s1-- && ft_isoneof(s1, set) && end++)
		;
	ptr = (char *)malloc(sizeof(char) * (l - end - deb));
	if (!ptr)
		return (NULL);
	return (ft_strlcpy(ptr, s[deb], l - end));
}
