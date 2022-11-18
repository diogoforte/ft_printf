/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:15 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/18 10:44:39 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* 
Description:
	Outputs the character ’c'.
Return Value:
	number of items printed.
*/

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
