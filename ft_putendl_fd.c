/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseche <tseche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 00:05:27 by tseche            #+#    #+#             */
/*   Updated: 2025/10/18 20:39:04 by tseche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the string ’s’ to the specified file
descriptor followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s++, ft_strlen(s));
	write(fd, "\n", 1);
}
