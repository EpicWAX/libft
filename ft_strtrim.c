/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 07:34:46 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/22 15:22:37 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	char	*new_s;

	if (!s)
		return (NULL);
	i = 0;
	while (s && ft_iswhsep(s[i]) == 1)
		i++;
	start = i;
	if (s[start] == '\0')
		return (ft_strdup(""));
	i = ft_strlen(s);
	while (s && ft_iswhsep(s[--i]) != 0)
		;
	if (!(new_s = ft_strnew((i - start) + 1)))
		return (NULL);
	new_s = ft_strsub(s, start, (i - start) + 1);
	return (new_s);
}
