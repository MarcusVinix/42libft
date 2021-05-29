/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:38:43 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/13 21:38:43 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (!dst || !src)
		return (NULL);
	len = 0;
	i = 0;
	while ((i < size) && src[i])
	{
		dst[i] = src[i];
		i++;
		len++;
	}
	if (i == size)
		i--;
	dst[i] = '\0';
	while (src[len])
		len++;
	return (len);
}
