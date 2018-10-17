/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:02:49 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/04 15:02:50 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_dup;
	char	*src_dup;
	int		i;

	dst_dup = (char*)dst;
	src_dup = (char*)src;
	i = -1;
	if (dst_dup > src_dup)
	{
		while ((int)(--len) >= 0)
			*(dst_dup + len) = *(src_dup + len);
	}
	else
	{
		while (++i < (int)len)
			*(dst_dup + i) = *(src_dup + i);
	}
	return (dst_dup);
}
