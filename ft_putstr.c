/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:00 by febasma           #+#    #+#             */
/*   Updated: 2024/01/22 20:34:14 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	size;

	size = 0;
	if (str == 0)
		ft_putstr("(null)");
	while (str[size])
	{
		size += ft_putchar(str[size]);
	}
	return (size);
}
