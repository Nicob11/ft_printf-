/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:13:22 by febasma           #+#    #+#             */
/*   Updated: 2024/01/15 15:18:29 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_put_char(va_arg(ap, int));
	else if (format == 's')
		count += ft_put_str(va_arg(ap, char *));
	else if (format == 'p')
		count += ft_put_pointer(va_arg(ap, unsigned long long int), 'x');
	else if (format == 'd')
		count += ft_put_digit((va_arg(ap, int)));
	else if (format == 'i')
		count += ft_put_digit(va_arg(ap, int));
	else if (format == 'u')
		count += ft_put_unsigned(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_put_hexa(va_arg(ap, unsigned int), format);
	else if (format == '%')
		count += ft_put_char('%');
	return (count);
}
