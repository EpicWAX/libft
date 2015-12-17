/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:22:19 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/15 23:22:15 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;

	if (!ft_strnew(ft_strlen(s)))
		return (NULL);
	else
	{
		dest = ft_strnew(ft_strlen(s));
			ft_strcpy(dest, s);
			return (dest);
	}
	return (NULL);
}

/*int		main()
{
	const char s[] = "star : wars:";

	ft_putendl(ft_strdup(s));
	return (0);
}*/
