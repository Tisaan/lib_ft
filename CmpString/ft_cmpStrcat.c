/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpStrcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: von <von@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:27:52 by von               #+#    #+#             */
/*   Updated: 2026/05/22 00:44:29 by von              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmpString.h"


t_cmpstring	*ft_cmpStrcat(t_cmpstring *dest, t_cmpstring *str)
{
	size_t  idx;

	idx = 0;
	while (idx < str->idx && idx < CMPSTRING_SIZE)
	{
		dest->str[dest->idx + idx] = str->str[idx];
		idx++;
	}
	dest->idx += idx;
	return (dest);
}


t_cmpstring	*ft_cmpStrcatStr(t_cmpstring *dest, char *str)
{
	size_t  idx;
	size_t	len;

    idx = 0;
	len = ft_strlen(str);
    while (idx < len && idx < CMPSTRING_SIZE)
    {
        dest->str[dest->idx + idx] = str[idx];
        idx++;
    }
	dest->idx += idx;
    return (dest);
}