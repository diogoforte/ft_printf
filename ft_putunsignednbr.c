/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:59:20 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/18 10:45:16 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* 
Description:
	Outputs the unsigned integer ’n’.
Return Value:
	Number of items printed.
*/

int	ft_putunsignednbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
		i += ft_putunsignednbr(n / 10);
	i += ft_putchar(n % 10 + 48);
	return (i);
}
