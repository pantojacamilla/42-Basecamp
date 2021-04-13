/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:32:42 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/08 13:26:00 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_values(int a, int b, int c, int d)
{
	char a1;
	char b1;
	char c1;
	char d1;

	a1 = a + '0';
	b1 = b + '0';
	c1 = c + '0';
	d1 = d + '0';
	write(1, &a1, 1);
	write(1, &b1, 1);
	write(1, " ", 1);
	write(1, &c1, 1);
	write(1, &d1, 1);
	if (!(a1 == '9' && b1 == '8' && c1 == '9' && d1 == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_is_following_the_rules(int a, int b, int c, int d)
{
	int dezena_a;
	int dezena_c;
	int valor_lado_esquerdo;
	int valor_lado_direito;

	dezena_a = a * 10;
	valor_lado_esquerdo = dezena_a + b;
	dezena_c = c * 10;
	valor_lado_direito = dezena_c + d;
	if (!(a == c && b == d) && (valor_lado_esquerdo < valor_lado_direito))
	{
		ft_print_values(a, b, c, d);
	}
}

void	ft_mostra_lado_direito(int a, int b)
{
	int c;
	int d;

	c = 0;
	while (c < 10)
	{
		d = 0;
		while (d < 10)
		{
			ft_is_following_the_rules(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			ft_mostra_lado_direito(a, b);
			b++;
		}
		a++;
	}
}
