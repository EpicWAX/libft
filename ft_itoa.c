/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:25:57 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/20 23:21:08 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		sign;

	if (!n || n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = n < 0 ? 1 : 0;
	if (!(s = (char*)malloc(sizeof(char) * ((intlen(n) + sign) + 1))))
		return (NULL);
	*s = '\0';
	while (n != 0)
	{
		*--s = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		*--s = '-';
	return (s);
}
