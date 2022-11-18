/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:59:20 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/18 10:50:30 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* 
Description:
	Outputs the integer ’n’ in HEX.
Return Value:
	Number of items printed.
*/

int	ft_putnbrhex(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_putnbrhex(n / 16, base);
	len += ft_putchar(base[n % 16]);
	return (len);
}

/* int main()
{
	printf("\n%d\n", ft_putnbrhex(1000, "0123456789abcdef"));
} */