/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:34:15 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/18 17:05:51 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conversions(char *str, va_list list)
{
	int	ret;

	ret = 0;
	if (*str == 'c')
		ret += ft_putchar(va_arg(list, int));
	else if (*str == 's')
		ret += ft_putstr(va_arg(list, char *));
	else if (*str == 'p')
		ret += ft_putpointerhex(va_arg(list, unsigned long int),
				"0123456789abcdef", 0);
	else if (*str == 'd' || *str == 'i')
		ret += ft_putnbr(va_arg(list, int));
	else if (*str == 'u')
		ret += ft_putunsignednbr(va_arg(list, unsigned int));
	else if (*str == 'x')
		ret += ft_putnbrhex(va_arg(list, int), "0123456789abcdef");
	else if (*str == 'X')
		ret += ft_putnbrhex(va_arg(list, int), "0123456789ABCDEF");
	else if (*str == '%')
		ret += ft_putchar('%');
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		counter;
	va_list	list;

	i = 0;
	counter = 0;
	va_start(list, str);
	while (str[counter])
	{
		if (str[counter] == '%')
			i += conversions((char *)&str[++counter], list);
		else
			i += ft_putchar(str[counter]);
		counter++;
	}
	va_end(list);
	return (i);
}
