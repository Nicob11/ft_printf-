/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:38:00 by febasma           #+#    #+#             */
/*   Updated: 2024/01/11 14:38:59 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     ft_putstr(char *s)
{
    int i;

    i = 0;
    if (s == '\0')
        ft_putstr("(null)");

    while(s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
    return(i);
}