/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:32:42 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/08 14:09:18 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

_Bool	ft_is_following_the_rules(char a, char b, char c)
{
	_Bool resultado;

	resultado = 0;
	if ((a < b && a < c && b < c) && (a != b && a != c && b != c))
	{
		resultado = 1;
	}
	return (resultado);
}

void	ft_print_values(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 0 + '0';
	while (a <= (9 + '0'))
	{
		b = 0 + '0';
		while (b <= (9 + '0'))
		{
			c = 0 + '0';
			while (c <= (9 + '0'))
			{
				if (ft_is_following_the_rules(a, b, c))
				{
					ft_print_values(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
