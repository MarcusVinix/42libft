/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:36:29 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/21 20:36:29 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	size_t	lens1;
	size_t	i;
	char	*newstr;

	lens1 = ft_strlen(s1);
	total = lens1 + ft_strlen(s2);
	newstr = (char *)malloc(total + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		newstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (lens1 < total)
	{
		newstr[lens1] = s2[i];
		i++;
		lens1++;
	}
	newstr[lens1] = '\0';
	return (newstr);
}
