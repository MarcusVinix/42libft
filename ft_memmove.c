/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:37:13 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/14 20:37:13 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s_dest;
	const unsigned char	*s_src;
	size_t				i;

	s_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			s_dest[i] = s_src[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i > 0)
		{
			s_dest[i] = s_src[i];
			i--;
		}
	}
	return (dest);
}
