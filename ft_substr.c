/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:32:44 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/21 18:32:44 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	size_t			f;

	i = start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	f = 0;
	while (f < len)
		substr[f++] = s[i++];
	substr[f] = '\0';
	return (substr);
}
