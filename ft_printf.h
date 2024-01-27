/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febasma <febasma@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:49:30 by febasma           #+#    #+#             */
/*   Updated: 2024/01/25 14:44:19 by febasma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_put_char(int c);
int	ft_put_str(char *str);
int	ft_put_digit(int n);
int	ft_format(char format, va_list ap);
int	ft_put_hexa(unsigned long n, char format);
int	ft_put_pointer(unsigned long long n, char format);
int	ft_put_unsigned(unsigned int n);

#endif
