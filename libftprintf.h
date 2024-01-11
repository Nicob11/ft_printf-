/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:49:30 by febasma           #+#    #+#             */
/*   Updated: 2024/01/11 22:05:05 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int        ft_printf(char const *, ...);

void        ft_putchar(char c);
void        ft_putstr(char *s);
void        ft_putnbr(int n);

#endif