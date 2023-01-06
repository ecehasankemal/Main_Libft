/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:53:12 by hece              #+#    #+#             */
/*   Updated: 2022/12/11 11:57:56 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i1;
	size_t	i2;

	if (!*to_find)
		return ((char *)str);
	i1 = 0;
	while (str[i1] != '\0' && (size_t)i1 < len)
	{
		if (str[i1] == to_find[0])
		{
			i2 = 0;
			while (str[i1 + i2] == to_find[i2] && i1 + i2 < len)
			{
				if (to_find[i2 + 1] == '\0')
					return ((char *)&str[i1]);
				i2++;
			}
		}
		i1++;
	}
	return (0);
}
