/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 15:00:02 by cpietrza          #+#    #+#             */
/*   Updated: 2025/12/01 08:27:35 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned long long nb, int *count)
{
	char	*hexa;
	int		ret;

	hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		ret = ft_putnbr_unsigned(nb / 16, count);
		if (ret == -1)
			return (-1);
		if (ft_putchar(hexa[nb % 16], count) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar(hexa[nb], count) == -1)
			return (-1);
	}
	return (1);
}

// int	main(void)
// {
// 	int count = 0;
// 	unsigned long long nb = 18446744073709551615ULL;
// 	ft_putnbr_unsigned(nb, &count);
// 	return (0);
// }
