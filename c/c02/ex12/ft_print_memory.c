/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 01:21:27 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/14 12:38:46 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
// ◦The hexadecimal address of the first line’s first character followed by a ’:’.
// ◦The content in hexadecimal with a space each 2 characters and should bepadded with spaces if needed (see the example below).
// ◦The content in printable characters

	printf("Size: %d\n\n", size);
	printf("%c\n", *(char *)addr);

	char aux_char;
	// char *aux_char_addr;


	aux_char = (*(char *)(addr + 1));
	// *aux_char_addr = (char)&addr;

	write(1, &aux_char, 1);
	printf("\n");
	write(1, &addr, 1);

	// printf("%p\n", (&addr + 1));
	// printf("%p\n", (&addr + 2));

/*
	Acessar o conteúdo da posicao:				printf("%c\n", *(char *)(addr + 1));
	Acessar o endereço de memória da posição:	printf("%p\n", (&addr + 1));
 */
	return (NULL);
}
