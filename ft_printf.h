/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:28:07 by dinunes-          #+#    #+#             */
/*   Updated: 2023/06/07 13:34:01 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# ifndef DECIMAL
#  define DECIMAL "0123456789"
# endif
# ifndef HEXA
#  define HEXA "0123456789abcdef"
# endif
# ifndef HEXA2
#  define HEXA2 "0123456789ABCDEF"
# endif

int	ft_printf(const char *str, ...);
int	conversions(const char *str, va_list p);
int	ft_putdigit(long long int n, int base, char *basestr);
int	ft_putpointer(unsigned long int n, int flag, char	*basestr);
int	ft_putstr(char *s);
#endif