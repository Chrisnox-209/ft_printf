/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpietrza <cpietrza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:08:04 by cpietrza          #+#    #+#             */
/*   Updated: 2025/12/01 08:27:25 by cpietrza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_check(const char **format, int *count, va_list *args);
int	ft_printf(const char *format, ...);
int	ft_putstr(char *str, int *count);
int	ft_putchar(char c, int *count);
int	ft_putnbr_unsigned(unsigned long long nb, int *count);
int	ft_putnbr(long int nb, int *count, int size_base, char	*base);

#endif
