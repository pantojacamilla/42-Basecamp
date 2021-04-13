/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:42:57 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/09 11:23:41 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int end;
	int start;
	int aux;

	end = size - 1;
	start = 0;
	aux = 0;
	while (start < end)
	{
		aux = tab[start];
		tab[start] = tab[end];
		tab[end] = aux;
		start++;
		end--;
	}
}
