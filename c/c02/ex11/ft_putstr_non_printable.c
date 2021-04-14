/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:00:20 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/14 00:38:17 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa_converter(char c)
{
	char	*chars_hexadecimal;
	char	resp;
	int		quotient;
	int		remainder;

	chars_hexadecimal = "0123456789abcdef";
	quotient = c / 16;
	remainder = c % 16;
	resp = chars_hexadecimal[quotient];
	write(1, &resp, 1);
	resp = chars_hexadecimal[remainder];
	write(1, &resp, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			write(1, "\\", 1);
			ft_hexa_converter(*str);
		}
		else
		{
			write(1, *&str, 1);
		}
		str++;
	}
}
