/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 17:19:31 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/15 17:19:31 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_s;

	i = 0;
	s_s = (char *)s;
	while (s_s[i])
	{
		if (s_s[i] == c)
			return (s_s + i);
		i++;
	}
	if (s_s[i] == c)
		return (s_s + i);
	return (NULL);
}
