/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:54:44 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/13 06:28:24 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new_s;

	new_s = (char *)malloc(sizeof(char) * size + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_s[i] = '\0';
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
