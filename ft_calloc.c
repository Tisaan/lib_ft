/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:58:07 by tseche            #+#    #+#             */
/*   Updated: 2025/10/15 16:45:30 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	n;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb > (size_t) - 1 / size)
		return (NULL);
	n = nmemb * size;
	ptr = malloc(n);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, n));
}
