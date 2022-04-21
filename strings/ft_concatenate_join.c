/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concatenate_join.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:21:01 by mavinici          #+#    #+#             */
/*   Updated: 2021/11/17 16:21:01 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_concatenate_join(char **aux, char *str)
{
	char	*aux_two;

	aux_two = ft_strjoin(*aux, str);
	if (*aux)
		free(*aux);
	*aux = NULL;
	*aux = aux_two;
}
