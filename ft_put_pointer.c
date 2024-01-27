/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:08:30 by febasma           #+#    #+#             */
/*   Updated: 2024/01/27 13:14:11 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long long n, char format)
{
	int	count;

	count = 0;
	if (n == '\0')
	{
		count += ft_put_str("0x0");
		return (count);
	}
	count += ft_put_str("0x");
	count += ft_put_hexa(n, format);
	return (count);
}
