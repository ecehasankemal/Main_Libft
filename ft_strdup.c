/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece  <hece@student.42kocaeli.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:09:23 by hece              #+#    #+#             */
/*   Updated: 2022/12/11 11:52:26 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*string;
	size_t	index;

	string = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (string == NULL)
		return (NULL);
	index = 0;
	while (str[index] != '\0')
	{
		string[index] = str[index];
		index++;
	}
	string[index] = '\0';
	return (string);
}
