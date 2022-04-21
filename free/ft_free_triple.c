/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_triple.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:33:02 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/21 09:31:22 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>

char	*ft_free_triple(char ***str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
		ft_free_split(str[i++]);
	free(str);
	return (NULL);
}
