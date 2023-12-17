/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:36:55 by dbarrene          #+#    #+#             */
/*   Updated: 2023/11/24 19:05:13 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr_mod(int n, int *ptr);
int	ft_putchar_mod(int c, int *ptr);
int	ft_putstr_mod(char *s, int *ptr);
int	ft_put_unsigned(unsigned int n, int *ptr);
int	ft_format_check(char spec, va_list args, int *ptr);
int	ft_put_hex(unsigned long n, int caps, int *ptr);
int	ft_put_ptr(unsigned long n, int *ptr);
int	ft_iterate_format(const char *format, va_list args, int *ptr);

#endif
