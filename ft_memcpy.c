/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:50:51 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/14 19:50:51 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*s_dest;
	const unsigned char	*s_src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	s_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		s_dest[i] = s_src[i];
		i++;
	}
	return (dest);
}
