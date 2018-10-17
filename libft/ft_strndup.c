/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 10:59:23 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/11 10:59:24 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *src, size_t n)
{
	int		i;
	char	*dup;

	i = -1;
	if (!(dup = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (src[++i] && n--)
		dup[i] = src[i];
	dup[i] = '\0';
	return ((char*)dup);
}
