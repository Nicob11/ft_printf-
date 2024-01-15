/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:52:58 by febasma           #+#    #+#             */
/*   Updated: 2024/01/14 22:25:09 by febasma          ###   ########.fr       */
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
		if (str[i] == '%')
		{
			count += ft_what_format(ap, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		str++;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	int count;

	count = ft_printf("hello %c, %s  ", "n", "world");
	return (0);
}