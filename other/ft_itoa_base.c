/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <oshudria@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 11:48:00 by exam              #+#    #+#             */
/*   Updated: 2017/11/25 14:23:10 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_size(int value, int base)
{
	int	size;

	size = 1;
	if (base == 10 && value < 0)
		size++;
	while (value / base)
	{
		size++;
		value /= base;
	}
	return (size);
}

static void	ft_calc(char *res, int value, int base, int *p)
{
	const char	x_base[] = "0123456789ABCDEF";

	if (value <= -base || value >= base)
		ft_calc(res, value / base, base, p);
	res[(*p)++] = x_base[ABS(value % base)];
}

char		*ft_itoa_base(int value, int base)
{
	char	*res;
	int		p;

	res = NULL;
	p = 0;
	if (base < 2 || base > 16 ||
			!(res = (char*)malloc(sizeof(char) * get_size(value, base) + 1)))
		return (NULL);
	if (base == 10 && value < 0)
		res[p++] = '-';
	ft_calc(res, value, base, &p);
	res[p] = '\0';
	return (res);
}
