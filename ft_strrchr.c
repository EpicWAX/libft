/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:30:05 by qhusler           #+#    #+#             */
/*   Updated: 2015/12/11 14:01:42 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (c == s[i])
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}


/*char	*ft_strrchr(const char *s, int c)
{
	ft_putchar('\n');
	ft_putnbr(ft_strlen(s));
	ft_putchar('\n');
	while (*s)
		s++;
	ft_putchar(*s);
	ft_putchar('\n');
	while (c - *s != 0)
	{
		if (c == *s)
			return ((char *)s);
		ft_putchar('\n');
		ft_putchar('o');
		s--;
	}
	return (NULL);
}*/
