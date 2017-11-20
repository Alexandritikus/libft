/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:00:29 by oshudria          #+#    #+#             */
/*   Updated: 2017/11/21 00:03:41 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	const char	*tmp;

	tmp = s;
	last = NULL;
	while (*tmp++)
	{
		if (*s == (char)c)
			last = (char*)s;
		s++;
	}
	if (*s == (char)c)
		last = (char*)s;
	return (last);
}
