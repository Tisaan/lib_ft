/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpString.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: von <von@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:12:17 by von               #+#    #+#             */
/*   Updated: 2026/05/22 01:00:42 by von              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMPSTRING_H
# define CMPSTRING_H

#include <stddef.h>
#include "../libft.h"

#ifndef CMPSTRING_SIZE
#	define CMPSTRING_SIZE 1024
#endif


/*
	String type based on a buffer
*/
typedef struct	s_cmpstring
{
	size_t	size;
	char	str[CMPSTRING_SIZE];
	size_t	idx;
}				t_cmpstring;

void		ft_cmpStrreset(t_cmpstring *s);
t_cmpstring *ft_cmpStrnew(char *s);
t_cmpstring	*ft_cmpStrcpy(t_cmpstring *dest, t_cmpstring *str);
t_cmpstring	*ft_cmpStrcpyStr(t_cmpstring *dest, char *str);
t_cmpstring	*ft_cmpStrdup(t_cmpstring *str);
t_cmpstring	*ft_cmpStrdupStr(char *str);
t_cmpstring	*ft_cmpStrcat(t_cmpstring *dest, t_cmpstring *str);
t_cmpstring	*ft_cmpStrcatStr(t_cmpstring *dest, char *str);
size_t		ft_cmpStrlen(t_cmpstring *s);
size_t		ft_cmpStrcapacity(void);

#endif