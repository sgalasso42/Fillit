/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 17:29:15 by tblaudez          #+#    #+#             */
/*   Updated: 2018/04/09 17:29:18 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		tmp;
	int		sign;
	int		i;
	char	*str;

	i = (n == 0 ? 1 : 0);
	sign = (n < 0 && n != -2147483648 ? 1 : 0);
	sign = (n == -2147483648 ? 2 : sign);
	n = (n < 0 ? -n : n);
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		i++;
	}
	if (!(str = ft_strnew(i)))
		return (NULL);
	while (i--)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	str = (sign == 2 ? ft_strjoin("-", "2147483648") : str);
	return (sign == 1 ? ft_strjoin("-", str) : str);
}
