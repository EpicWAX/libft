/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:22:19 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/11 08:25:20 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(s) + 1;
	if ((dest = (char*)malloc(sizeof(char) * i)))
	{
		ft_strcpy(dest, s);
		return (dest);
	}
	return (NULL);
}
