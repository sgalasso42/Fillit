/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:29:02 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/06 14:29:04 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen((char*)s))))
		return (NULL);
	str = ft_strcpy(str, s);
	i = -1;
	while (str[++i])
		str[i] = f(str[i]);
	return (str);
}
