/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:02:23 by febasma           #+#    #+#             */
/*   Updated: 2024/01/27 12:12:34 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned long n, char format)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_put_hexa(n / 16, format);
		count += ft_put_hexa(n % 16, format);
	}
	else if (n < 10)
		count += ft_put_char(n + '0');
	else if (format == 'x')
		count += ft_put_char(n + 87);
	else if (format == 'X')
		count += ft_put_char(n + 55);
	return (count);
}
