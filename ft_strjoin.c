/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 04:07:01 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/13 07:03:05 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_s;

	new_s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_s)
		return (NULL);
	new_s = ft_strdup(s1);
	new_s = ft_strcat(new_s, s2);
	new_s[ft_strlen(new_s)] = '\0';
	return (new_s);
}
