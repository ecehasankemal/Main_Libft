/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:38:32 by hece              #+#    #+#             */
/*   Updated: 2022/12/11 11:59:30 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		iter;
	char	*ptr;

	iter = 0;
	ptr = 0;
	while (str[iter])
	{
		if (str[iter] == (unsigned char)c)
			ptr = ((char *)&str[iter]);
		iter++;
	}
	if (str[iter] == c)
			ptr = (char *)&str[iter];
	return (ptr);
}
