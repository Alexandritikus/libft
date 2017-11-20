/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 12:01:33 by oshudria          #+#    #+#             */
/*   Updated: 2017/11/21 00:02:19 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*tdest;

	tdest = dest;
	while (*tdest)
		tdest++;
	while (*src)
	{
		*tdest = *src;
		tdest++;
		src++;
	}
	*tdest = '\0';
	return (dest);
}
