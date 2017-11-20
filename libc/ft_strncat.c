/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:39:03 by oshudria          #+#    #+#             */
/*   Updated: 2017/11/21 00:02:38 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*tdest;

	tdest = dest;
	while (*tdest)
		tdest++;
	while (n && *src)
	{
		*tdest++ = *src++;
		n--;
	}
	*tdest = '\0';
	return (dest);
}
