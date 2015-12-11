/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:54:44 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/11 16:03:42 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	new[i] = '\0';
	return (new);
}
