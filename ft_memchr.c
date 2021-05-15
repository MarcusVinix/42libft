/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:47:28 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/14 20:47:28 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_s;
	size_t			i;

	s_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_s[i] == (unsigned char)c)
			return (s_s + i);
		i++;
	}
	return (NULL);
}
