/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:07:46 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/14 20:07:46 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*s_dest;
	const unsigned char	*s_src;
	size_t				i;

	s_src = (unsigned char *)src;
	s_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{	
		s_dest[i] = s_src[i];
		if (s_src[i] == (unsigned char)c)
			return (s_dest + i + 1);
		i++;
	}
	return (NULL);
}
