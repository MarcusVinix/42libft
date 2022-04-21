/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_free_and_null.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:29:41 by mavinici          #+#    #+#             */
/*   Updated: 2022/04/21 09:31:22 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// Set free and null in a char *
// It's necessary pass a char **
// example &str if is a char *
char	*ft_set_free_and_null(char **str)
{
	if (*str)
		free(*str);
	*str = NULL;
	return (NULL);
}
