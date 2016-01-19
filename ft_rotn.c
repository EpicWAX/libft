/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 00:16:50 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/18 13:27:50 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rotn(char *s, int n)
{
	int		i;
	char	*tmp;

	i = -1;
	tmp = ft_strdup(s);
	while (tmp && tmp[++i])
	{
		if (tmp[i] > 64 && tmp[i] < 91)
			tmp[i] = ((tmp[i] - 'A' + n) % 26 + 'A');
		if (tmp[i] > 96 && tmp[i] < 123)
			tmp[i] = ((tmp[i] - 'a' + n) % 26 + 'a');
	}
	tmp[i] = '\0';
	return (tmp);
}
