/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 18:24:43 by mavinici          #+#    #+#             */
/*   Updated: 2021/05/22 18:24:43 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int num, int base)
{
	int		count;
	long	n;

	n = num;
	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n / base > 0)
	{
		n /= base;
		count++;
	}
	return (count);
}

char	*ft_itoa_base(int n, char *base, int len_base)
{
	int				i;
	char			*str;
	int				digits;
	long			num;

	digits = count_digits(n, len_base);
	num = n;
	str = (char *)malloc(digits + 1);
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	i = 0;
	if (num < 0)
	{
		str[i++] = '-';
		num *= -1;
	}
	while (digits > i && num / len_base > 0)
	{
		str[digits - 1] = base[num % len_base];
		num /= len_base;
		digits--;
	}
	str[i] = base[num % len_base];
	return (str);
}
