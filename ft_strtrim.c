/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 07:34:46 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/19 21:03:41 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	char	*new_s;

	i = 0;
	if (!s)
		return (NULL);
	else
	{
		if (ft_strcmp(s, "") == 0)//
			return (ft_strdup(""));//
		while (s && ft_iswhsep(s[i]) == 1)
			i++;
		start = i;
		if (s[start] == '\0')//
			return (ft_strdup(""));//
		else
		{
			i = ft_strlen(s);
			while (s && ft_iswhsep(s[--i]) != 0)
				;
			if (!(new_s = ft_strnew((i - start) + 1)))
				return (NULL);
			new_s = ft_strsub(s, start, (i - start) + 1);
			return (new_s);
		}
	}
	return (NULL);
}

/*int		main(int ac, char **av)
  {
  if (ac > 1)
  ft_putendl(ft_strtrim(av[1]));
  return (0);
  }*/

/*{
  int		start;
  int		k;
  int		len;

  start = 0;
  if (ft_strcmp("", s) == 0)
  return (ft_strdup(""));
  while (ft_iswhsep(s[start]) == 1)
  ++start;
  if (s[start] == '\0')
  return (ft_strdup(""));
  k = -1;
  while (s && s[++k])
  if (ft_iswhsep(s[k]) == 0)
  len = ++k;
  if (s && len == 0)
  return (ft_strdup(s));
  else
  return (ft_strsub(s, start, (len - start)));
  return (NULL);
  }*/
