/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 18:00:36 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/28 21:07:45 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_s;
	int		i;
	int		pos;

	i = 0;
	pos = -1;
	s_s = (char *)s;
	while (s_s[i])
	{
		if (s_s[i] == (char)c)
			pos = i;
		i++;
	}
	if ((char)c == '\0')
		return (s_s + i);
	else if (pos >= 0)
		return (s_s + pos);
	return (NULL);
}
