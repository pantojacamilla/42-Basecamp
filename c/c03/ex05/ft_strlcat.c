/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:53:44 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/16 03:20:17 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(src));
	}
	j = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && j + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
