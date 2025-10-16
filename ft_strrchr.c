/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:18:50 by tseche            #+#    #+#             */
/*   Updated: 2025/10/16 16:06:58 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = (char *)s;
	s += ft_strlen(s);
	if (!c)
		return ((char *)s);
	while (s >= tmp && *s != (unsigned char)c)
		s--;
	if (*s != (unsigned char)c)
		return (NULL);
	return ((char *)s);
}

// int main(){

// 	char * tmp = ft_strrchr("teste", 0x65);
// 	char * chose = ft_strrchr("teste", 0x0);
// 	printf("%s\n%s", tmp, chose);
// }