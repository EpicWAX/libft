/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 00:26:11 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/18 00:28:41 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iswhsep(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
