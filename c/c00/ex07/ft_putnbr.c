/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:50:34 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/08 14:24:19 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		*ft_inverte_o_inteiro(long nb_em_long)
{
	static int	arr[10];
	int			ultimo_digito;
	int			contador;

	contador = 0;
	while (nb_em_long != 0)
	{
		ultimo_digito = nb_em_long % 10;
		arr[contador] = ultimo_digito;
		nb_em_long = nb_em_long / 10;
		contador++;
	}
	return (arr);
}

int		ft_amount_of_digits(long nb_em_long)
{
	int contador;

	contador = 0;
	if (nb_em_long == 0)
	{
		contador++;
	}
	else
	{
		while (nb_em_long != 0)
		{
			nb_em_long = nb_em_long / 10;
			contador++;
		}
	}
	return (contador);
}

void	ft_show_number(long valor_nb_long)
{
	char	ascii_caractere;
	int		amount_of_digits;
	int		*ponteiro;
	int		contador;

	amount_of_digits = ft_amount_of_digits(valor_nb_long);
	ponteiro = ft_inverte_o_inteiro(valor_nb_long);
	contador = amount_of_digits - 1;
	while (contador >= 0)
	{
		ascii_caractere = *(ponteiro + contador) + '0';
		ft_putchar(ascii_caractere);
		contador--;
	}
}

void	ft_putnbr(int nb)
{
	long valor_nb_long;

	if ((nb >= -2147483648) && (nb <= 2147483647))
	{
		valor_nb_long = nb;
		if (nb < 0)
		{
			valor_nb_long *= (-1);
			ft_putchar('-');
		}
		ft_show_number(valor_nb_long);
	}
}
