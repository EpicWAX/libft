/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:41:46 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/17 00:41:10 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlst;

	if (!(newlst = (t_list*)malloc(sizeof(newlst) * content_size)))
		return (NULL);
	if (!(content))
	{
		newlst->content = NULL;
		newlst->content_size = 0;
		return (newlst);
	}
	newlst->content = malloc(content_size);
	newlst->content = ft_memcpy(newlst->content, content, content_size);
	newlst->next = NULL;
	return (newlst);
}
