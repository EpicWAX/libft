/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:38:22 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/18 01:02:35 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int				i;
	unsigned char	*c;

	i = -1;
	c = NULL;
	c = (unsigned char *)malloc(size);
	if (c)
		while (size--)
			c[++i] = 0;
	return ((void *)c);
}
