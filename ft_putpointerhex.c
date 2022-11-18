/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointerhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:43:26 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/18 10:49:44 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* 
Description:
	Outputs the address of 'pointer' in HEX.
Return Value:
	Number of items printed.
*/

int	ft_putpointerhex(unsigned long int pointer, char *base, int flag)
{
	int	len;

	len = 0;
	if (!pointer)
		return (write(1, "(nil)", 5));
	if (!flag)
		len += write(1, "0x", 2);
	if (pointer >= 16)
		len += ft_putpointerhex(pointer / 16, base, 1);
	len += ft_putchar(base[pointer % 16]);
	return (len);
}

/* int main()
{
	printf("%d\n", ft_putpointerhex(16, "0123456789abcdef"));
} */