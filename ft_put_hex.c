/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:18:49 by dbarrene          #+#    #+#             */
/*   Updated: 2023/11/24 19:05:27 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long n, int caps, int *ptr)
{
	int	count;

	if (*ptr == -1)
		return (-1);
	count = 0;
	if (n >= 16)
	{
		count += ft_put_hex(n / 16, caps, ptr);
		count += ft_put_hex(n % 16, caps, ptr);
	}
	if ((caps == 1) && (n <= 15 && n >= 10))
		count += ft_putchar_mod(55 + n, ptr);
	else if ((caps == 0) && (n <= 15 && n >= 10))
		count += ft_putchar_mod(87 + n, ptr);
	else if (n < 10)
		count += ft_putnbr_mod(n, ptr);
	return (count);
}
