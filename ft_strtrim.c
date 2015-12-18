/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 07:34:46 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/17 11:24:58 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		start;
	int		k;
	int		len;

	start = 0;
	if (ft_strcmp("", s) == 0)
		ft_strdup("");
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		++start;
	k = -1;
	while (s && s[++k])
		if (s[k] != ' ' && s[k] != '\t' && s[k] != '\n')
			len = ++k;
	if (s && len == 0)
		return (ft_strdup(s));
	else
		return (ft_strsub(s, start, (len - start)));
	return (NULL);
}
