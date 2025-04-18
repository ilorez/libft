/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znajdaou <znajdaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:24:13 by znajdaou          #+#    #+#             */
/*   Updated: 2025/04/16 17:12:43 by znajdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_print_unsigned_nbr(unsigned int n)
{
	int	out_len;

	out_len = 0;
	if (n >= 10)
	{
		out_len += ft_print_unsigned_nbr(n / 10);
		out_len += ft_print_char(n % 10 + '0');
	}
	else
		out_len += ft_print_char(n + '0');
	return (out_len);
}

static int	ft_print_type(char type, va_list va)
{
	if (type == 'c')
		return (ft_print_char(va_arg(va, int)));
	else if (type == 's')
		return (ft_print_str(va_arg(va, char *)));
	else if (type == 'd' || type == 'i')
		return (ft_print_nbr(va_arg(va, int)));
	else if (type == 'u')
		return (ft_print_unsigned_nbr(va_arg(va, unsigned int)));
	else if (type == 'x')
		return (ft_print_hexa(va_arg(va, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (ft_print_hexa(va_arg(va, unsigned int), "0123456789ABCDEF"));
	else if (type == 'p')
		return (ft_print_ptr(va_arg(va, void *)));
	else if (type == '%')
		return (ft_print_char(type));
	return (ft_print_char('%') + ft_print_char(type));
}

int	ft_printf(const char *format, ...)
{
	va_list	va;
	int		out_len;

	if (!format || write(1, "", 0) == -1)
		return (-1);
	va_start(va, format);
	out_len = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
			out_len += ft_print_type(*(++format), va);
		else if (*format != '%')
			out_len += ft_print_char(*format);
		else
			return (-1);
		format++;
	}
	va_end(va);
	return (out_len);
}
