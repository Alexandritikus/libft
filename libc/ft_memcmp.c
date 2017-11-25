/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:08:11 by oshudria          #+#    #+#             */
/*   Updated: 2017/11/25 21:02:49 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		++str1;
		++str2;
	}
	return (0);
}
