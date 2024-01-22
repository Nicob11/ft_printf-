/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:42:42 by febasma           #+#    #+#             */
/*   Updated: 2024/01/22 20:34:08 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putdigit(long n, int base)
{
	int		count;
	char	*symbol;

	count = 0;
	symbol = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar('-');
		ft_putdigit(-n, base);
	}
	else if (n < base)
		ft_putchar(symbol[n]);
	else
	{
		ft_putdigit(n / base, base);
		ft_putdigit(n % base, base);
	}
	return (count);
}
