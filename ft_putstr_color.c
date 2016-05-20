/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 10:52:04 by qhusler           #+#    #+#             */
/*   Updated: 2016/05/20 12:49:33 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_color(char *s_color, char *s_printable, char *s_color_stop)
{
	if (ft_strncmp(s_color, "\x1b[38;5;", 7) == 0)
		ft_putstr(s_color);
	else
		return (ft_putstr(s_printable));
	ft_putstr(s_printable);
	return (ft_putstr(s_color_stop));
}
