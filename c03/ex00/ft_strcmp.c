/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:50:52 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/14 22:38:13 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*s1_casted;
	unsigned char	*s2_casted;

	i = 0;
	s1_casted = (unsigned char *)s1;
	s2_casted = (unsigned char *)s2;
	while ((s1[i] != '\0' && s2[i] != '\0') || (s1[i] != s2[i]))
	{
		if (s1[i] > s2[i])
		{
			return ((s2_casted[i] - s1_casted[i]));
		}
		else if (s1[i] < s2[i])
		{
			return (s1_casted[i] - s2_casted[i]);
		}
		i++;
	}
	return (0);
}
