/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonteir <mmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:19:51 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/11 13:51:42 by mmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

_Bool	ft_validate_amount_of_arguments(int arg_count)
{
	_Bool result;

	result = 1;
	if (arg_count < 2)
	{
		write(1, "Error\n", 6);
		result = 0;
	}
	return (result);
}

_Bool	ft_validate_input_caracteres(char *input[], int *valid_input_amount)
{
	int		i;
	_Bool	result;

	input++;
	result = 1;
	i = 0;
	while (*(*input + i) != '\0')
	{
		if (*(*input + i) >= '1' && *(*input + i) <= '4')
		{
			*valid_input_amount += 1;
		}
		else if (*(*input + i) != ' ')
		{
			write(1, "Error\n", 6);
			result = 0;
			return (result);
		}
		i++;
	}
	return (result);
}

_Bool	ft_validate_valid_input_amount(int valid_input_amount)
{
	_Bool result;

	result = 1;
	if (valid_input_amount != 16)
	{
		write(1, "Erro\n", 6);
		result = 0;
	}
	return (result);
}

_Bool	ft_validate_input(int arg_count, char *input[])
{
	int result;
	int valid_input_amount;

	valid_input_amount = 0;
	result = ft_validate_amount_of_arguments(arg_count);
	if (result == 0)
	{
		return (result);
	}
	result = ft_validate_input_caracteres(input, &valid_input_amount);
	if (result == 0)
	{
		return (result);
	}
	result = ft_validate_valid_input_amount(valid_input_amount);
	if (result == 0)
	{
		return (result);
	}
	return (1);
}
