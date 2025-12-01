/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:05:36 by cpietrza          #+#    #+#             */
/*   Updated: 2025/12/01 20:29:40 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%' && *(format + 1) == '\0')
			return (-1);
		if (ft_check(&format, &count, &args) == 1)
			format++;
		else if (format)
		{
			if (ft_putchar(*format, &count) == -1)
				return (-1);
			format++;
		}
	}
	va_end(args);
	return (count);
}
