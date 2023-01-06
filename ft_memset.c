/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:24:25 by hece              #+#    #+#             */
/*   Updated: 2022/12/11 11:47:52 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t bytelength)
{
	char	*str;
	size_t	iter;

	iter = 0;
	str = (char *)ptr;
	while (iter < bytelength)
	{
			str[iter] = value;
			iter++;
	}
	return (ptr);
}
