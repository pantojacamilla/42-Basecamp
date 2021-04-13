/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:14:06 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/05 22:23:44 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char zero_em_ascii;
	char nove_em_ascii;
	char contador;

	zero_em_ascii = 48;
	nove_em_ascii = 57;
	contador = zero_em_ascii;
	while (contador <= nove_em_ascii)
	{
		write(1, &contador, 1);
		contador++;
	}
}
