/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:53:00 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/06 14:53:01 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	trim_len(char const *s)
{
	int i;
	int spaces;
	int len;

	len = ft_strlen(s);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	spaces = i;
	if (s[i])
	{
		i = len - 1;
		while (ft_isspace(s[i]))
		{
			i--;
			spaces++;
		}
	}
	return (len - spaces);
}

char		*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = trim_len(s);
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (len == 0)
		return (ft_memset(str, ' ', 0));
	while (ft_isspace(*s))
		s++;
	while (i < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
