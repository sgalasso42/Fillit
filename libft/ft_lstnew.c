/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:36:09 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/10 11:36:11 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(lst->content = (void*)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	lst->content = (content == NULL ? NULL :
		ft_memcpy(lst->content, content, content_size));
	lst->content_size = (content == NULL ? 0 : content_size);
	lst->next = NULL;
	return (lst);
}
