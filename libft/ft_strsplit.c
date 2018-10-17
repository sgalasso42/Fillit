/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 14:09:18 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/09 14:09:20 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static	int	ft_countwrd(char const *s, char c)
{
	int wrd;

	wrd = (*s != c ? 1 : 0);
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			wrd++;
		s++;
	}
	return (wrd);
}

char		**ft_strsplit(char const *s, char c)
{
	int		beg;
	int		end;
	int		i;
	int		j;
	char	**tab;

	if (!s || !(tab = (char**)malloc(sizeof(char*) * (ft_countwrd(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		beg = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		if (end > beg)
			tab[j++] = ft_strsub(s, beg, end - beg);
	}
	tab[j] = 0;
	return (tab);
}
