/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:25:24 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/13 23:52:16 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *start;

	start = *&str;
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
	}
	while (*(str++) != '\0')
	{
		if ((*str == ' ') && (*(str + 1) != ' '))
		{
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
			{
				str++;
				*str = *str - 32;
			}
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
	}
	return (start);
}
