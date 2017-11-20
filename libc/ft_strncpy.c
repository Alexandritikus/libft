/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:35:44 by oshudria          #+#    #+#             */
/*   Updated: 2017/11/21 00:01:46 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n)
	{
		*d = *s;
		if (*s == '\0')
		{
			while (n--)
				*d++ = '\0';
			return (dest);
		}
		n--;
		d++;
		s++;
	}
	return (dest);
}
