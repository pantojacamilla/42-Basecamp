/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 12:46:00 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/12 02:33:05 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

_Bool	ft_validate_input(int arg_count, char *input[]);
char	*ft_create_game_board(char *input[]);

int		main(int argc, char *argv[])
{
	char	*p_game_board;
	_Bool	result;

	result = ft_validate_input(argc, argv);
	if (result == 0)
	{
		return (0);
	}
	p_game_board = ft_create_game_board(argv);
	return (0);
}
