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

#include "libftprintf.h"

int	ft_format(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == '%')
		count += ft_putchar('%');
	else if (format == 'i')
		count += ft_putdigit((long)(va_arg(ap, int)), 10, 'i');
	else if (format == 'd')
		count += ft_putdigit((long)(va_arg(ap, int)), 10, 'd');
	else if (format == 'x' || format == 'X')
		count += ft_putdigit((long)(va_arg(ap, int)), 16, format);
	return (count);
}
