/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 23:07:16 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/15 23:41:36 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_s;

	new_s = ft_strnew(len);
	if (!new_s)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(new_s, s, len);
	new_s[len] = '\0';
	return (new_s);
}
