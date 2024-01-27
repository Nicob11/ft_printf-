/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:42:42 by febasma           #+#    #+#             */
/*   Updated: 2024/01/25 17:04:44 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_digit(int n)
{
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_put_str("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count += ft_put_char('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_put_digit(n / 10);
		count += ft_put_digit(n % 10);
	}
	else
		count += ft_put_char(n + '0');
	return (count);
}
