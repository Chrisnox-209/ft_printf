/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:14:21 by cpietrza          #+#    #+#             */
/*   Updated: 2025/12/01 08:27:34 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_p(int *count, va_list *args)
{
	uintptr_t	p;

	p = (uintptr_t)va_arg(*args, void *);
	if (p == 0)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		(*count) += 5;
		return (1);
	}
	if (ft_putstr("0x", count) == -1)
		return (-1);
	ft_putnbr_unsigned(p, count);
	return (1);
}

int	ft_check(const char **format, int *count, va_list *args)
{
	if (**format == '%')
	{
		(*format)++;
		if (**format == '%')
			ft_putchar('%', count);
		if (**format == 'c')
			ft_putchar((char)va_arg(*args, int), count);
		if (**format == 's')
			ft_putstr(va_arg(*args, char *), count);
		if (**format == 'd' || **format == 'i')
			ft_putnbr(va_arg(*args, int), count, 10, "0123456789");
		if (**format == 'u')
			ft_putnbr(va_arg(*args, unsigned int), count, 10, "0123456789");
		if (**format == 'X')
			ft_putnbr(va_arg(*args, unsigned int), count, 16,
				"0123456789ABCDEF");
		if (**format == 'x')
			ft_putnbr(va_arg(*args, unsigned int), count, 16,
				"0123456789abcdef");
		if (**format == 'p')
			ft_p(count, args);
		return (1);
	}
	return (0);
}
