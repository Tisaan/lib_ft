/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpStrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: von <von@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:38:09 by von               #+#    #+#             */
/*   Updated: 2026/05/22 00:40:28 by von              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cmpString.h"

inline size_t		ft_cmpStrlen(t_cmpstring *s)
{
	return (s->idx);
}

inline size_t		ft_cmpStrcapacity(void)
{
	return (CMPSTRING_SIZE);
}