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

	s_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (dest < src)
		ft_memcpy(s_dest, s_src, n);
	else
		while (n--)
			s_dest[n] = s_src[n];
	return (s_dest);
}
