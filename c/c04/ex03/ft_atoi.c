/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:09:56 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/16 11:51:50 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\v') || (str[i] == '\f') ||
		(str[i] == '\n') || (str[i] == '\r') || (str[i] == ' '))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}
