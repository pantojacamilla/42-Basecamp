/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:50:52 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/15 00:00:24 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

_Bool	ft_is_it_correct(char s1, char s2, unsigned int n, unsigned int i)
{
	if (((s1 != '\0' && s2 != '\0') || (s1 != s2)) && (i < (n - 1)))
	{
		return (1);
	}
	return (0);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s1_casted;
	unsigned char	*s2_casted;

	i = 0;
	s1_casted = (unsigned char *)s1;
	s2_casted = (unsigned char *)s2;
	while (ft_is_it_correct(s1[i], s2[i], n, i) == 1)
	{
		if (s1[i] > s2[i])
		{
			return ((s2_casted[i] - s1_casted[i]));
		}
		if (s1[i] < s2[i])
		{
			return (s1_casted[i] - s2_casted[i]);
		}
		i++;
	}
	return (0);
}
