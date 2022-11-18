/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:30:28 by dinunes-          #+#    #+#             */
/*   Updated: 2022/11/18 10:45:36 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
Description:
	outputs the string ’s’.
Return Value:
	Number of items printed.
*/

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	if (s)
	{
		while (s[i])
			write(1, &s[i++], 1);
	}
	return (i);
}

/* int main()
{
	char *str;
	printf("\n%d\n", ft_putstr((void*)0));
	printf("%s", str);
} */