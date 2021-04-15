/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:50:52 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/15 23:23:29 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*s1_casted;
	unsigned char	*s2_casted;

	i = 0;
	s1_casted = (unsigned char *)s1;
	s2_casted = (unsigned char *)s2;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1_casted[i] - s2_casted[i]);
		}
		i++;
	}
	return (s1_casted[i] - s2_casted[i]);
}
