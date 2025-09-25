/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   life.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatkeski <fatkeski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:41:40 by fbetul            #+#    #+#             */
/*   Updated: 2025/08/01 13:48:17 by fatkeski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "life.h"

int init_game(t_game* game, char* argv[])
{
	game->width = atoi(argv[1]);
	game->height = atoi(argv[2]);
	game->iterations = atoi(argv[3]);
	game->alive = '0';
	game->dead = ' ';
	game->i = 0;
	game->j = 0;
	game->draw = 0;
	game->board = (char**)malloc((game->height) * sizeof(char *));
	if(!(game->board))
		return(-1);
	for(int i = 0; i < game->height; i++)
	{
		game->board[i] = (char *)malloc((game->width) * sizeof(char));
		if(!(game->board[i])) {
			free_board(game);
			return(-1);
		}
		for(int j = 0; j < game->width; j++)
		{
			game->board[i][j] = ' ';
		}
	}
	return(0);
}

void fill_board(t_game* game)
{
	char buffer;
	int flag;

	while(read(STDIN_FILENO, &buffer, 1) == 1)
	{
		flag = 0;
		switch (buffer)
		{
		case 'w':
			if(game->i > 0)
			game->i--;
			break;
		case 's':
			if(game->i < (game->height - 1))
			game->i++;
			break;
		case 'a':
			if(game->j > 0)
			game->j--;
			break;
		case 'd':
			if(game->j < (game->width - 1))
			game->j++;
			break;
		case 'x':
			game->draw = !(game->draw);
			break;
		default:
			flag = 1;
			break;
		}

		if(game->draw && (flag == 0))
		{
			if((game->i >= 0 )&& (game->i < game->height) && (game->j >= 0) && (game->j < game->width))
				game->board[game->i][game->j] = game->alive;
		}
	}
}

int count_neighbors(t_game* game, int i, int j)
{
	int count = 0;
	for(int di = -1; di < 2; di++)
	{
		for(int dj = -1; dj < 2; dj++)
		{
			if((di == 0) && (dj == 0))
				continue;

			int ni = i + di;
			int nj = j + dj;
			if((ni >= 0) && (nj >=0) && (ni < game->height) && (nj < game->width)) {
				if(game->board[ni][nj] == game->alive)
					count++;
			}
		}
	}
	return(count);
}

int play(t_game* game)
{
	char** temp = (char**)malloc((game->height) * sizeof(char *));
	if(!temp)
		return(-1);
	for(int i = 0; i < game->height; i++)
	{
		temp[i] = (char *)malloc((game->width) * sizeof(char));
		if(!(temp[i]))
			return(-1);
	}

	for(int i = 0; i < game->height; i++)
	{
		for(int j = 0; j < game->width; j++)
		{
			int neighbors = count_neighbors(game, i, j);
			if(game->board[i][j] == game->alive) {
				if(neighbors == 2 || neighbors == 3) {
					temp[i][j] = game->alive;
				}
				else
					temp[i][j] = game->dead;
			}
			else {
				if(neighbors == 3) {
					temp[i][j] = game->alive;
				}
				else
					temp[i][j] = game->dead;
			}
		}
	}

	free_board(game);
	game->board = temp;
	return(0);
}

void print_board(t_game* game)
{
	for(int i = 0; i < game->height; i++)
	{
		for(int j = 0; j < game->width; j++)
		{
			putchar(game->board[i][j]);
		}
		putchar('\n');
	}
}

void free_board(t_game* game)
{
	if(game->board)
	{
		for(int i = 0; i < game->height; i++)
		{
			if(game->board[i])
				free(game->board[i]);
		}
		free(game->board);
	}
}

int main(int argc, char* argv[])
{
	if(argc != 4)
		return (1);

	t_game game;

	if(init_game(&game, argv) == -1)
		return(1);

	fill_board(&game);

	for(int i = 0; i < game.iterations; i++) {
		if(play(&game) == -1) {
			free_board(&game);
			return(1);
		}
	}
	print_board(&game);
	free_board(&game);

	return (0);
}
