/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:24:34 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/08 14:14:05 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putcharvet(int vet[], int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		ft_putchar(vet[index] + '0');
		index++;
	}
}

int		ft_get_index(int combn[], int n)
{
	int index;
	int max_value;

	index = 0;
	max_value = 10 - n;
	while (index < n)
	{
		if (combn[index] == max_value)
			return (index - 1);
		if (index == (n - 1) && combn[index] < max_value)
			return (index);
		index++;
		max_value++;
	}
	return (-1);
}

void	ft_increment(int combn[], int n, int index)
{
	int c;

	c = index + 1;
	combn[index]++;
	while (c <= n)
	{
		combn[c] = combn[c - 1] + 1;
		c++;
	}
}

void	ft_print_combn(int n)
{
	int combn[n];
	int index;
	int pos_index;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		index = 0;
		while (index < n)
		{
			combn[index] = index;
			index++;
		}
		while (ft_get_index(combn, n) != -1)
		{
			pos_index = ft_get_index(combn, n);
			ft_putcharvet(combn, n);
			ft_increment(combn, n, pos_index);
			write(1, ", ", 2);
		}
		ft_putcharvet(combn, n);
	}
}
