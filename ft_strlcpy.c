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

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if ((size - 1) >= 0)
	{
		while (len < (size - 1) && src[len])
		{
			dst[len] = src[len];
			len++;
		}
	}
	while (src[len])
		len++;
	return (len);
}
