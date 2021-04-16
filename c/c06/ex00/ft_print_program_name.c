/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:17:33 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/16 16:30:12 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	current_char;

	i = 0;
	if (argc > 0)
	{
		while ((*(*argv + i) != '\0'))
		{
			current_char = *(*argv + i);
			write(1, &current_char, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
