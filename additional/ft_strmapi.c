/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 08:12:10 by oshudria          #+#    #+#             */
/*   Updated: 2017/11/21 00:27:09 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	if (s != 0)
	{
		fresh = ft_strnew(ft_strlen(s));
		if (!fresh)
			return (NULL);
		i = 0;
		while (*(s + i))
		{
			*(fresh + i) = f(i, *(s + i));
			i++;
		}
		return (fresh);
	}
	return ((char*)s);
}
