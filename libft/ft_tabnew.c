/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:26:33 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/12 16:26:38 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_tabnew(int len)
{
	char **tab;

	len++;
	if (!(tab = (char**)malloc(sizeof(char*) * len)))
		return (NULL);
	while (--len)
		tab[len] = NULL;
	return (tab);
}
