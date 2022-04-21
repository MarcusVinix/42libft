/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_rev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:34:25 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/21 09:31:22 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_split_rev(char **split)
{
	char	*tmp;
	char	*tmp2;
	char	*str;
	int		i;

	if (!split)
		return (NULL);
	str = ft_strjoin(split[0], " ");
	i = 1;
	while (split[i])
	{
		tmp = ft_strjoin(str, split[i]);
		free(str);
		str = tmp;
		if (split[++i])
		{
			tmp2 = ft_strjoin(str, " ");
			free(str);
			str = tmp2;
		}
	}
	return (str);
}
