/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpStrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: von <von@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:29:12 by von               #+#    #+#             */
/*   Updated: 2026/05/22 00:41:15 by von              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmpString.h"

t_cmpstring	*ft_cmpStrdup(t_cmpstring *str)
{
	t_cmpstring	*n;
	size_t		idx;

	n = ft_calloc(sizeof(t_cmpstring), 1);
	if (!n)
		return (NULL);
	idx = 0;
	n->idx = str->size;
	n->size = CMPSTRING_SIZE;
	while (idx < str->size && idx < CMPSTRING_SIZE)
	{
		n->str[idx] = str->str[idx];
		idx++;
	}
	return (n);
}

t_cmpstring	*ft_cmpStrdupStr(char *str)
{
	t_cmpstring	*n;
	size_t		idx;

	n = ft_calloc(sizeof(t_cmpstring), 1);
	if (!n)
		return (NULL);
	idx = 0;
	n->idx = ft_strlen(str);
	n->size = CMPSTRING_SIZE;
	while (idx < n->idx && idx < CMPSTRING_SIZE)
	{
		n->str[idx] = str[idx];
		idx++;
	}
	return (n);
}