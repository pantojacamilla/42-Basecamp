/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game_board.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clobato- <clobato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:44:47 by clobato-          #+#    #+#             */
/*   Updated: 2021/04/12 00:58:11 by clobato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define C 6
#define L 6

void	ft_place_zero_on_corner(char game_board[L][C])
{
	game_board[0][0] = '0';
	game_board[0][5] = '0';
	game_board[5][0] = '0';
	game_board[5][5] = '0';
}

void	ft_place_control_line(int *i, char *input[], char game_board[L][C])
{
	int line_spot;
	int column_spot;

	line_spot = -1;
	while (line_spot++ < 5)
	{
		column_spot = 0;
		while (column_spot++ < 4)
		{
			game_board[line_spot][column_spot] = *(*input + *i);
			*i += 2;
		}
		line_spot += 4;
	}
}

void	ft_place_control_column(int *i, char *input[], char game_board[L][C])
{
	int line_spot;
	int column_spot;

	column_spot = -1;
	while (column_spot++ < 5)
	{
		line_spot = 0;
		while (line_spot++ < 4)
		{
			game_board[line_spot][column_spot] = *(*input + *i);
			*i += 2;
		}
		column_spot += 4;
	}
}

void	*ft_create_game_board(char *input[])
{
	static char	game_board[6][6];
	int			i;

	input += 1;
	i = 0;
	ft_place_zero_on_corner(game_board);
	ft_place_control_line(&i, input, game_board);
	ft_place_control_column(&i, input, game_board);
	return (**&game_board);
}
