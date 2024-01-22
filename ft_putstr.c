/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:00 by febasma           #+#    #+#             */
/*   Updated: 2024/01/22 21:25:45 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (str == 0)
		count += ft_putstr("(null)");
	while (str[count])
	{
		count += ft_putchar(str[count]);
	}
	return (count);
}
