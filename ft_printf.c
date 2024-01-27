/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:52:58 by febasma           #+#    #+#             */
/*   Updated: 2024/01/27 13:11:10 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			count += ft_format(*(++str), ap);
		else
			count += ft_put_char(*str);
		str++;
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	int count;
// 	int printf_count;

// 	count = 0;
// 	printf_count = 0;
// 	count = ft_printf("ft %p, %p\n", 0, 0);
// 	printf_count = printf("pr %p, %p\n", 0, 0);
// 	ft_printf("count = %d\n %d", count, printf_count);
// 	return (0);
// }