/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:31:50 by cpietrza          #+#    #+#             */
/*   Updated: 2025/12/01 08:27:37 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nb, int *count, int size_base, char *base)
{
	int	ret;

	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb >= size_base)
	{
		ret = ft_putnbr(nb / size_base, count, size_base, base);
		if (ret == -1)
			return (-1);
		if (ft_putchar(base[nb % size_base], count) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar(base[nb], count) == -1)
			return (-1);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int count;

// 	count = 0;

// printf("---- base decimal\n");
// ft_putnbr(-123456789, &count, 10, "0123456789");

// printf("\n---- base decimal unsigned\n");
// ft_putnbr((unsigned int)-123456, &count, 10, "0123456789");

// printf("\n---- base hexdecimal maj\n");
// ft_putnbr(127, &count, 16, "0123456789ABCDEF");

// printf("\n---- base hexdecimal min\n");
// ft_putnbr(127, &count, 16, "0123456789abcdef");

// printf("\n---- base hexdecimal min\n");
// ft_putnbr(-127, &count, 16, "0123456789abcdef");
// 		return (0);
// }