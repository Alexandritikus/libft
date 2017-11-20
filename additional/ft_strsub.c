/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 08:16:31 by oshudria          #+#    #+#             */
/*   Updated: 2017/11/21 00:29:13 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;

	if (s)
	{
		fresh = ft_strnew(len);
		if (!fresh)
			return (NULL);
		i = 0;
		while (i < len)
			*(fresh + i++) = *(s + start++);
		return (fresh);
	}
	return ((char*)s);
}
