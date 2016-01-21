/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xrotn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 00:16:50 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/21 00:46:04 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_xrotn(char *s, int n)
{
	int		i;
	char	*tmp;

	i = -1;
	tmp = ft_strdup(s);
	while (tmp && tmp[++i])
	{
		if (tmp[i] > 64 && tmp[i] < 91)
			tmp[i] = ((tmp[i] - 90 + n) % 26 + 90);
		if (tmp[i] > 96 && tmp[i] < 123)
			tmp[i] = ((tmp[i] - 122 + n) % 26 + 122);
	}
	tmp[i] = '\0';
	return (tmp);
}
