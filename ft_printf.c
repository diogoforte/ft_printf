/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:27:46 by dinunes-          #+#    #+#             */
/*   Updated: 2023/06/07 13:36:11 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		ret;
	va_list	p;

	ret = 0;
	va_start(p, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ret += conversions(&*str, p);
		}
		else
			ret += write(1, &*str, 1);
		str++;
	}
	va_end(p);
	return (ret);
}

int	conversions(const char *str, va_list p)
{
	int	ret;
	int	c;

	ret = 0;
	c = 0;
	if (*str == 'c')
	{
		c = va_arg(p, int);
		ret += write(1, &c, 1);
	}
	else if (*str == 's')
		ret += ft_putstr(va_arg(p, char *));
	else if (*str == 'd' || *str == 'i')
		ret += ft_putdigit(va_arg(p, int), 10, DECIMAL);
	else if (*str == 'u')
		ret += ft_putdigit(va_arg(p, unsigned int), 10, DECIMAL);
	else if (*str == 'x')
		ret += ft_putdigit(va_arg(p, unsigned int), 16, HEXA);
	else if (*str == 'X')
		ret += ft_putdigit(va_arg(p, unsigned int), 16, HEXA2);
	else if (*str == 'p')
		ret += ft_putpointer(va_arg(p, unsigned long int), 1, HEXA);
	else if (*str == '%')
		ret += write(1, "%%", 1);
	return (ret);
}

int	ft_putstr(char *s)
{
	int	ret;

	ret = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		ret += write(1, &*s, 1);
		s++;
	}
	return (ret);
}

int	ft_putdigit(long long int n, int base, char	*basestr)
{
	int		ret;

	ret = 0;
	if (n < 0 && base == 10)
	{
		ret += write(1, "-", 1);
		n *= -1;
	}
	if (n >= base)
		ret += ft_putdigit(n / base, base, basestr);
	ret += write(1, &basestr[n % base], 1);
	return (ret);
}

int	ft_putpointer(unsigned long int n, int flag, char	*basestr)
{
	int		ret;

	ret = 0;
	if (!n)
		return (write(1, "(nil)", 5));
	if (flag == 1)
		ret += write(1, "0x", 2);
	if (n >= 16)
		ret += ft_putpointer(n / 16, 0, basestr);
	ret += write(1, &basestr[n % 16], 1);
	return (ret);
}
