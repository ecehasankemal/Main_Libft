/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:46:04 by hece              #+#    #+#             */
/*   Updated: 2022/12/11 11:45:39 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memchr("sample", 'a', 6); == ample

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*string;
	size_t	iter;

	iter = 0;
	string = (char *)str;
	while (iter < n)
	{
		if ((unsigned char)string[iter] == (unsigned char)c)
			return ((void *)&string[iter]);
		iter++;
	}
	return (0);
}
