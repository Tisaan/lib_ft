/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpStrnew.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: von <von@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:54:20 by von               #+#    #+#             */
/*   Updated: 2026/05/22 00:59:32 by von              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmpString.h"

t_cmpstring *ft_cmpStrnew(char *s)
{
	t_cmpstring	*n;
	size_t		idx;
	size_t		len;

	n = (t_cmpstring *)ft_calloc(sizeof(t_cmpstring), 1);
	if (!n)
		return (NULL);
	idx = 0;
	len = ft_strlen(s);
	while (idx < len && idx < CMPSTRING_SIZE)
	{
		n->str[idx] = s[idx];
		idx++;
	}
	return (n);
}