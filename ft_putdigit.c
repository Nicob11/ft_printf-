/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:42:42 by febasma           #+#    #+#             */
/*   Updated: 2024/01/22 21:57:32 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putdigit(long n, int base, char format)
{
	int		count;
	char	*symbol_lower;
	char	*symbol_upper;

	count = 0;
	symbol_lower = "0123456789abcdef";
	symbol_upper = "0123456789ABCDEF";
	if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putdigit(-n, base, format);
	}
	else if (n < base && format == 'x')
		count += ft_putchar(symbol_lower[n]);
	else if (n < base && format == 'X')
		count += ft_putchar(symbol_upper[n]);
	else if (n < base)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_putdigit((n / base), base, format);
		count += ft_putdigit((n % base), base, format);
	}
	return (count);
}
