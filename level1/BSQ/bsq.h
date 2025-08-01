/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbetul <fbetul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:39:16 by fatkeski          #+#    #+#             */
/*   Updated: 2025/07/31 23:05:16 by fbetul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
#define BSQ_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_elements
{
	int n_lines;
	char empty;
	char obstacle;
	char full;

} t_elements;

typedef struct s_map
{
	char** grid;
	int width;
	int height;
} t_map;

typedef struct s_square
{
	int size;
	int i;
	int j;
} t_square;

int execute_bsq(FILE* file);
int convert_file_pointer(char* name);

#endif
