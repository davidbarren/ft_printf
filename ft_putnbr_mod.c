/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:28:11 by dbarrene          #+#    #+#             */
/*   Updated: 2023/11/24 19:06:01 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_mod(int n, int *ptr)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		if (ft_putstr_mod("-2147483648", ptr) == -1)
			return (*ptr = -1);
		else
			return (11);
	}
	else if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
		count += ft_putnbr_mod(n, ptr) + 1;
	}
	else if (n > 9)
	{
		count += ft_putnbr_mod(n / 10, ptr);
		count += ft_putnbr_mod(n % 10, ptr);
	}
	else
		count += ft_putchar_mod(n + 48, ptr);
	return (count);
}
