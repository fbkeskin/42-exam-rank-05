/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbetul <fbetul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:06:39 by fatkeski          #+#    #+#             */
/*   Updated: 2025/07/31 23:01:40 by fbetul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int main(int argc, char* argv[])
{
	if(argc == 1)
	{
		if(execute_bsq(stdin) == -1)
			fprintf(stderr, "map error\n");
	}
	else
	{
		for(int i = 1; i < argc; i++)
        {
            if(convert_file_pointer(argv[i]) == -1)
                fprintf(stderr, "map error\n");
            if(i < argc - 1)
                fprintf(stdout, "\n");
        }
	}
	return(0);
}
