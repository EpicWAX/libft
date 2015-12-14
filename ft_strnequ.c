/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 22:00:20 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/12 22:30:03 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	else
	{
		while ((*s1 != '\0' || *s2 != '\0') && i < n)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
			i++;
		}
		return (1);
	}
}
