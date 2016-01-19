/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:36:15 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/19 22:01:01 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	if (!s || !f || !(new_s = ft_strdup(s)))
		return (NULL);
	else
	{
		i = 0;
		while (new_s && new_s[i])
		{
			new_s[i] = f(new_s[i]);
			i++;
		}
		new_s[i] = '\0';
		return (new_s);
	}
}
