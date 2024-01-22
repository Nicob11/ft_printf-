/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:52:58 by febasma           #+#    #+#             */
/*   Updated: 2024/01/22 21:45:18 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			count += ft_format(*(++str), ap);
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	int count;
	int printf_count;

	count = 0;
	printf_count = 0;

	count = ft_printf("ft %x, %X, %i\n", 42, -42, 42);
	printf_count = printf("pr %x, %X, %i\n", 42, -42, 42);
	ft_printf("count = %d\n %d", count, printf_count);
	return (0);
}